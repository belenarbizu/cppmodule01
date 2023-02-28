#include "Harl.hpp"

//swtich sin la opcion break ejecuta todas las instrucciones a partir de la primera comparacion verdadera

int    n_option(std::string level)
{
    std::string levels[4] = {"DEBUG", "INFO", "WARNING", "ERROR"};

    for (int i = 0; i < 4; i++)
    {
        if (levels[i] == level)
            return (i);
    }
    return (-1);
}

void    filter(Harl harl, std::string level)
{
    switch(n_option(level))
    {
        case 0:
            harl.complain("DEBUG");
        case 1:
            harl.complain("INFO");
        case 2:
            harl.complain("WARNING");
        case 3:
            harl.complain("ERROR");
            break;
        default:
            std::cout << "[ Probably complaining about insignificant problems ]" << std::endl;
    }
}

int main(int argc, char **argv)
{
    Harl harl;

    if (argc != 2)
        std::cout << "[ Probably complaining about insignificant problems ]" << std::endl;
    else
        filter(harl, argv[1]);
}