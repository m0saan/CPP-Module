//
// Created by Mohammad  Boustta on 2/7/21.
//

#ifndef CPP_MODULE_CLAPTRAP_H
#define CPP_MODULE_CLAPTRAP_H

#include <string>
#include <iostream>

class ClapTrap {
public:
    ClapTrap();
    ~ClapTrap();
    ClapTrap(ClapTrap const &other);
    ClapTrap &operator=(ClapTrap const &other);
    virtual void rangedAttack(std::string const & target);
    virtual void meleeAttack(std::string const & target);
    void takeDamage(int amount);
    void beRepaired(int amount);

protected:
    int m_HitPoints;
    int m_MaxHitPoints;
    int m_EnergyPoints;
    int m_MaxEnergyPoints;
    int m_Level;
    std::string m_Name;
    int m_MeleeAttackDamage;
    int m_RangedAttackDamage;
    int m_ArmorDamageReduction;
};

#endif //CPP_MODULE_CLAPTRAP_H
