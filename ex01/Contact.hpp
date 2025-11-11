# include <iostream>
# include <iomanip> 


class   Contact
{
    private:
        int         index;
        std::string FirstName;
        std::string LastName;
        std::string NickName;
        std::string PhoneNumber;
        std::string DarkestSecrets;
    public:
        void    AssignIt(int index, const std::string firstname,const std::string lastname, \
                const std::string nickname, const std::string phonenumber, \
                const std::string darkestsecrets);
        void    Announce(void);
        void    FullDetails(void);
};

void    PrintString(const std::string str);
int		asciitoint(const std::string string);
void	DisplayReq(const std::string str);