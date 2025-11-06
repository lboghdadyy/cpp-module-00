# include "Contact.hpp"

void    PrintString(const std::string str)
{
    int len;

    len = str.length();
    if (len > 9)
    {
        std :: cout << str.substr(0, 9) << ".";
    }
    else
    {
        for (int h = 0;  h < 10 - len; h++)
            std::cout << " ";
        std :: cout << str;
    }
}

void    Print(const char str[], const std::string info)
{
    std :: cout << str << " : " << info << std::endl;
}

void    Contact::Announce(void)
{
    std :: cout << "|`" << index << "|";
    PrintString(this->FirstName);
    std :: cout << "|";
    PrintString(this->LastName);
    std :: cout << "|";
    PrintString(this->NickName);
    std :: cout << "|";
}

void    Contact::AssignIt(int index, const std::string firstname,const std::string lastname, \
                const std::string nickname, const std::string phonenumber, \
                const std::string darkestsecrets)
{
    this->FirstName = firstname;
    this->LastName = lastname;
    this->DarkestSecrets = darkestsecrets;
    this->PhoneNumber = phonenumber;
    this->index = index;
    this->NickName = nickname;
}

void    Contact::FullDetails(void)
{
    Print("FirstName", this->FirstName);
    Print("LastName", this->LastName);
    Print("NickName", this->NickName);
    Print("PhoneNumber", this->PhoneNumber);
    Print("Darkests Secrets", this->DarkestSecrets);
}