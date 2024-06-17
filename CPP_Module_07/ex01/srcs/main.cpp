#include "iter.hpp"

int	main()
{
	{
		std::cout << "Int test" << std::endl;
		int	a[10];

		for (int i = 0; i < 10; i++)
			a[i] = i;
		iter(a, 10, printer<int>);
	}
	std::cout << std::endl;
	{
		std::cout << "Float test" << std::endl;
		float	a[10];
		for (float i = 0; i < 10; i++)
			a[(int) i] = i * 3 / 2;
		iter(a, 10, printer<float>);
	}
	std::cout << std::endl;
	{
		std::cout << "Char test" << std::endl;
		char	a[10];
		for (int i = 0; i < 10; i++)
			a[i] = i + 60;
		iter(a, 10, printer<char>);
	}
	std::cout << std::endl;
	return 0;
}
