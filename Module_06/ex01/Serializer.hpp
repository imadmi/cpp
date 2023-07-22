
#pragma once
#include <iostream>

struct Data
{
    std::string a;
    int         b;
};

class Serializer
{
    private:
		Serializer();

    public :
		// Serializer(const Serializer &copy);
		// Serializer &operator=(const Serializer &copy);
		// ~Serializer();

    static uintptr_t serialize(Data* ptr);

    static Data* deserialize(uintptr_t raw);
};