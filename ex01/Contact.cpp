# include "Contact.hpp"

void    Contact::annoce_it(void)
{
	int     index;

	std::cout<<"----------------------------------------------"<<std::endl;
	std::cout<<"|Index     |First Name |Last Name |Nickname  |"<<std::endl;
	std::cout<<"----------------------------------------------"<<std::endl;
	std::cout<<"|"<< index << "|";
	if (FirstName.size() > 10)
	{
		for (int k = 0; k < 10; k++)
		{
			if (k < 7)
				std::cout << FirstName[k];
			else
				std::cout << ".";
		}
	}
	else
	{
		index = 0;
		while (FirstName[index])
		{
			std::cout << FirstName;
			index++;
		}
		for (int j = index; j < 10; j++)
			std::cout << " ";
	}
	std::cout << "|";
	if (LastName.size() > 10)
	{
		for (int k = 0; k < 10; k++)
		{
			if (k < 7)
				std::cout << LastName[k];
			else
				std::cout << ".";
		}
	}
	else
	{
		index = 0;
		while (LastName[index])
		{
			std::cout << LastName;
			index++;
		}
		for (int j = index; j < 10; j++)
			std::cout << " ";
	}
	std::cout << "|";
	if (NickName.size() > 10)
	{
		for (int k = 0; k < 10; k++)
		{
			if (k < 7)
				std::cout << NickName[k];
			else
				std::cout << ".";
		}
	}
	else
	{
		index = 0;
		while (NickName[index])
		{
			std::cout << NickName;
			index++;
		}
		for (int j = index; j < 10; j++)
			std::cout << " ";
	}
	std::cout << "|" <<std::endl;
	std::cout<<"----------------------------------------------"<<std::endl;
}

Contact::Contact(int i, std::string firstname, std::string lastname, std::string nickname, std::string phonenum)
{
	this->index = i;
	this->FirstName = firstname;
	this->LastName = lastname;
	this->NickName = nickname;
	this->PhoneNumber = PhoneNumber;
}