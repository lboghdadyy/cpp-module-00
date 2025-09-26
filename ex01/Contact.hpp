# include "phonebook.hpp"

class Contact
{
    private:
        int         index;
        std::string FirstName;
        std::string LastName;
        std::string NickName;
        std::string PhoneNumber;
    public:
        void    annoce_it(void);
        Contact(int i, std::string firstname, std::string lastname, std::string nickname, std::string phonenum);
};
