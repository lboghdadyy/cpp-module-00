/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sbaghdad <sbaghdad@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/06 17:27:46 by sbaghdad          #+#    #+#             */
/*   Updated: 2025/10/06 18:16:32 by sbaghdad         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include "PhoneBook.hpp"

// void	add_contact(PhoneBook phonebook);

int main(void)
{
    PhoneBook	phonebook;
	int			index;
	bool		fixed = false;
	std::string	FirstName;
	std::string	LastName;
	std::string	NickName;
	std::string	PhoneNumber;
	std::string	DarkestSecret;
	std::string	input;

	index = 0;
	phonebook.set_count(index);
	std::cout << "Welcome to my awesome phonebook :)" << std::endl;
    while (1)
    {
		std::cout << "please enter one of these commands : ADD, SEARCH or EXIT. (MAN for guideness)" << std::endl;
		std::cin >> input;
		if (input == "EXIT")
			return (0);
		if (input == "ADD")
		{
			std::cout << "please enter the first name : ";
			std::cin >> FirstName;
			std::cout << std::endl << "please enter the last name : ";
			std::cin >> LastName;
			std::cout << std::endl << "please enter the Nickname : ";
			std::cin >> NickName;
			std::cout << std::endl << "please enter his number : ";
			std::cin >> PhoneNumber;
			std::cout << std::endl << "please enter his darkest secrets : ";
			std::cin >> DarkestSecret;
			Contact		contact;
			contact.set(index, FirstName, LastName, NickName, PhoneNumber, DarkestSecret);
			phonebook.add_contact(contact);
			if (!fixed)
				phonebook.set_count(index);
			index++;
			if (index == 8)
			{
				fixed = true;
				index = 0;
			}
		}
		if (input == "SEARCH")
		{
			std::cout<<"----------------------------------------------"<<std::endl;
			std::cout<<"|Index     |First Name |Last Name |Nickname  |"<<std::endl;
			std::cout<<"----------------------------------------------"<<std::endl;
			phonebook.call();
			std::cout<< std::endl <<"----------------------------------------------"<<std::endl;
		}
    }
	return (0);
}