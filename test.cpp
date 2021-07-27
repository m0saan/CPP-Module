//
// Created by Mohammad  Boustta on 7/27/21.
//

#include <iostream>
#include <cassert>
#include <cstddef>

class Simple
{
private:
	int m_id;

public:
	Simple(int id)
			: m_id{ id }
	{
	}

	void setID(int id) { m_id = id; }
	int getID() { return m_id; }
};

int main()
{
	Simple simple{1};
	simple.setID(2);
	std::cout << simple.getID() << '\n';

	return 0;
}

/*
 * simple.setID(2) -> setID(&simple, 2)
 * void setID(int id) { m_id = id; } -> void setID(Simple * const this, int id) { this->m_id = id; }
 *
 */