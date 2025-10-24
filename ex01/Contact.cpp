# include "Contact.hpp"

void	printf_column(std::string string)
{
	int	i;

	i = 0;
	if (string.size() > 10)
	{
		for (int k = 0; k < 10; k++)
		{
			if (k < 7)
				std::cout << string[k];
			else
				std::cout << ".";
		}
	}
	else
	{
		i = 0;
		while (string[i])
		{
			std::cout << string[i];
			i++;
		}
		for (int j = i; j < 10; j++)
			std::cout << " ";
	}
	std::cout << '|';
}

void	Contact::annoce_it(void)
{
	int	i;

	i = 0;
	std::cout<<"|"<< index << "         |";
	printf_column(FirstName);
	printf_column(LastName);
	printf_column(NickName);
}

void	Contact::set(int i, std::string firstname, std::string lastname, std::string nickname, std::string phonenum, std::string darkestsecrets)
{
	this->index = i;
	this->FirstName = firstname;
	this->LastName = lastname;
	this->NickName = nickname;
	this->PhoneNumber = PhoneNumber;
	this->DarkestSecret = darkestsecrets;
}
