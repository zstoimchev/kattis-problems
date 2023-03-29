#include <iostream>
#include <string>

int main()
{
    int a, b, res1, res2;
    std::cin >> a >> b;
    res1 = ((a % 10) * 10 + (a / 10) % 10) * 10 + a / 100;
    res2 = ((b % 10) * 10 + (b / 10) % 10) * 10 + b / 100;

    if (res1 > res2)
        std::cout << res1;
    else
        std::cout << res2;

    return 0;
}