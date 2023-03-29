#include <iostream>

int main()
{
    int n;
    std::cin >> n;
    std::string *str = new std::string[n];
    for (int i = 0; i < n; i++)
        std::cin >> str[i];

    for (int i = 0; i < n; i += 2)
        std::cout << str[i] << std::endl;

    delete[] str;

    return 0;
}
