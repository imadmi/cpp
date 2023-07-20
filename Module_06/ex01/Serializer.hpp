
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
		Serializer();
		Serializer(const Serializer &copy);
		Serializer &operator=(const Serializer &copy);
		~Serializer();

        uintptr_t serialize(Data* ptr);

        Data* deserialize(uintptr_t raw);
};