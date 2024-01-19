
#include "Cat.hpp"
#include "Dog.hpp"

int main()
{
	Animal *family[5];
	int nb = 5;

	for (int idx = 0; idx < nb; ++idx)
	{
		if (idx % 2 == 0)
			family[idx] = new Dog();
		else
			family[idx] = new Cat();
	}
	
	for (int idx = 0; idx < nb; ++idx)
		delete family[idx];
	return 0;

}

// #define RESET "\033[0m"
// #define RED "\033[31m"
// #define GREEN "\033[32m"
// #define YELLOW "\033[33m"
// #define BOLD "\033[1m"
// #define UNDERLINE "\033[4m"
// #define SEPARATOR "=================================================="

// #include "Animal.hpp"
// #include "Dog.hpp"
// #include "Cat.hpp"
// #include "WrongAnimal.hpp"
// #include "WrongCat.hpp"
// #include <iostream>
// #include <string>

// #define SECTION_TITLE(title) \
//     std::cout << BOLD << YELLOW << "\n" << SEPARATOR << "\n" << title << "\n" << SEPARATOR << "\n" << RESET << std::endl;
// #define TEST_CASE_START(description) \
//     std::cout << "\n" << BOLD << GREEN << "[TEST CASE] " << description << RESET << std::endl;
// #define TEST_CASE_END() \
//     std::cout << BOLD << GREEN << "[TEST CASE ENDED]" << RESET << std::endl;

// void	test_wrong_cat_idea(void) {
// 	SECTION_TITLE("Wrong cat idea");
// 	TEST_CASE_START("Test Case 1");

// 	Animal* nwCat = new Cat();
// 	Animal* nwCat2 = new Cat();

// 	nwCat->setIdea(0, "Eat");
// 	nwCat2->setIdea(0, "Sleep");
// 	std::cout << nwCat->getIdea(0) << std::endl;
// 	std::cout << nwCat2->getIdea(0) << std::endl;
// 	*nwCat2 = *nwCat;
// 	std::cout << nwCat->getIdea(0) << std::endl;
// 	std::cout << nwCat2->getIdea(0) << std::endl;
// 	nwCat->makeSound();
// 	nwCat2->makeSound();
// 	delete nwCat;
// 	delete nwCat2;

// 	TEST_CASE_END();
// 	return;
// }

// void	test_good_cat_idea(void) {
// 	SECTION_TITLE("Deep cat copy");
// 	TEST_CASE_START("Test Case 2");

// 	Cat* nwCat = new Cat();
// 	Cat* nwCat2 = new Cat();

// 	nwCat->setIdea(0, "Eat");
// 	nwCat2->setIdea(0, "Sleep");
// 	std::cout << nwCat->getIdea(0) << std::endl;
// 	std::cout << nwCat2->getIdea(0) << std::endl;
// 	*nwCat2 = *nwCat;
// 	std::cout << nwCat->getIdea(0) << std::endl;
// 	std::cout << nwCat2->getIdea(0) << std::endl;
// 	nwCat->makeSound();
// 	nwCat2->makeSound();
// 	delete nwCat;
// 	delete nwCat2; // see the Cat Copy assignment operator for explanation on how this could go wrong

// 	TEST_CASE_END();
// 	return;
// }

// void do_main_test(void) {
// 	SECTION_TITLE("Main test");
// 	TEST_CASE_START("Test Case 3");

// 	const int animalCount = 10;
// 	Animal** animals = new Animal*[animalCount];

// 	for (int i = 0; i < animalCount; i++) {
// 		if (i < animalCount / 2) {
// 			animals[i] = new Cat();
// 		} else {
// 			animals[i] = new Dog();
// 		}
// 	}
// 	for (int i = 0; i < animalCount; i++) {
// 		animals[i]->makeSound();
// 	}
// 	for (int i = 0; i < animalCount; i++) {
// 		delete animals[i];
// 	}
// 	delete []animals;

// 	TEST_CASE_END();
// 	return;
// }

// void do_subject_test(void) {
// 	const Animal* j = new Dog();
// 	const Animal* i = new Cat();


// 	j->makeSound();
// 	i->makeSound();
// 	delete i;
// 	delete j;//should not create a leak
// }

// void for_next_exercice() {
// 	const Animal* g = new Animal();

// 	g->makeSound();
// 	delete g;
// } 

// int main(int ac, char *av[])
// {

// 	if (ac == 3 && std::string(av[1]) == "test" && (std::string(av[2]) == "1"
// 	|| std::string(av[2]) == "all")) {
// 		do_subject_test();
// 	}
// 	if (ac == 3 && std::string(av[1]) == "test" && (std::string(av[2]) == "2"
// 	|| std::string(av[2]) == "all")) {
// 		test_wrong_cat_idea();
// 	}
// 	if (ac == 3 && std::string(av[1]) == "test" && (std::string(av[2]) == "3"
// 	|| std::string(av[2]) == "all")) {
// 		test_good_cat_idea();
// 	}
// 	if (ac == 3 && std::string(av[1]) == "test" && (std::string(av[2]) == "4"
// 	|| std::string(av[2]) == "all")) {
// 		do_main_test();
// 	}
// 	if (ac == 3 && std::string(av[1]) == "test" && (std::string(av[2]) == "5"
// 	|| std::string(av[2]) == "all")) {
// 		for_next_exercice();
// 	}
// 	else {
// 		std::cout << "Usage :          <./AnimalKingdom test all> to run tests" << std::endl;
// 		std::cout << "Or               <./AnimalKingdom test x> to run x test" << std::endl;
// 	}
// }
