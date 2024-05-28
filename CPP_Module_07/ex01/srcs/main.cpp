#include "iter.hpp"

int	main(void)
{
	{
		std::cout << "Int test\n";
		int	a[5];

		for (int i = 0; i < 5; i++)
		{
			a[i] = i;
		}
		iter(a, 5, printer<int>);
	}
	// std::cout << "\n";
	// {
	// 	std::cout << "Float test\n";

	// 	float	a[5];

	// 	for (int i = 0; i < 5; i++)
	// 	{
	// 		a[i] = i;
	// 	}
	// 	iter(a, 5, printer<float>);
	// }
	// std::cout << "\n";
	// {
	// 	std::cout << "Char test\n";
	// 	char	a[5];

	// 	for (int i = 0; i < 5; i++)
	// 	{
	// 		a[i] = i + 60;
	// 	}
	// 	iter(a, 5, printer<char>);
	// }
	// std::cout << "\n";
	return (0);
}
