#include "Animal.hpp"
#include "Cat.hpp"
#include "Dog.hpp"
#include <unistd.h>

# define BLUE "\e[0;34m"
# define RED "\e[0;31m"
# define GREEN "\e[0;32m"
# define YELLOW "\e[1;33m"
# define RESET "\e[0m"

int main()
{
	Animal* array[10];
	for (int i = 0; i < 10; i++) {
		if (i % 2 == 0)
			array[i] = new Dog;
		else
			array[i] = new Cat;
	}

	for (int i = 0; i < 10; i++)
		delete array[i];

	sleep(1);
	std::cout << std::endl << GREEN << "let's see what happens in a cat brain :"<< RESET << std::endl;
	sleep(2);
	Cat* test = new Cat;
	Cat* copy = new Cat(*test);

	// Display Ideas.
	std::cout << test->getBrain() << std::endl;
	delete test;
	sleep(1);

	std::cout << GREEN << "Now that the original is deleted, let's see the ideas of the copy :" << RESET << std::endl;
	sleep(2);
	// Display Ideas.
	std::cout << copy->getBrain() << std::endl;
	delete copy;

	sleep(1);
	std::cout << std::endl << GREEN << "let's see what happens in a dog brain :"<< RESET << std::endl;
	sleep(2);
	Dog* test2 = new Dog;
	Dog* copy2 = new Dog(*test2);

	// Display Ideas.
	std::cout << test2->getBrain() << std::endl;
	delete test2;
	sleep(1);

	std::cout << GREEN << "Now that the original is deleted, let's see the ideas of the copy :" << RESET << std::endl;
	sleep(2);
	// Display Ideas.
	std::cout << copy2->getBrain() << std::endl;
	delete copy2;
	while(1);
}