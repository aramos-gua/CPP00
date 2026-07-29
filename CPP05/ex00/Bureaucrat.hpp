#ifndef BUREAUCRAT_HPP
# define BUREAUCRAT_HPP
# include <iostream>

class Bureaucrat
{
  private :
    const std::string _name;
    int               _grade;
  public :

    Bureaucrat();
    Bureaucrat(const Bureaucrat &other);
    Bureaucrat &operator=(const Bureaucrat &other);
    ~Bureaucrat();

    std::string getName();
    std::string getGrade();

    void  incrementGrade();
    void  decrementGrade();

    void  GradeTooHighException();
    void  GradeTooLowException();
}

# endif
