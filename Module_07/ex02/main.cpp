
#include "Array.hpp"

class a
{
    private :
        int x;
        std::string y;
};

// int main()
// {
//     try
//     {
//         //default constructor
//         // Array<int> arr1;        
        
//         Array<std::string> arr0(6);
//         arr0[0] = "salam00";

//         std::cout << arr0[7] << std::endl;

//         // //constructor with size
//         // Array<int> arr2(1);
//         // arr2[0] = 1337; // [] operator

//         // //copy constructor and assignment operator
//         // Array<int> arr3 = arr2;
//         // std::cout << arr3[0] << " " << std::endl;

//         // //out-of-range index
//         // std::cout << "this must throw an exception " << arr3[10] << std::endl;
//     }
//     catch (std::exception& exception)
//     {
//         std::cerr << exception.what() << std::endl;
//     }

//     return (EXIT_SUCCESS);
// }

#define MAX_VAL 750
int main(int, char**)
{
    Array<int> numbers(MAX_VAL);
    int* mirror = new int[MAX_VAL];
    srand(time(NULL));
    for (int i = 0; i < MAX_VAL; i++)
    {
        const int value = rand();
        numbers[i] = value;
        mirror[i] = value;
    }
    //SCOPE
    {
        Array<int> tmp = numbers;
        Array<int> test(tmp);
    }

    for (int i = 0; i < MAX_VAL; i++)
    {
        if (mirror[i] != numbers[i])
        {
            std::cerr << "didn't save the same value!!" << std::endl;
            return 1;
        }
    }
    try
    {
        numbers[-2] = 0;
    }
    catch(const std::exception& e)
    {
        std::cerr << e.what() << '\n';
    }
    try
    {
        numbers[MAX_VAL] = 0;
    }
    catch(const std::exception& e)
    {
        std::cerr << e.what() << '\n';
    }

    for (int i = 0; i < MAX_VAL; i++)
    {
        numbers[i] = rand();
    }
    delete [] mirror;//
    return 0;
}
