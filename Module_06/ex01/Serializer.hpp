
#pragma once
#include <iostream>

struct Data
{
    std::string a;
    int         b;
};

class Serializer
{
    public :
        uintptr_t serialize(Data* ptr);

        Data* deserialize(uintptr_t raw);
};