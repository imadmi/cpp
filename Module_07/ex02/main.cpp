
#include "Array.hpp"

class a
{
    private :
        int x;
        std::string y;
};

int main()
{
    try
    {
        //default constructor
        Array<int> arr1;

        //constructor with size
        Array<int> arr2(1);
        arr2[0] = 1337; // [] operator

        //copy constructor and assignment operator
        Array<int> arr3 = arr2;
        std::cout << arr3[0] << " " << std::endl;

        //out-of-range index
        std::cout << "this must throw an exception " << arr3[10] << std::endl;
    }
    catch (std::exception& exception)
    {
        std::cerr << exception.what() << std::endl;
    }

    return (EXIT_SUCCESS);
}
