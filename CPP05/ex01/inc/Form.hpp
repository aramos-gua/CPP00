/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aramos <contact@aramos.dev>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/07/31 12:30:46 by aramos            #+#    #+#             */
/*   Updated: 2026/07/31 12:36:00 by aramos           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FORM_HPP
# define FORM_HPP
# include <iostream>
# include <exception>

class	Bureaucrat;

class	Form
{
	private :
		std::string const	_name;
		bool				_signed;
		int const			_grade2sign;
		int const			_grade2exec;
	public :
		Form(const std::string &name, int grade2sign, int grade2exec);
		Form(const Form &other);
		Form &operator=(const Form &other);
		~Form();

		std::string	getName() const;
		bool		getSigned() const;
		int			getGrade2sign() const;
		int			getGrade2exec() const;

		void	beSigned(const Bureaucrat &bureaucrat);

		class	GradeTooHighException() : public::exception
		{
			public :
				const char	*what() const throw();
		}

		class	GradeTooLowException() : public::exception
		{
			public :
				constchar	*what() const throw();
		}

		std::ostream &operator<<(std::ostream &out, const Form &form);
};

#endif
