
#include "RPN.hpp"


bool isoperator(char op)
{
    return (op == '+' || op == '-' || op == '*' || op == '/');
}

int calculate(int a, int b, char op)
{
	if (op == '+')
		return (a + b);
	if (op == '-')
		return (a - b);
	if (op == '*')
		return (a * b);
	if (op == '/' && b != 0)
		return (a / b);
	else 
		throw "";
	return (0);
}

int calculator(char* expr)
{
    std::stack<int> calc_stack;
    std::string exc = expr;

	for (int i = 0 ; i < exc.size() ; i++)
	{
        if (exc[i] == ' ')
		{
            while (exc[i] == ' ')
                i++;
        }
		if (isdigit(exc[i]))
			calc_stack.push((int)exc[i] - 48);
		
		if (isoperator(exc[i]))
		{
            if (calc_stack.size() < 2)
                throw "";
            
			int b = calc_stack.top();
            calc_stack.pop();
            
			int a = calc_stack.top();
            calc_stack.pop();
            
			int result = calculate(a, b, exc[i]);
            calc_stack.push(result);
        }
    }
    if (calc_stack.size() != 1)
        throw "";

    return (calc_stack.top());
}

int main(int argc, char* argv[])
{
    if (argc != 2)
	{
        std::cout << "Usage: " << argv[0] << " <inverted Polish mathematical expression>" << std::endl;
        return 1;
    }
	try
	{
		std::string input = argv[1];
		if (input.find_first_not_of("+-*/0123456789 ") != std::string::npos)
		{
			std::cout << "Error: bad input : " + input << std::endl;
			return (EXIT_FAILURE);
		}

		int result = calculator(argv[1]);
		std::cout << result << std::endl;
	}
	catch(...)
	{
		std::cout << "Error: Invalid expression" << std::endl;
	}

	return (EXIT_SUCCESS);
}

