//
// Created by Mohammad  Boustta on 2/6/21.
//

#ifndef CPP_MODULE_SCAVTRAP_H
#define CPP_MODULE_SCAVTRAP_H

#include <string>
#include <iostream>

class ScavTrap {

public:
    ScavTrap();
    ScavTrap(std::string const& pName);
    ScavTrap(ScavTrap const &scavTrap);
    ~ScavTrap();

    ScavTrap &operator=(ScavTrap const &rhs);

    int getMHitPoints() const;

    void setMHitPoints(int mHitPoints);

    void setMEnergyPoints(int mEnergyPoints);

    int getMEnergyPoints() const;

    void rangedAttack(std::string const & target);
    void meleeAttack(std::string const & target);
    void actionKillbot() const;
    void actionRepulsive() const ;
    void actionCombustion() const;
    void actionHammer() const;
    void actionHyperion() const;
    void takeDamage(unsigned int amount);
    void beRepaired(unsigned int amount);

    void challengeNewcomer() const;

private:
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


#endif //CPP_MODULE_SCAVTRAP_H
