

#include "PmergeMe.hpp"


template <class T>
void insertionT(T &new_vec, int start, int end)
{
    for (int i = start; i < end; ++i)
    {
        int temp = new_vec[i + 1];
        int j = i;
        while (j >= start && new_vec[j] > temp)
        {
            std::swap(new_vec[j + 1] ,new_vec[j]);
            --j;
        }
    }
}

template <class T>
void merge(T& c, int start, int mid, int end)
{
    int i = start;
    int j = mid + 1;
    T temp;

    while (i <= mid && j <= end)
    {
        if (c[i] <= c[j])
        {
            temp.push_back(c[i]);
            i++;
        }
        else
        {
            temp.push_back(c[j]);
            j++;
        }
    }

    while (i <= mid)
    {
        temp.push_back(c[i]);
        i++;
    }

    while (j <= end)
    {
        temp.push_back(c[j]);
        j++;
    }

    for (int k = 0; k < temp.size(); k++)
    {
        c[start + k] = temp[k];
    }
}

template <class T>
void mergeinsertionT(T &newtype, int start, int end, int size)
{
    if (start < end)
    {
        if (end - start < size)
        {
            insertionT(newtype, start, end);
        }
        else
        {
            int md = start + (end - start) / 2;
            mergeinsertionT(newtype, start, md, size);
            mergeinsertionT(newtype, md + 1, end, size);
            merge(newtype, start, md, end);
        }
    }
}

template <class T>
void Sort(T &newtype, int size)
{
    mergeinsertionT(newtype, 0, newtype.size() - 1, size);
}

unsigned long time_counter(unsigned long a, unsigned long b)
{
	return (a - b);
}


void start(std::vector<int> vec, std::deque<int> dq)
{
    std::vector<int> new_vec;
    std::deque<int> new_dq;

    new_vec = vec;
    new_dq = dq;

    unsigned long time_beg = clock();

    Sort(new_vec, SIZE);
    unsigned long time_md = clock();

    Sort(new_dq, SIZE);
    unsigned long time_end = clock();

    std::cout << "Before: ";
    for (std::vector<int>::iterator i = vec.begin(); i < vec.end(); ++i)
        std::cout << *i << " ";
    std::cout << std::endl;

    std::cout << "After : ";
    for (std::vector<int>::iterator i = new_vec.begin(); i < new_vec.end(); ++i)
        std::cout << *i << " ";
    std::cout << std::endl;

    std::cout << "Time to Sort a range of " 
              << new_vec.size() << " elements with std::vector : " 
              << time_counter(time_md, time_beg)
              << " us" << std::endl;
    std::cout << "Time to Sort a range of " 
              << new_vec.size() << " elements with std::deque  : " 
              << time_counter(time_end, time_md)
              << " us" << std::endl;
    return ;
}

int main(int argc, char *argv[])
{
    if (argc < 2)
    {
        std::cout << "./PmergeMe <numbers to sort>" << std::endl;
        ;
        return (1);
    }
    for (int i = 1; i < argc; i++)
    {
        std::string input = argv[i];
        if (input.find_first_not_of("+0123456789 ") != std::string::npos)
        {
            std::cout << "Error: " + input << std::endl;
            return (EXIT_FAILURE);
        }
    }

    std::vector<int> vector;
    std::deque<int> deque;

    for (int i = 1; i < argc; i++)
    {    
        if (atoll(argv[i]) > std::numeric_limits<int>::max())
        {
            std::cout << "Error: " << argv[i]  << std::endl;
            return (EXIT_FAILURE);
        }

        vector.push_back(atoi(argv[i]));
        deque.push_back(atoi(argv[i]));
    }
    
    start(vector, deque);

    return (EXIT_SUCCESS);
}
