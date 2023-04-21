#include <iostream>

int main()
{
    std::string johnsa;
    std::string doctorsa;
    std::cin >> johnsa >> doctorsa;
    if (johnsa.length() - 1 < doctorsa.length() - 1)
        std::cout << "no";
    else
        std::cout << "go";
}