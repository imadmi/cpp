
#include "Serializer.hpp"

int main()
{
    Data *data1 = new Data;
    data1->a = "abcde";
    data1->b = 12345;

    Serializer Serializer;
    uintptr_t ptr = Serializer.serialize(data1);
    Data *data = Serializer.deserialize(ptr);
    std::cout << data->a << std::endl;
    std::cout << data->b << std::endl;

    delete data1;
    return (EXIT_SUCCESS);
}