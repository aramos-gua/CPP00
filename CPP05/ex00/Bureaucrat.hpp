#ifndef BUREAUCRAT_HPP
# define BUREAUCRAT_HPP
# include <iostream>

class Bureaucrat
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

    class	GradeTooHighException : public std::exception
	{
		std::cout << e.
	};
    class	GradeTooLowException : public std::exception
	{

	};
};

std::ostream &operator<<(std::ostream &out, const Bureaucrat &bureaucrat);

# endif
