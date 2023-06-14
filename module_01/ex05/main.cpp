
#include "Harl.hpp"

void Harl::complain()
{
    void (Harl::*ptr_to_fct_addr[4])() = {&Harl::_debug, &Harl::_warning, &Harl::_info, &Harl::_error};
    std::string levels[4] = {"debug", "warning", "info", "error"};

    for (int i = 0; i < 4; i++)
    {
        if (get_level() == levels[i])
            (this->*ptr_to_fct_addr[i])();
    }
};   

int main(int ac, char **av)
{
    if (ac  == 2)
    {
        Harl harl(av[1]);
        harl.complain();
        return (EXIT_SUCCESS);
    }
    std::cout << "Error: Wrong number of arguments" << std::endl;
    return (EXIT_FAILURE);
}
