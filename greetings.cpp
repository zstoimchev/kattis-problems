#include <iostream>
// #include <cstring>
// #include<string>

int main()
{
    std::string geo;
    std::cin >> geo;
    int n = geo.length() - 2;

    std::cout << "h";
    for (int i = 0; i < n * 2; i++)
        std::cout << "e";
    std::cout << "y";

    return 0;
}