
#include "Span.hpp"

Span::Span()
{}

Span::Span(unsigned int N) : _N(N)
{}


Span &Span::operator=(const Span & copy)
{
	if (this != &copy)
	{
        _N = copy._N;
	    _vector = copy._vector;
    }
	return (*this);
}

Span::Span(const Span & copy)
{
    *this = copy;
}

Span::~Span()
{}

void	Span::addNumber(int Number)
{
	if (_N == _vector.size())
		throw Span::NoSpaceLeft();
	_vector.push_back(Number);
}

void	Span::addNumber(std::vector<int>::iterator start, std::vector<int>::iterator end)
{
    int dist = std::distance(start, end);
    if (dist + _vector.size() > _N)
        throw Span::NoSpaceLeft();
    _vector.insert(_vector.end(), start, end);
}

int		Span::shortestSpan()
{
	if (_vector.size() < 2)
		throw NoSpan();

	std::vector<int> sorted = _vector;
	std::sort(sorted.begin(), sorted.end());
	int shortest = sorted[1] - sorted[0];
	for (unsigned int i = 1; i < sorted.size(); i++)
	{
		if (shortest > sorted[i] - sorted[i - 1])
			shortest = sorted[i] - sorted[i - 1];
	}
	return (shortest);
}


int		Span::longestSpan()
{
	if (_vector.size() < 2)
		throw Span::NoSpan();
	return (*std::max_element(_vector.begin(), _vector.end()) - *std::min_element(_vector.begin(), _vector.end()));
}

void Span::printNumbers() const
{
    std::cout << "Numbers in the container: ";
    std::vector<int>::const_iterator i = _vector.begin();
    for (i = _vector.begin(); i != _vector.end(); ++i)
    {
        std::cout << *i << " ";
    }
    std::cout << std::endl;
}