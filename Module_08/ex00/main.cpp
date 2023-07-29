
#include "easyfind.hpp"

int main()
{

	// vector
	std::vector<int> myVector;
	myVector.push_back(1); 
	myVector.push_back(2); 
	myVector.push_back(3); 
	easyfind(myVector, 1);

	//dearrayque
	std::array<int, 3> myarray = {1, 2, 3};
	easyfind(myarray, 2);

	// list
	std::list<int> mylist;
	mylist.push_back(1);
	mylist.push_back(2);
	mylist.push_back(3);
	easyfind(mylist, 3);

	// lets throw an execption
	easyfind(myVector, 4);

    return (EXIT_SUCCESS);
}
