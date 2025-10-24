/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sbaghdad <sbaghdad@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/06 16:46:31 by sbaghdad          #+#    #+#             */
/*   Updated: 2025/10/06 17:13:16 by sbaghdad         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include <iostream>

class Contact
{
	private:
		int			index;
		std::string	FirstName;
		std::string	LastName;
		std::string	NickName;
		std::string	PhoneNumber;
		std::string DarkestSecret;
	public:
		void	annoce_it(void);
		void	set(int i, std::string firstname, std::string lastname, std::string nickname, std::string phonenum, std::string darkestsecrets);
};
