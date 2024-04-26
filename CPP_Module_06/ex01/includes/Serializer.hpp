#pragma once

#include <iostream>
#include <cstdlib>
#include <string>
#include <sstream>
#include <stdint.h>

class Serializer
{
	private:
		;
	public:
		uintptr_t serialize(Data* ptr);

		Data* deserialize(uintptr_t raw);
};