
#include "Harl.hpp"

void Harl::complain(std::string level)
{
    void (Harl::*complaintFunc)();

    if (level == "DEBUG")
        complaintFunc = &Harl::debug;
    else if (level == "INFO")
        complaintFunc = &Harl::info;
    else if (level == "WARNING")
        complaintFunc = &Harl::warning;
    else if (level == "ERROR")
        complaintFunc = &Harl::error;
    else {
        std::cout << "Invalid complaint level!" << std::endl;
        return;
    }

    (this->*complaintFunc)();
}

int main() {
    // Harl harl;
    
    // harl.complain("DEBUG");
    // harl.complain("INFO");
    // harl.complain("WARNING");
    // harl.complain("ERROR");
    // harl.complain("INVALID");

    return 0;
}
