#include "Animal.hpp"
#include "Cat.hpp"
#include "Dog.hpp"


int main()
{
	const Animal* j = new Dog();
	const Animal* i = new Cat();
	Animal *arrayOfAnimal[100];
	for(int k = 0; k < 100; ++k) {
		if (k%2==0) arrayOfAnimal[k] = new Dog();
		else arrayOfAnimal[k] = new Cat();
	}

	for(int k = 0; k < 100; ++k)
		delete arrayOfAnimal[k];
	delete j;//should not create a leak
	delete i;
}