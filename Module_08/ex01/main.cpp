


#include "Span.hpp"

int main()
{
    try {
        Span span(9);
        
        span.addNumber(10);
        span.addNumber(30);
        span.addNumber(20);
        span.addNumber(50);
        span.addNumber(40);

        std::cout << "Longest span: " << span.longestSpan() << std::endl;
        std::cout << "shortest span: " << span.shortestSpan() << std::endl;
    }
    catch ( std::exception& e )
    {
        std::cout << e.what() << std::endl; 
    }

    return 0;
}
