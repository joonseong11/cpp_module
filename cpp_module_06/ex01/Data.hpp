#ifndef DATA_HPP
# define DATA_HPP

#include <cstdint>
#include <string>
#include <iostream>

#define COUT std::cout 
#define ENL std::endl

struct Data
{
	int data;
	std::string description;
};

uintptr_t serialize(Data* ptr);
Data* deserialize(uintptr_t raw);

#endif