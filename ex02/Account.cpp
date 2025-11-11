# include "Account.hpp"

int Account::_nbAccounts = 0;
int Account::_totalAmount = 0;
int Account::_totalNbDeposits = 0;
int	Account::_totalNbWithdrawals = 0;

void	Account::makeDeposit( int deposit )
{
	int p_amount;

	p_amount = _amount;
	this->_amount += deposit;
	this->_nbDeposits++;
	this->_totalAmount += deposit;
	_totalNbDeposits++;
	this->_displayTimestamp();
	std::cout << " index:" 
	<< this->_accountIndex << ";p_amount:" << p_amount << ";deposit:" << deposit << ";amount:" << _amount  << ";nb_deposits:" 
	<< this->_nbDeposits << std::endl;
}

bool	Account::makeWithdrawal( int withdrawal )
{
	int p_amount;

	p_amount = _amount;
	if (_amount - withdrawal < 0 || this->_totalAmount - withdrawal < 0)
	{
		this->_displayTimestamp();
		std::cout << " index:" 
		<< this->_accountIndex << ";p_amount:" << this->_amount <<
		";withdrawal:refused" << std::endl;
		return (false);
	}
	this->_nbWithdrawals++;
	this->_amount -= withdrawal;
	this->_totalNbWithdrawals++;
	this->_totalAmount -= withdrawal;
	this->_displayTimestamp();
	std::cout << " index:" 
	<< this->_accountIndex << ";p_amount:" << p_amount << ";withdrawal:" << withdrawal
	<< ";amount:" << _amount << ";nb_withdrawal:" << this->_nbWithdrawals << std::endl;
	return (true);
}
int Account::getNbAccounts( void )
{
	return (_nbAccounts);
}

int	Account::getTotalAmount( void )
{
	return (_totalAmount);
}

int		Account::checkAmount( void ) const
{
	return (this->_amount);
}

void	Account::displayStatus( void ) const
{
	this->_displayTimestamp();
	std::cout << " index:" 
	<< this->_accountIndex << ";amount:" << this->_amount << ";deposits:" 
	<< this->_nbDeposits << ";withdrawals:" << this->_nbWithdrawals 
	<< std::endl;
}

int     Account::getNbDeposits( void )
{
	return (_totalNbDeposits);
}

int	Account::getNbWithdrawals( void )
{
	return (_totalNbWithdrawals);
}

void	Account::displayAccountsInfos( void )
{
	_displayTimestamp();
	std::cout << " accounts:" << _nbAccounts << ";total:" << _totalAmount 
	<< ";deposits:" << _totalNbDeposits << ";withdrawals:" 
	<< _totalNbWithdrawals << std::endl;
}

void	print(int i)
{
	if (i < 10)
		std::cout << "0" << i;
	else
		std::cout << i; 
}

void	Account::_displayTimestamp( void )
{
    std::time_t time = std::time(NULL);
    std::tm		*conv = std::localtime(&time);

    std::cout << "[" << conv->tm_year + 1900 <<  conv->tm_mon + 1 << conv->tm_mday
    << "_" ;
	print(conv->tm_hour);
	print(conv->tm_min);
	print(conv->tm_sec);
	std::cout << "]";
}

Account::Account( int initial_deposit )
{
	this->_amount = initial_deposit;
	this->_nbDeposits = 0;
	this->_nbWithdrawals = 0;
	_accountIndex = _nbAccounts++;
	_totalAmount += initial_deposit;
	this->_displayTimestamp();
	std::cout << " index:" << _accountIndex 
	<< ";amount:" << this->_amount << ";created" << std::endl;
}

Account::~Account(void)
{
	this->_displayTimestamp();
	std::cout << " index:" << this->_accountIndex << ";amount:" << this->_amount << ";closed" << std::endl;
}
