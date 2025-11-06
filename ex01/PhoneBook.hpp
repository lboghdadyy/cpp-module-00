# include "Contact.hpp"

class PhoneBook
{
    private:
        int     count;
        Contact contacts[8];
    public:
        void    set_count(int set);
        void    announce(void);
        void    AddContact(const Contact contact, int index);
        void    GetInfo(int index);
};

