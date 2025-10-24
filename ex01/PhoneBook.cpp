/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sbaghdad <sbaghdad@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/21 10:24:21 by sbaghdad          #+#    #+#             */
/*   Updated: 2025/10/06 18:17:00 by sbaghdad         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include "PhoneBook.hpp"

void    PhoneBook::add_contact(Contact contact)
{    
    static int index;
    if (index == 8)
        index = 0;
    Contacts[index] = contact;
}

void    PhoneBook::call(void)
{
    std::cout << "this count" << this->count;
    for (int k = 0; k < this->count; k++)
        this->Contacts[k].annoce_it();
}

void    PhoneBook::set_count(int index)
{
    this->count = index;
}