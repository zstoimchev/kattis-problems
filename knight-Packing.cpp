#include <iostream>

int main()
{
    int n;
    std::cin >> n;
    if (n / 2 * 2 == n)
        std::cout << "second";
    else
        std::cout << "first";

    return 0;
}