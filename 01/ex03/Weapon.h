//
// Created by moboustt on 1/2/2021.
//

#ifndef __WEAPON_H__
#define __WEAPON_H__

#include <string>
#include <iostream>

class Weapon {

public:

    Weapon();
    explicit Weapon(std::string const & type);
    ~Weapon();

    const std::string &getType() const;
    void setType(const std::string &type);

private:

    std::string _type;
};


#endif // __WEAPON_H__
