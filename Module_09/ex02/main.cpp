

#include "PmergeMe.hpp"


template <class T>
void insertionT(T& new_vec)
{
    int n = new_vec.size();
    for (int i = 1; i < n; ++i)
    {
        int key = new_vec[i];
        int j = i - 1;

        while (j >= 0 && new_vec[j] > key)
        {
            new_vec[j + 1] = new_vec[j];
            --j;
        }
        new_vec[j + 1] = key;
    }
}

template <class T>
void mergeSort(T& newtype)
{
    if (newtype.size() > 2)
    {
        mergeSort(newtype);
    }
    else
        insertionT(newtype);
}

void execute(std::vector<int> vec, std::deque<int> dq)
{
    std::vector<int>  new_vec;
    std::deque<int> new_dq;
 
    new_vec = vec;
    new_dq = dq;

    clock_t time_beg = clock();
    // mergeSort
    mergeSort(new_vec);
    // insertionT(new_vec);
    // PmergeVector(new_vec, 0, new_vec.size() - 1);
    clock_t time_md = clock();
    insertionT(new_dq);
    // Pmergedq(new_dq, 0, new_dq.size() -1);
    clock_t time_end = clock();

    std::cout << "Before: ";
    for (std::vector<int>::iterator i = vec.begin(); i < vec.end(); ++i)
        std::cout << *i << " ";
    std::cout << std::endl;

    std::cout << "After: ";
    for (std::vector<int>::iterator i = new_vec.begin(); i < new_vec.end(); ++i)
        std::cout << *i << " ";
    std::cout << std::endl;

    // std::cout << "After: ";
    // for(std::deque<int>::iterator i  = new_dq.begin(); i < new_dq.end(); ++i)
    //     std::cout << *i << " " ;
    // std::cout << std::endl;

    std::cout << "Time to process a range of " << new_vec.size() <<  " elements with std::vector : " << std::fixed << std::setprecision(5) <<  (((double) (time_md - time_beg)) / CLOCKS_PER_SEC) * 1000000  << " us" << std::endl;
    std::cout << "Time to process a range of " << new_dq.size() <<  " elements with std::deque : " << std::fixed << std::setprecision(5) <<  (((double) (time_end - time_md)) / CLOCKS_PER_SEC) * 1000000  << " us" << std::endl;
}

int main(int argc, char *argv[])
{
    if (argc < 2)
    {
        std::cout << "./PmergeMe <numbers to sort>" << std::endl;;
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

    int num;
    std::vector<int> vector;
    std::deque<int> deque;
    
    for (int i = 1; i < argc; i++)
    {
        num = atoi(argv[i]);

        vector.push_back(num);
        deque.push_back(num);
    }
    execute(vector, deque);

    return (EXIT_SUCCESS);
}
