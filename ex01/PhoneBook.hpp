# include "Contact.hpp"

class PhoneBook
{
	private:
		int		count;
		Contact contacts[8];
	public:
		void	set_count(int set);
		int		get_count();
		void	announce(void);
		void	AddContact(const Contact contact, int index);
		void	GetInfo(int index);
};

