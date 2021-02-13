//
// Created by moboustt on 3/2/2021.
//

#ifndef CPP_MODULE_FRAGTRAP_H
#define CPP_MODULE_FRAGTRAP_H

#include <string>
#include <iostream>


class FragTrap {

public:

    // Constructors and Destructor.
    FragTrap();
    explicit FragTrap(std::string const &name);
    FragTrap(FragTrap const &fragTrap);
    ~FragTrap();

    // Copy assignment operator.
    FragTrap &operator=(FragTrap const &fragTrap);

    // Create some getters and setters for fields.
    int     getMHitPoints() const;
    void    setMHitPoints(int p_HitPoints);
    int     getMEnergyPoints() const;
    void    setMEnergyPoints(int p_EnergyPoints);

    // class's member functions.
    void    rangedAttack(std::string const & target);
    void    meleeAttack(std::string const & target);
    void    takeDamage(int amount);
    void    beRepaired(int amount);

    // Funny Attacks.
    static void    actionKillbot() ;
    static void    actionRepulsive() ;
    static void    actionCombustion() ;
    static void    actionHammer() ;
    static void    actionHyperion() ;

    void vaulthunter_dot_exe(std::string const & target);

private:

    std::string m_Name;
    int         m_HitPoints;
    int         m_MaxHitPoints;
    int         m_EnergyPoints;
    int         m_MaxEnergyPoints;
    int         m_Level;
    int         m_MeleeAttackDamage;
    int         m_RangedAttackDamage;
    int         m_ArmorDamageReduction;
};


#endif //CPP_MODULE_FRAGTRAP_H
