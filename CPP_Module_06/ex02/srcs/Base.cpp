#include "A.hpp"
#include "B.hpp"
#include "C.hpp"

Base::~Base()
{
	;
}

Base * generate(void)
{
	int rd = rand() % 3;

	if (rd == 0)
		return new(A);
	else if (rd == 1)
		return new(B);
	else
		return new(C);
}

// void identify(Base* p)
// {
// 	;
// }

// void identify(Base& p)
// {
// 	;
// }
