#pragma once
#ifndef __KAREN_H__
#define __KAREN_H__

#include <iostream>

enum Levels {
    DEBUG=0,
    INFO,
    WARNING,
    ERROR
};

class Karen {

public:

    Karen();
    ~Karen();
    void complain( std::string level );

private:

    void debug( void );
    void info( void );
    void warning( void );
    void error( void );
};

#endif // __KAREN_H__
