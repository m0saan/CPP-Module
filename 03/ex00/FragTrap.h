//
// Created by moboustt on 3/2/2021.
//

#ifndef CPP_MODULE_FRAGTRAP_H
#define CPP_MODULE_FRAGTRAP_H

#include <string>
#include <iostream>

class FragTrap {

public:

    explicit FragTrap(std::string const &name);
    FragTrap(FragTrap const &fragTrap);
    ~FragTrap();

    FragTrap &operator=(FragTrap const &fragTrap);

    int getMHitPoints() const;
    void setMHitPoints(int p_HitPoints);

    int getMEnergyPoints() const;

    void setMEnergyPoints(int p_EnergyPoints);

    void rangedAttack(std::string const & target);
    void meleeAttack(std::string const & target);
    void takeDamage(unsigned int amount);
    void beRepaired(unsigned int amount);

    void vaulthunter_dot_exe(std::string const & target);

private:

    std::string m_Name;
    int m_HitPoints =100;
    int m_MaxHitPoints = 100;
    int m_EnergyPoints = 100;
    int m_MaxEnergyPoints = 100;
    int m_Level = 1;
    int m_MeleeAttackDamage = 30;
    int m_RangedAttackDamage   = 20;
    int m_ArmorDamageReduction = 5;
};


#endif //CPP_MODULE_FRAGTRAP_H
