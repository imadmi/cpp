
#include "easyfind.hpp"

#include <iostream>
#include <vector>
#include <algorithm>

int main() {
    std::vector<int> myVector = {1, 2, 3, 4, 5};
    int value = 3;

    // Find 'value' in the vector using std::find()
    std::vector<int>::iterator result = std::find(myVector.begin(), myVector.end(), value);
    if (result != myVector.end()) {
        std::cout << "Value " << value << " found at index " << (result - myVector.begin()) << std::endl;
    } else {
        std::cout << "Value " << value << " not found!" << std::endl;
    }

    return 0;
}
