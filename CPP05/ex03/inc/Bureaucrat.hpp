/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.hpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aramos <contact@aramos.dev>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/07/30 14:58:32 by aramos            #+#    #+#             */
/*   Updated: 2026/07/30 14:58:35 by aramos           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BUREAUCRAT_HPP
# define BUREAUCRAT_HPP
# include <iostream>
# include <exception>

class	AForm;

class	Bureaucrat
{
  private :
    const std::string	_name;
    int					_grade;
  public :

    Bureaucrat(const std::string &name, int grade);
    Bureaucrat(const Bureaucrat &other);
    Bureaucrat &operator=(const Bureaucrat &other);
    ~Bureaucrat();

    std::string	getName() const;
	int			getGrade() const;

    void	incrementGrade();
    void	decrementGrade();
	void	signForm(AForm &form);
    void    executeForm(AForm const &form) const;

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
};

std::ostream &operator<<(std::ostream &out, const Bureaucrat &bureaucrat);

# endif
