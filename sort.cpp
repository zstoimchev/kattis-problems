#include <iostream>

int main()
{
    int a, b;
    std::cin >> a >> b;
    if (a < b)
        std::cout << a << " " << b;
    else if (a > b)
        std::cout << b << " " << a;
    else
        std::cout << a << " " << b;
    return 0;
}