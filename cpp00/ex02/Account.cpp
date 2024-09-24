#include "Account.hpp"

int Account::_nbAccounts = 0;
int Account::_totalAmount = 0;
int Account::_totalNbDeposits = 0;
int Account::_totalNbWithdrawals = 0;

Account::Account(int initial_deposit)
{
    this->_amount = initial_deposit;
    this->_totalAmount += this->_amount;
    this->_nbAccounts++;
    cout << "index:" << this->_accountIndex << ";amout:" << this->_amount <<";created"<< endl;
}

Account::~Account(void)
{
    cout << "index:" << this->_accountIndex << ";amout:" << this->_amount <<";closed" << endl;
}

int	Account::getNbAccounts( void )
{
    return (_nbAccounts);
}

int	Account::getTotalAmount( void )
{
    return (_totalAmount);
}

int	Account::getNbDeposits( void )
{
    return (_totalNbDeposits);
}

int	Account::getNbWithdrawals( void )
{
    return (_totalNbWithdrawals);
}

void	Account::displayAccountsInfos( void )
{
    int accounts = Account::getNbAccounts();
    int totalAmount = Account::getTotalAmount();
    int totalNbDeposits = Account::getNbDeposits();
    int totalNbWithdrawals = Account::getNbWithdrawals();

    cout << "accounts:" << accounts << ";total:" 
    << totalAmount << ";deposits:" << totalNbDeposits << ";withdrawals:" << totalNbWithdrawals << endl;
}

void	Account::makeDeposit( int deposit )
{
    int pamount = this->_amount;
    this->_amount += deposit;
    this->_totalAmount += deposit;
    this->_nbDeposits++;
    this->_totalNbDeposits++;
    cout << "index:"<< _accountIndex << "p_amount:"<< pamount
    <<";deposits:"<< deposit << ";amount:"<<this->_amount<<";nb_deposits:"<<this->_nbDeposits<<endl;
}

bool	Account::makeWithdrawal( int withdrawal )
{
    int pamount = this->_amount;
    if (withdrawal > this->_amount)
    {
        cout << "index:"<< _accountIndex << "p_amount:"<< pamount<<";withdrawal:refused"<<endl;
        return (0);
    }
    this->_amount -= withdrawal;
    this->_totalAmount -=withdrawal;
    this->_nbWithdrawals++;
    this->_totalNbWithdrawals++;
    cout << "index:"<< _accountIndex << "p_amount:"<< pamount
    <<";withdrawal:"<<this->_nbWithdrawals<<":amount"<<this->_amount<<":nb_withdrawals:"<<this->_nbWithdrawals<<endl;
    return (1);
}

void	Account::displayStatus( void ) const
{
    cout << "index:"<<this->_accountIndex << ";amount:" << this->_amount 
    << ";deposits:" << this->_nbDeposits << ";withdrawals:" << this->_nbWithdrawals<<endl;
}