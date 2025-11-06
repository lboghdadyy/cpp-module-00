# include "PhoneBook.hpp"    

void	DisplayReq(const std::string str)
{
	std::cout << "Enter your " << str << std::endl;
}

int	 CheckString(const std::string str)
{
	size_t	len;

	len = str.length();
	for (size_t k = 0; k < len; k++)
	{
		if (!std::isprint(str[k]))
			return (1);
	}
	if (str.empty())
		return (1);
	return (0);
}

void	ReadIpnut()
{
	PhoneBook	phonebook;
	Contact		contact;
	std::string	FirstName;
	std::string	LastName;
	std::string	NickName;
	std::string	PhoneNumber;
	std::string	DarkestSecrets;
	int			index;
	int			i_inp;
	bool		set;
	std::string	input;
 
	index = 0;
	set = true;
	phonebook.set_count(index);
	while (1)
	{
		std::cout << "ADD, SEARCH or EXIT\n";
		std::getline(std::cin, input);
		if (input == "EXIT")
			return ;
		else if (input == "ADD")
		{
			std::cout << "here\n";
			DisplayReq("first name");
			std::getline(std::cin, FirstName);
			if (CheckString(FirstName))
			{
				std :: cout << "Invalid input\n";
				continue;
			}
			DisplayReq("last name");
			std::getline(std::cin, LastName);
			if (CheckString(LastName))
			{
				std :: cout << "Invalid input\n";
				continue;
			}
			DisplayReq("nickname");
			std::getline(std::cin, NickName);
			if (CheckString(NickName))
			{
				std :: cout << "Invalid input\n";
				continue;
			}
			DisplayReq("Phonenumber");
			std::getline(std::cin, PhoneNumber);
			if (CheckString(PhoneNumber))
			{
				std :: cout << "Invalid input\n";
				continue;
			}
			DisplayReq("darkests secrets");
			std::getline(std::cin, DarkestSecrets);
			if (CheckString(DarkestSecrets))
			{
				std :: cout << "Invalid input\n";
				continue;
			}
			if (index == 8)
			{
				index = 0;
				set = false;
			}
			contact.AssignIt(index, FirstName, LastName, NickName, PhoneNumber, DarkestSecrets);
			phonebook.AddContact(contact, index);
			index++;
			if (set)
				phonebook.set_count(index);
		}
		else if (input == "SEARCH")
		{
			phonebook.announce();
			std::cout << "Please enter index of the contact" << std::endl;
			std::cin >> i_inp;
			if (i_inp > 7 || i_inp < 0)
			{
				std::cout << "invalid index\n";
				continue;
			}
			phonebook.GetInfo(i_inp);
		}
		else if (input.empty())
		{
			if (!std::getline(std::cin, input))
				break ;
			continue ;
		}
	}
}

int main(void)
{
	std::cout << "Hello to my awesome PhoneBook\n";
	ReadIpnut();
}