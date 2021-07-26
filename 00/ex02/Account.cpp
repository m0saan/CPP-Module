#include "Account.hpp"
#include <iostream>

int	Account::_nbAccounts = 0;
int	Account::_totalAmount = 0;
int	Account::_totalNbDeposits = 0;
int	Account::_totalNbWithdrawals = 0;

Account::Account(int initial_deposit) {
    _amount = initial_deposit;
}

Account::Account( void ) { 
    std::cout << "Default constructor has benn called!" << std::endl;
}

void Account::displayAccountsInfos( void ){
    std::cout << "Displaying account infors" << std::endl; 
}

Account::~Account() { }

int Account::getNbAccounts( void ) {
    return (Account::_nbAccounts);
}

int     Account::getTotalAmount( void ) {
    return (Account::_totalAmount);
}

int     Account::getNbDeposits( void ) {
    return (Account::_totalNbDeposits);
}

int     Account::getNbWithdrawals( void ) {
    return (Account::_totalNbWithdrawals);
}

void	Account::makeDeposit( int deposit ) {
    if (deposit > 0)
        _amount += deposit;
}

bool	Account::makeWithdrawal( int withdrawal ) { 
    if (withdrawal < 0 || _amount - withdrawal < 0)
        return false;
    _amount -= withdrawal;
    return true;
}

int		Account::checkAmount( void ) const { 
    return _amount;
}

void	Account::displayStatus( void ) const { 

}
