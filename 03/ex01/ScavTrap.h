//
// Created by Mohammad  Boustta on 2/6/21.
//

#ifndef CPP_MODULE_SCAVTRAP_H
#define CPP_MODULE_SCAVTRAP_H

#include <string>
#include <iostream>
#include <random>

class ScavTrap {

public:
    ScavTrap();
    explicit ScavTrap(std::string const& pName);
    ScavTrap(ScavTrap const &scavTrap);
    ~ScavTrap();

    ScavTrap &operator=(ScavTrap const &rhs);

    void rangedAttack(std::string const & target);
    void meleeAttack(std::string const & target);
    void takeDamage(int amount);
    void beRepaired(int amount);

    static void actionKillbot() ;
    static void actionRepulsive() ;
    static void actionCombustion() ;
    static void actionHammer() ;
    static void actionHyperion() ;

    void challengeNewcomer(std::string const &target);

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
    static const std::size_t nOfChallenges = 5;
    static std::string funnyChallenges[5];
};


#endif //CPP_MODULE_SCAVTRAP_H
