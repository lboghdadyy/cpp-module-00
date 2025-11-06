# include "PhoneBook.hpp"

void    PhoneBook::set_count(const int set)
{
    this->count = set;
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
    std::cout << std::endl;
    for (int j = 0; j < 45; j++)
        std::cout<<"-";
    std::cout << std::endl;
}

void    PhoneBook::GetInfo(int index)
{
    this->contacts[index].FullDetails();
}