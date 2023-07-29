

#include "MutantStack.hpp"

int main()
{

    typedef MutantStack<int> MS; // create an alias for the iterator type

    MS stack1;
    MS stack2(stack1);

    stack1.push(10);
    stack1.push(20);
    stack1.push(30);
    stack1.push(40);

    stack2 = stack1;

    stack2.pop();
    stack2.push(50);
    stack2.push(60);
    std::cout << "top : " << stack2.top() << std::endl;
    std::cout << "size : " << stack2.size() << std::endl;

    MS::iterator i;

    i = stack1.begin();
    ++i;
    --i;

    std::cout << "Elements in the stack1: " << std::endl;
    for (i = stack1.begin(); i != stack1.end(); ++i)
    {
        std::cout << *i << std::endl;
    }


    std::cout << "======================" << std::endl;

    std::cout << "Elements in the stack2: " << std::endl;
    for (i = stack2.begin(); i != stack2.end(); i++)
    {
        std::cout << *i << std::endl;
    }

    return (EXIT_SUCCESS);
}