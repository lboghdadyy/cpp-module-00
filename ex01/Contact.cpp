# include "Contact.hpp"

void    Contact::annoce_it(void)
{
    std::cout<<"----------------------------------------------"<<std::endl;
    std::cout<<"|Index     |First Name |Last Name |Nickname  |"<<std::endl;
    std::cout<<"----------------------------------------------"<<std::endl;
    std::cout<<"|"<< index << "|" << FirstName << "|" << LastName << "|" << "|" <<std::endl;
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