#include "Karen.hpp"

typedef void (*CALL_MEMBER_FUNC)();


Karen::Karen() 
{
    std::cout << "Karen constructor called!" << std::endl;
}

Karen::~Karen()
{
    std::cout << "Karen is gone!" << std::endl;
}

void Karen::debug( void )
{
    std::cout << "[ DEBUG ]" << "[ I love to get extra bacon for my 7XL-double-cheese-triple-pickle-special-ketchup burger. I just love it! ]" << std::endl;
}

void Karen::info( void )
{
    std::cout << "[ INFO ]" << "[ I cannot believe adding extra bacon cost more money. You don’t put enough! If you did I would not have to ask for it! ]" << std::endl;
}

void Karen::warning( void )
{
    std::cout << "[ WARNING ]" << std::endl << "[ I think I deserve to have some extra bacon for free. I’ve been coming here for years and you just started working here last month. ]" << std::endl;
}

void Karen::error( void )
{
    std::cout << "[ ERROR ]" << std::endl << "[ This is unacceptable, I want to speak to the manager now. ]" << std::endl;
}

int  getLevel(std::string const &l)
{
    int const N_OF_LEVELS = 4;
    std::string const pool[] = { "debug", "info", "warning", "error" };
    for (int i = 0; i<N_OF_LEVELS; ++i)
        if (pool[i] == l)
            return i;
    return -1;
}

void Karen::complain(std::string level)
{
    int l = getLevel(level);    
    switch(l)
    {
        case 0:
            debug();
            break;
        case 1:
            info();
            break;
        case 2:
            warning();
            break;
        case 3:
            error();
            break;
        default:
            std::cout << "[ Probably complaining about insignificant problems ]" << std::endl;
            break;
    }
}
