#include <iostream>
#include <fstream>
#include <string>
#include <cstring>

int main (int argc, char **argv)
{
    std::ifstream file;
    std::ofstream copy;
    std::string name;
    std::string line;
    size_t pos;
    size_t n;
    size_t len;

    if (argc != 4)
        std::cout << "args: ./replace file str1 str2" << std::endl;
    else
    {
        name = argv[1];
        file.open(name.c_str(), std::ios::in);
        if (file.is_open())
        {
            name += ".replace";
            copy.open(name.c_str(), std::ios::out);
            if (copy.is_open())
            {
                len = std::strlen(argv[2]);
                while (std::getline(file, line))
                {
                    n = 0;
                    while (1)
                    {
                        pos = line.find(argv[2], n);
                        if (pos == std::string::npos)
                        {
                            copy << line.substr(n, line.length()) << std::endl;
                            break ;
                        }
                        copy << line.substr(n, pos - n) << argv[3];
                        n = pos + len;
                    }
                }
                file.close();
                copy.close();
            }
            else
                std::cout << "unable to open file" << std::endl;
        }
        else
            std::cout << "unable to open file" << std::endl;
    }
    
    return (0);
}