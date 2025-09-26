#include <iostream>

int main(int ac, char *argv[])
{
    std::string str;

    if (ac == 1)
        std::cout << "* LOUD AND UNBEARABLE FEEDBACK NOISE *";
    for (int i = 1; i < ac; i++)
    {
        str = argv[i];
        for(int j = 0; j < str.length(); j++)
            std::cout<<(char)std::toupper(str[j]);
    }
    std::cout<<std::endl;
    return (0);
}
