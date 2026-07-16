#include "Intern.hpp"

Intern::Intern(/* args */)
{
    std::cout << "Default Intern constructor called" << std::endl;

}

Intern::~Intern()
{
        std::cout << "Default Intern destructor called" << std::endl;

}
Intern::Intern(const Intern &other)
{
    if (this != &other)
    {
        *this = other;
    }
}
AForm* Intern::robotomyRequest(std::string target)
{
    return new RobotomyRequestForm(target);
}
AForm* Intern::presidentialPardon(std::string target)
{
    return new PresidentialPardonForm(target);
    
}
AForm* Intern::shrubberyCreation(std::string target)
{
    return new ShrubberyCreationForm(target);
}

AForm* Intern::makeForm(std::string name, std::string target)
{
    AForm* (Intern::*list[])(std::string target) = {
    &Intern::robotomyRequest, 
    &Intern::presidentialPardon, 
    &Intern::shrubberyCreation
    };
    int i = 0;
    std::string levels[3] = {"robotomy request", "presidential pardon", "shrubbery creation"};
    while (i != 3)
    {
        if (name == levels[i])
        {
            std::cout << "Intern creates " << name << std::endl;
            return (this->*list[i])(target);
        }
        i++;
    }
    if (i > 2)
        std::cerr << "Error: Form not known" << std::endl;
    return (NULL);
}