# include "PhoneBook.hpp"    

void	DisplayReq(const std::string str)
{
	std::cout << "Enter your " << str << std::endl;
}

int	 CheckString(const std::string str, const std::string type)
{
	size_t		len;

	len = str.length();
	for (size_t k = 0; k < len; k++)
	{
		if (!std::isprint(str[k]))
			return (std :: cout << "Invalid input, please try again", 1);
		if (type == "Phonenumber" && !std::isdigit(str[k]))
			return (std :: cout << "Phonenumber contains only digit\n", 1);
	}
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

void	SearchFT(PhoneBook phonebook)
{
	int			input_i;
	std::string input;

	if (phonebook.get_count() == -1)
	{
		std::cout << "No contact yet !!!\n";
		return ;
	}
	phonebook.announce();
	DisplayReq("Select index : ");
	std::getline(std::cin, input);
	input_i = asciitoint(input);
	if (input_i > 7 || input_i < 0)
	{
		std::cout << "invalid index\n";
		return ;
	}
	phonebook.GetInfo(input_i);
}

std::string	ReqString(const std::string type)
{
	std::string string;

	DisplayReq(type);
	if(!std::getline(std::cin, string))
		return ("");
	while (CheckString(string, type))
	{
		if(!std::getline(std::cin, string))
			return ("");
	}
	return (string);
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
	bool		set;
	std::string	input;
 
	index = 0;
	set = true;
	phonebook.set_count(-1);
	while (1)
	{
		DisplayReq("select commnad between : ADD, SEARCH or EXIT");
		if(!std::getline(std::cin, input))
			break ;
		if (input == "EXIT")
			return ;
		else if (input == "ADD")
		{
			DisplayReq("Firstname");
			std::getline(std::cin, FirstName);
			if (CheckString(FirstName, "Firstname"))
				continue ;
			LastName = ReqString("Lastname");
			NickName = ReqString("Nickname");
			PhoneNumber = ReqString("Phonenumber");
			DarkestSecrets = ReqString("Darkest Secrets");
			if ()
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
			SearchFT(phonebook);
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