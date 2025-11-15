/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.class.hpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aramos <alejandro.ramos.gua@gmail.com>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/08 12:21:20 by aramos            #+#    #+#             */
/*   Updated: 2025/11/11 19:21:33 by aramos           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PHONEBOOK_CLASS_H
# define PHONEBOOK_CLASS_H

# include <string>
# include "Contact.class.hpp"

class PhoneBook
{
	private:
		int		_index;
		bool	_abort;
		Contact	_contactList[8];
		
		std::string	_validateInput(std::string const prompt);
		void		_nextIndex(void);
		bool		_displayContact(std::string const input) const;
		void		_displayContactBook(void) const;
		void		_printContactInfoToTable(int const index) const;
		void		_printTableString(std::string str) const;

	public:
		PhoneBook(void);
		~PhoneBook(void);
		std::string	deleteSpaces(std::string str);
		bool		newContact(void);
		bool		searchContact(void);
		void		showContact(int index) const;
};
#endif
