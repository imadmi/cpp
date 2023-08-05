

#include <string>
#include <iostream>
#include <vector>
#include <deque>
#include <algorithm>

#define SIZE 5

// template <class T>
// void insertionT(T &new_vec, int start, int end)
// {
//     for (int i = start; i < end; ++i)
//     {
//         int temp = new_vec[i + 1];
//         int j = i;
//         while (j >= start && new_vec[j] > temp)
//         {
//             std::swap(new_vec[j + 1] ,new_vec[j]);
//             --j;
//         }
//     }
// }

// template <class T>
// void merge(T& c, int start, int mid, int end)
// {
//     int i = start;
//     int j = mid + 1;
//     T temp;

//     while (i <= mid && j <= end)
//     {
//         if (c[i] <= c[j])
//         {
//             temp.push_back(c[i]);
//             i++;
//         }
//         else
//         {
//             temp.push_back(c[j]);
//             j++;
//         }
//     }

//     while (i <= mid)
//     {
//         temp.push_back(c[i]);
//         i++;
//     }

//     while (j <= end)
//     {
//         temp.push_back(c[j]);
//         j++;
//     }

//     for (int k = 0; k < temp.size(); k++)
//     {
//         c[start + k] = temp[k];
//     }
// }

// template <class T>
// void mergeinsertionT(T &newtype, int start, int end, int size)
// {
//     if (start < end)
//     {
//         if (end - start < size)
//         {
//             insertionT(newtype, start, end);
//         }
//         else
//         {
//             int md = start + (end - start) / 2;
//             mergeinsertionT(newtype, start, md, size);
//             mergeinsertionT(newtype, md + 1, end, size);
//             merge(newtype, start, md, end);
//         }
//     }
// }

// template <class T>
// void Sort(T &newtype, int size)
// {
//     mergeinsertionT(newtype, 0, newtype.size() - 1, size);
// }

// unsigned long time_counter(unsigned long a, unsigned long b)
// {
// 	return (a - b);
// }

// void start(std::vector<int> vec, std::deque<int> dq)
// {
//     std::vector<int> new_vec;
//     std::deque<int> new_dq;

//     new_vec = vec;
//     new_dq = dq;

//     unsigned long time_beg = clock();

//     Sort(new_vec, SIZE);
//     unsigned long time_md = clock();

//     Sort(new_dq, SIZE);
//     unsigned long time_end = clock();

//     std::cout << "Before: ";
//     for (std::vector<int>::iterator i = vec.begin(); i < vec.end(); ++i)
//         std::cout << *i << " ";
//     std::cout << std::endl;

//     std::cout << "After : ";
//     for (std::vector<int>::iterator i = new_vec.begin(); i < new_vec.end(); ++i)
//         std::cout << *i << " ";
//     std::cout << std::endl;

//     std::cout << "Time to Sort a range of "
//               << new_vec.size() << " elements with std::vector : "
//               << time_counter(time_md, time_beg)
//               << " us" << std::endl;
//     std::cout << "Time to Sort a range of "
//               << new_vec.size() << " elements with std::deque  : "
//               << time_counter(time_end, time_md)
//               << " us" << std::endl;
//     return ;
// }

// int main(int argc, char *argv[])
// {
//     if (argc < 2)
//     {
//         std::cout << "./PmergeMe <numbers to sort>" << std::endl;
//         ;
//         return (1);
//     }
//     for (int i = 1; i < argc; i++)
//     {
//         std::string input = argv[i];
//         if (input.find_first_not_of("+0123456789 ") != std::string::npos)
//         {
//             std::cout << "Error: " + input << std::endl;
//             return (EXIT_FAILURE);
//         }
//     }

//     std::vector<int> vector;
//     std::deque<int> deque;

//     for (int i = 1; i < argc; i++)
//     {
//         if (atoll(argv[i]) > std::numeric_limits<int>::max())
//         {
//             std::cout << "Error: " << argv[i]  << std::endl;
//             return (EXIT_FAILURE);
//         }

//         vector.push_back(atoi(argv[i]));
//         deque.push_back(atoi(argv[i]));
//     }

//     start(vector, deque);

//     return (EXIT_SUCCESS);
// }

// =========================================

template <class T>
void insertionT(T &new_vec, int start, int end)
{
    for (int i = 0; i < new_vec.size() - 1; i++)
    {
        if (new_vec[i] > new_vec[i + 1])
            std::swap(new_vec[i], new_vec[i + 1]);
        i++;
    }

    // if (new_vec[start] > new_vec[start + 1])
    //     std::swap(new_vec[start] ,new_vec[start + 1]);

    // for (int i = start; i < end; ++i)
    // {
    //     int temp = new_vec[i + 1];
    //     int j = i;
    //     while (j >= start && new_vec[j] > temp)
    //     {
    //         std::swap(new_vec[j + 1] ,new_vec[j]);
    //         --j;
    //     }
    // }
}

template <typename T>
int binarySearch(T &container, int number)
{
    int left = 0;
    int right = container.size() - 1;

    while (left <= right)
    {
        int mid = left + (right - left) / 2;

        if (container[mid] == number)
        {
            return mid; // Found the number, return its index
        }
        else if (container[mid] < number)
        {
            left = mid + 1;
        }
        else
        {
            right = mid - 1;
        }
    }

    // If the number is not found, return the index where it should be inserted
    return left;
}

template <class T>
void insertSorted(T &container, T &les_pairs, const T &les_inpairs)
{
    int i = 0;
    int j = 0;

    std::cout << "les pairs"
              << " ";
    for (i = 0; i < les_pairs.size(); ++i)
    {
        std::cout << les_pairs[i] << " ";
    }
    std::cout << std::endl;

    std::cout << "les inpairs"
              << " ";
    for (i = 0; i < les_inpairs.size(); ++i)
    {
        std::cout << les_inpairs[i] << " ";
    }
    std::cout << std::endl;

    // for (i = 0; i < container.size(); ++i)
    // {
    //     std::cout << container[i] << " ";
    // }
    // std::cout << std::endl;

    // typename T::iterator it = les_pairs.begin();
    // typename T::iterator it1 = les_inpairs.begin();

    std::vector<int>::iterator it;

    i = 0;
    for (it = les_pairs.begin(); it != les_pairs.end(); ++it)
    {

        // if (it1 != les_inpairs.end())
        // {
        // les_pairs.insert(it, 1);
        //     ++it1;
        // }
        ++it;
    }
}

template <class T>
void merge(T &container, int start, int end)
{
    // int i = start;
    // int j = mid + 1;
    // T temp;

    int i = 2;
    // int j = mid + 1;
    // T temp;
    int flag = 0;
    if (container.size() % 2)
        flag = 1;

    if (flag == 1)
    {
        while (i < container.size() - 1)
        {
            if (container[i - 2] > container[i])
            {
                std::swap(container[i - 2], container[i]);
                std::swap(container[i - 1], container[i + 1]);
            }
            i += 2;
        }
    }
    else
    {
        while (i < container.size())
        {
            if (container[i - 2] > container[i])
            {
                std::swap(container[i - 2], container[i]);
                std::swap(container[i - 1], container[i + 1]);
            }
            i += 2;
        }
    }

    T les_pairs;
    T les_inpairs;

    i = 0;
    int j = 0;
    while (i < container.size())
    {
        les_pairs.push_back(container[i]);
        // std::cout <<container[i];
        i += 2;
        // j++;
    }

    i = 1;
    j = 0;
    while (i < container.size())
    {
        les_inpairs.push_back(container[i]);
        i += 2;
        // j++;
    }

    insertSorted(container, les_pairs, les_inpairs);

    // // Display the sorted container
    // for (size_t i = 0; i < les_inpairs.size(); ++i)
    // {
    //     std::cout << les_inpairs[i] << " ";
    // }
    // std::cout << std::endl;
    // // Display the sorted container
    // for (size_t i = 0; i < les_pairs.size(); ++i)
    // {
    //     std::cout << les_pairs[i] << " ";
    // }
    // std::cout << std::endl;

    // // T myVector;
    // typename T::iterator it = les_inpairs.begin();
    // typename T::iterator it1 = les_pairs.begin();

    // int k = 0;
    // i = 0;
    // j = 0;

    // int flagg = 1;
    // while (flagg == 1)
    // {
    //     while (les_pairs[i] < les_inpairs[j])
    //     {
    //         container[k] = les_pairs[i];
    //         i++;
    //         k++;
    //     }
    //     while (les_pairs[i] < les_inpairs[j])
    //     {
    //         container[k] = les_inpairs[j];
    //         j++;
    //         k++;
    //     }

    //     k++;
    // }

    // Display the sorted container
    // for (size_t i = 0; i < les_inpairs.size(); ++i)
    // {
    //     std::cout << les_inpairs[i] << " ";
    // }
    // std::cout << std::endl;
    // // Display the sorted container
    // for (size_t i = 0; i < les_pairs.size(); ++i)
    // {
    //     std::cout << les_pairs[i] << " ";
    // }
    // std::cout << std::endl;

    // for (int k = 0; k < les_pairs.size(); k++)
    // {
    //     container[k] = les_pairs[k];
    // }
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
        merge(newtype, start, end);
        // else
        // {
        //     int md = start + (end - start) / 2;
        //     mergeinsertionT(newtype, start, md, size);
        //     mergeinsertionT(newtype, md + 1, end, size);
        // }
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

    // Sort(new_dq, SIZE);
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
    return;
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
            std::cout << "Error: " << argv[i] << std::endl;
            return (EXIT_FAILURE);
        }

        vector.push_back(atoi(argv[i]));
        deque.push_back(atoi(argv[i]));
    }

    start(vector, deque);

    return (EXIT_SUCCESS);
}

// int main()
// {
//     std::vector<int> nums;

//     nums.push_back(1);
//     nums.push_back(3);
//     nums.push_back(6);
//     nums.push_back(8);
//     nums.push_back(12);
//     nums.push_back(15);
//     nums.push_back(17);
//     int number = 11;

//     std::cout << binarySearch(nums, number);

//     return 0;
// }