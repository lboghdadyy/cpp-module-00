/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sbaghdad <sbaghdad@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/22 12:09:38 by sbaghdad          #+#    #+#             */
/*   Updated: 2025/10/06 17:25:58 by sbaghdad         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include "Contact.hpp"

class PhoneBook
{
    private:
        Contact Contacts[8];
        int     count;
    public:
        void    add_contact(Contact contact);
        void    call(void);
        void    set_count(int index);
};
