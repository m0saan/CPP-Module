#pragma once
#ifndef __ZOMBIE_H__
#define __ZOMBIE_H__

#include <string>

class Zombie {

public:

	Zombie();
	explicit Zombie(std::string name);
	~Zombie();
	void announce( void );

private:

	std::string _name;
};

#endif // __ZOMBIE_H__
