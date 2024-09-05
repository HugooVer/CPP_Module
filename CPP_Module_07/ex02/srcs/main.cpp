#include <iostream>
#include "Array.hpp"

int main() {
	try
	{
		Array<int> arr1;
		std::cout << "arr1 size: " << arr1.size() << std::endl;

		Array<int> arr2(5);
		std::cout << std::endl << "arr2 size: " << arr2.size() << std::endl;

		for (unsigned int i = 0; i < arr2.size(); ++i)
			arr2[i] = i * 11;
		for (unsigned int i = 0; i < arr2.size(); ++i)
			std::cout << "arr2[" << i << "]: " << arr2[i] << std::endl;

		Array<int> arr3(arr2);
		std::cout << std::endl << "arr3 (copy of arr2) size: " << arr3.size() << std::endl;
		std::cout << "arr3[2] modified befor was :" << arr3[2];
		arr3[2] = 8784545;
		std::cout << " now :" << arr3[2] << std::endl;
		for (unsigned int i = 0; i < arr3.size(); ++i)
			std::cout << "arr3[" << i << "]: " << arr3[i] << std::endl;

		Array<int> arr4 = arr3;
		std::cout << std::endl << "arr4 (assigned from arr3) size: " << arr4.size() << std::endl;
		std::cout << "arr4[3] modified befor was :" << arr4[3];
		arr4[3] = -10;
		std::cout << " now :" << arr4[3] << std::endl;
		for (unsigned int i = 0; i < arr4.size(); ++i)
			std::cout << "arr4[" << i << "]: " << arr4[i] << std::endl;

		Array<std::string> sstring(5);
		std::cout << std::endl << "sstring size: " << sstring.size() << std::endl;
		sstring[0] = "This";
		sstring[1] = "is";
		sstring[2] = "a";
		sstring[3] = "test";
		sstring[4] = "!";
		for (unsigned int i = 0; i < sstring.size(); ++i)
			std::cout << "sstring[" << i << "]: " << sstring[i] << std::endl;

		Array<std::string> ssstring(sstring);
		std::cout << std::endl << "ssstring (copy of sstring) size: " << ssstring.size() << std::endl;
		ssstring[3] = "copy";
		ssstring[4] = "modified";
		// ssstring[5] = "!"; // Acces error if uncomment
		for (unsigned int i = 0; i < ssstring.size(); ++i)
			std::cout << "ssstring[" << i << "]: " << ssstring[i] << std::endl;
		std::cout << std::endl;

		std::cout << "arr2[4541]: " << arr2[4541] << std::endl; // Aces error as ask
	}
	catch (std::exception& e)
	{
		std::cerr << "Exception caught: " << e.what() << std::endl;
	}
	
return 0;
}
