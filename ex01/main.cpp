# include "PhoneBook.hpp"    

void	DisplayReq(const std::string str)
{
	std::cout << "Enter your " << str << std::endl;
}

int CheckSpaces(const std::string string)
{
	size_t len;

	len = string.size();
	for (size_t index = 0; index < len; index++)
	{
		if (!std::isspace(string[index]))
				return (0);
	}
	return (1);
}

int	 CheckString(const std::string str, const std::string type)
{
	size_t		len;

	len = str.length();
	for (size_t k = 0; k < len; k++)
	{
		if (!std::isprint(str[k]))
			return (std :: cout << "Invalid input, please try again\n", 1);
		if (type == "Phonenumber" && !std::isdigit(str[k]))
			return (std :: cout << "Phonenumber contains only digit\n", 1);
	}
	if (CheckSpaces(str))
		return (std :: cout << "Only spaces input is invalid\n", 1);
	if (str.empty())
		return (1);
	return (0);
}

int		asciitoint(const std::string string)
{
	if (string.length() >= 2)
		return (-1);
	return (string[0] - '0');
}



std::string	ReqString(const std::string type)
{
	std::string string;

	DisplayReq(type);
	if(!std::getline(std::cin, string))
		return ("");
	while (CheckString(string, type))
	{
		std :: cout << "Please reenter your " << type << std::endl;
		if(!std::getline(std::cin, string))
			return ("");
	}
	return (string);
}

void	ReadIpnut(PhoneBook phonebook)
{
	Contact		contact;
	std::string	FirstName;
	std::string	LastName;
	std::string	NickName;
	std::string	PhoneNumber;
	std::string	DarkestSecrets;
	int			index;
	bool		set;
	std::string	input;
 
	index = 0;
	set = true;
	phonebook.set_count(-1);
	while (1)
	{
		DisplayReq("select commnad between : ADD, SEARCH or EXIT");
		if (!std::getline(std::cin, input))
			break ;
		if (input == "EXIT")
			return ;
		else if (input == "ADD")
		{
			FirstName = ReqString("Firstname");
			LastName = ReqString("Lastname");
			NickName = ReqString("Nickname");
			PhoneNumber = ReqString("Phonenumber");
			DarkestSecrets = ReqString("Darkest Secrets");
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
			phonebook.SearchFT();
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
	PhoneBook	phonebook;
	
	std::cout << "Hello to my awesome PhoneBook\n";
	ReadIpnut(phonebook);
}