/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.class.hpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aramos <alejandro.ramos.gua@gmail.com>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/08 16:20:40 by aramos            #+#    #+#             */
/*   Updated: 2025/11/08 16:28:35 by aramos           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CONTACT_CLASS_H
# define CONTACT_CLASS_H

# include <string>

class Contact
{
	std::string	_firstName;
	std::string	_lastName;
	std::string	_nickname;
	std::string	_number;
	std::string	_secret;

	bool	_isAlpha(std::string const input);
	bool	_isDigit(std::string const input);

	public:
		Contact(void);
		~Contact(void);
		std::string const	getFirstName(void) const;
		std::string const	getLastName(void) const;
		std::string const	getNickname(void) const;
		std::string const	getNumber(void) const;
		std::string const	getSecret(void) const;
		bool				isEmpty(void) const;
		bool				setFirstName(std::string str);
		bool				setLastName(std::string str);
		bool				setNickname(std::string str);
		bool				setNumber(std::string const str);
		bool				setSecret(std::string const str);
		bool				displayInfo(std::string const str);
};
#endif
