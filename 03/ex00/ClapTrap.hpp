//
// Created by moboustt on 3/2/2021.
//

#ifndef __CLAPTRAP_H__
#define __CLAPTRAP_H__

#include <string>
#include <iostream>


class ClapTrap {

public:

    // Constructors and Destructor.
    ClapTrap();
    explicit ClapTrap(std::string const &name);
    ClapTrap(ClapTrap const &fragTrap);
    ~ClapTrap();

    // Copy assignment operator.
    ClapTrap &operator=(ClapTrap const &other);

    // class's member functions.
    void    attack(std::string const & target);
    void    takeDamage(uint32_t amount);
    void    beRepaired(uint32_t amount);

    friend std::ostream &operator<<(std::ostream &out, ClapTrap const & clapTrap);

		private:

    std::string m_Name;
    int         m_HitPoints;
    int         m_EnergyPoints;
    int         m_AttackDamage;
};

#endif // __CLAPTRAP_H__
