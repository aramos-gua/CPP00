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

#ifndef AFORM_HPP
# define AFORM_HPP
# include <iostream>
# include <string>
# include <exception>

class	Bureaucrat;

class	AForm
{
	private :
		std::string const	_name;
		bool				_signed;
		int const			_grade2sign;
		int const			_grade2exec;

	protected :
		void	checkExec(Bureaucrat const &executor) const;

	public :
		AForm(const std::string &name, int grade2sign, int grade2exec);
		AForm(const AForm &other);
		AForm &operator=(const AForm &other);
		virtual ~AForm();

		std::string		getName() const;
		bool			getSigned() const;
		int				getGrade2sign() const;
		int				getGrade2exec() const;
		virtual void	execute(Bureaucrat const &executor) const = 0;

		void	beSigned(const Bureaucrat &bureaucrat);

		class	GradeTooHighException : public std::exception
		{
			public :
				const char	*what() const throw();
		};

		class	GradeTooLowException : public std::exception
		{
			public :
				const char	*what() const throw();
		};

		class	FormNotSignedException : public std::exception
		{
			public :
				const char	*what() const throw();
		};

};

std::ostream &operator<<(std::ostream &out, const AForm &form);

#endif
