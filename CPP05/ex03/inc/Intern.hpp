/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Intern.hpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aramos <contact@aramos.dev>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/07/30 14:58:39 by aramos            #+#    #+#             */
/*   Updated: 2026/08/14 22:19:37 by aramos           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef INTERN_HPP
# define INTERN_HPP
# include <string>
# include "AForm.hpp"

class	Intern
{
	private :
		typedef AForm	*(*FormCreator)(std::string const &target);
		static AForm	*createShrubbery(std::string const &target);
		static AForm	*createRobotomy(std::string const &target);
		static AForm	*createPardon(std::string const &target);

	public :
		Intern();
		Intern(const Intern &other);
		Intern &operator=(const Intern &other);
		~Intern();

		AForm	*makeForm(std::string const &formName, std::string const &target);
};


# endif
