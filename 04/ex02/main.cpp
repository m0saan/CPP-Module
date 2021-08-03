#include "Animal.hpp"
#include "Cat.hpp"
#include "Dog.hpp"


int main() {

	// const Animal *meta = new Animal(); /* Should not work. */
	const Animal *j = new Dog();
	const Animal *i = new Cat();
	std::cout << j->getType() << " " << std::endl;
	std::cout << i->getType() << " " << std::endl;
	i->makeSound(); //will output the cat sound!
	j->makeSound();
	// meta->makeSound(); /* Should not work.*/
}