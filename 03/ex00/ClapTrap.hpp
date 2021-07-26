//
// Created by moboustt on 3/2/2021.
//

#ifndef CPP_MODULE_FRAGTRAP_H
#define CPP_MODULE_FRAGTRAP_H

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

    // Create some getters and setters for fields.
    int     getHitPoints() const;
    void    setHitPoints(int p_HitPoints);
    int     getEnergyPoints() const;
    void    setEnergyPoints(int p_EnergyPoints);
    int     getAttackDamage() const;
    void    setAttackDamage(int p_Damage);

    // class's member functions.
    void    attack(std::string const & target);
    void    takeDamage(uint32_t amount);
    void    beRepaired(uint32_t amount);

private:

    std::string m_Name;
    int         m_HitPoints;
    int         m_EnergyPoints;
    int         m_AttackDamage;
};

#endif // __CLAPTRAP_H__
