#pragma once

#include <iostream>
#include <cstdlib>
#include <string>
#include <sstream>
#include <stdint.h>

struct Data {
	int i;
	float f;
};

class Serializer
{
	private:
		Serializer();
		Serializer(Serializer const &serialize);
		Serializer& operator= (Serializer const &serialize);
	public:
		~Serializer();
		static uintptr_t serialize(Data* ptr);
		static Data* deserialize(uintptr_t raw);
};