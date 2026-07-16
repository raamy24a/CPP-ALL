#include "AForm.hpp"
#include "PresidentialPardonForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "ShrubberyCreationForm.hpp"

class Intern
{
private:
    /* data */
public:
    Intern(/* args */);
    ~Intern();
    Intern(const Intern &other); 
    AForm* robotomyRequest(std::string target);
    AForm* presidentialPardon(std::string target);
    AForm* shrubberyCreation(std::string target);
    AForm* makeForm(std::string name, std::string target);
};
