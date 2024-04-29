#include "Serializer.hpp"

int	main()
{
	Data data = {
		.i = 42,
		.f = 0,
	};
	uintptr_t ptr = Serializer::serialize(&data);
	std::cout << "Raw -> " << ptr << std::endl;

	Data *data_recovered = Serializer::deserialize(ptr);
	std::cout << "Data :\ti = " << data_recovered->i
		<< "\n\tf = " << data_recovered->f << std::endl;

	data.i = 0;
	data.f = 42;

	std::cout << "new data" << std::endl;

	std::cout << "Data :\ti = " << data_recovered->i
		<< "\n\tf = " << data_recovered->f << std::endl;
	
	uintptr_t ptr2 = Serializer::serialize(&data);
	std::cout << "Raw -> " << ptr2 << std::endl;
	
	Data *data_recovered2 = Serializer::deserialize(ptr2);
	std::cout << "Data :\ti = " << data_recovered2->i
		<< "\n\tf = " << data_recovered2->f << std::endl;
	
	return 0;
}