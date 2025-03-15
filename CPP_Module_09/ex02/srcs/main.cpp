# include "PmergeMe.hpp"

bool is_valid_arc_count(int const ac){
	if (ac <= 1){
		std::cout << "This program takes one argument minimum" << std::endl;
		return (false);
	}
	else
		return (true);
}

bool are_arg_positive_int(char *av){
	for (size_t digits = 0; digits < strlen(av); digits++){
		if (isdigit(av[digits]) == 0){
			std::cout << "Error: Arguments have to be positive integers" << std::endl;
			return (false);
		}
		if (atoi(av) < 0){
			std::cout << "Error: Arguments biger than max_int" << std::endl;
			return (false);
		}
	}
	return (true);
}

void printTime_vector(std::vector<int> vec, double const time){
	std::cout << "Time to process a range of " << vec.size() << " elements with std::vectors: " << time << " us" << std::endl;
	return;
}

void printTime_list(std::list<int> list, double const time){
	std::cout << "Time to process a range of " << std::distance(list.begin(), list.end()) << " elements with std::list: " << time << " us" << std::endl;

	return;
}

int main(int ac, char **av){
	if (is_valid_arc_count(ac) == false)
		return (1);
	
	std::vector<int> vec(0);

	for (int index = 1; index < ac; index++){
		if (are_arg_positive_int(av[index]) == false)
			return (1);
		vec.push_back(atoi(av[index]));
	}

	std::list<int> list(vec.begin(), vec.end());

	std::cout << "Before:	";
	printContainers(vec);

	clock_t begin_vec = clock();
	PmergeMe<std::vector<int> > mergevec(vec);
	clock_t finish_vec = clock();

	std::vector<int> vec_sorted = mergevec.getCont();

	std::cout << "After:	";
	printContainers(vec_sorted);
	
	double time_elapsed_vec = (double)(finish_vec - begin_vec) / CLOCKS_PER_SEC * 1000;
	printTime_vector(vec_sorted, time_elapsed_vec);

	clock_t begin_list = clock();
	PmergeMe<std::list<int> > list_sorted(list);
	clock_t finish_list = clock();

	double time_elapsed_list = (double)(finish_list - begin_list) / CLOCKS_PER_SEC * 1000;
	printTime_list(list_sorted.getCont(), time_elapsed_list);

	return (0);
}

// ./PmergeMe $(shuf -i 0-5000 -r --head-count=5000)