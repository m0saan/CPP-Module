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
    int getMHitPoints() const;
    void setMHitPoints(int p_HitPoints);

    int getMEnergyPoints() const;

    void setMEnergyPoints(int p_EnergyPoints);

    void rangedAttack(std::string const & target);
    void meleeAttack(std::string const & target);
    void actionKillbot() const;
    void actionRepulsive() const ;
    void actionCombustion() const;
    void actionHammer() const;
    void actionHyperion() const;
    void takeDamage(unsigned int amount);
    void beRepaired(unsigned int amount);

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
