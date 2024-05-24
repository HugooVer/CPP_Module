#include "Base.hpp"
#include "A.hpp"
#include "B.hpp"
#include "C.hpp"

Base * generate(void)
{
	srand(time(NULL));
	int rd = (rand() % 3) + 1;
	// std::cout << "=== " << rd << " ===" << std::endl;
	if (rd == 1)
		return new(A);
	else if (rd == 2)
		return new(B);
	else
		return new(C);
}

void identify(Base* p)
{
	try
	{
		if (dynamic_cast<A *>(p))
			std::cout << "A";
		else if (dynamic_cast<B *>(p))
			std::cout << "B";
		else if (dynamic_cast<C *>(p))
			std::cout << "C";
		std::cout << std::endl;
	}
	catch (std::exception &e)
	{
		std::cout << e.what() << std::endl;
	}
}

void identify(Base& p)
{
	try
	{
		if (dynamic_cast<A *>(&p))
			std::cout << "A";
		else if (dynamic_cast<B *>(&p))
			std::cout << "B";
		else if (dynamic_cast<C *>(&p))
			std::cout << "C";
		std::cout << std::endl;
	}
	catch (std::exception &e)
	{
		std::cout << e.what() << std::endl;
	}
}

int main ()
{
	Base *obj = generate();
	identify(obj);
	identify(*obj);
	delete obj;
	return 0;
}