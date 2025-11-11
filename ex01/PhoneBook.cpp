# include "PhoneBook.hpp"

void    PhoneBook::set_count(const int set)
{
    this->count = set;
}

int    PhoneBook::get_count()
{
    return (this->count);
}

void    PhoneBook::AddContact(const Contact contact, int index)
{
    this->contacts[index] = contact;
}

void    PhoneBook::announce()
{
    for (int j = 0; j < 45; j++)
        std::cout<<"-";
    std::cout << std::endl;
    std::cout << "|";
    PrintString("index");
    std::cout << "|";
    PrintString("first name");
    std::cout << "|";
    PrintString("last name");
    std::cout << "|";
    PrintString("nickname");
    std::cout << "|";
    std::cout << std::endl;
    for (int j = 0; j < 45; j++)
        std::cout<<"-";
    std::cout << std::endl;
    for (int j = 0; j < this->count; j++)
    {
        this->contacts[j].Announce();
        std::cout << std::endl;
    }
    for (int j = 0; j < 45; j++)
        std::cout<<"-";
    std::cout << std::endl;
}

void	PhoneBook::SearchFT()
{
	int			input_i;
	std::string input;

	if (this->count == -1)
	{
		std::cout << "No contact yet !!!\n";
		return ;
	}
	this->announce();
	DisplayReq("Select index : ");
	std::getline(std::cin, input);
	input_i = asciitoint(input);
	if (input_i > 7 || input_i < 0 || (input_i >= this->count))
	{
		std::cout << "invalid index\n";
		return ;
	}
	this->GetInfo(input_i);
}

void    PhoneBook::GetInfo(int index)
{
    this->contacts[index].FullDetails();
}
