#include <iostream>

int main()
{
    int a;
    std::cin >> a;
    if (a / 2 * 2 == a)
        std::cout << "Bob";
    else
        std::cout << "Alice";

    return 0;
}