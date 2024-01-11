
#include <iostream>
#include <fstream>
#include <string>
#include <cstdlib>

int main(int argc, char *argv[])
{
	if (argc != 4)
	{
		std::cout << "Error: Please enter 3 arguments." << std::endl;
		exit(EXIT_FAILURE);
	}

	std::string line;
	std::ifstream myInputFile (argv[1]);
	std::string fileName = argv[1];
	std::ofstream myOutputFile (fileName.append(".replace").c_str());
	std::string look = argv[2];
	std::string add = argv[3];
	size_t i;

	if (!myInputFile.is_open() || myInputFile.fail())
	{
		std::cout << "Unable to open file" << std::endl;
		exit(EXIT_FAILURE);
	}
	if (!myOutputFile.is_open() || myOutputFile.fail())
	{
		std::cout << "Unable to create file" << std::endl;
		exit(EXIT_FAILURE);
	}
	while (std::getline(myInputFile,line))
	{
		i = line.find(look);
		while (i != std::string::npos)
		{
			line.erase(i, look.length());
			line.insert(i, add);
			i = line.find(look, ++i);
		}
		myOutputFile << line << '\n';
	}
	myInputFile.close();
	myOutputFile.close();
}