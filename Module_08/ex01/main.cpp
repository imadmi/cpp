


#include "Span.hpp"


int main()
{
    try {
        // Span span(19);
        
        // span.addNumber(5);
        // span.addNumber(10);
        // span.addNumber(20);
        // span.addNumber(30);
        // span.addNumber(40);

        // std::cout << "Longest span: " << span.longestSpan() << std::endl;
        // std::cout << "shortest span: " << span.shortestSpan() << std::endl;

        // std::vector<int> numbersToAdd = {50, 60, 70};
        // span.addNumber(numbersToAdd.begin(), numbersToAdd.end());
        
        // span.printNumbers();

        //==================================//

        Span span(100000);
        for (int i = 0; i < 100000; ++i)
        {
            span.addNumber(i);
        }
        span.printNumbers();
    }
    catch (std::exception& e)
    {
        std::cout << e.what() << std::endl; 
    }

    return 0;
}
