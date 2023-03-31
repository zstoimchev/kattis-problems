#include <iostream>

int main()
{
    int wc, hc, ws, hs;
    std::cin >> wc >> hc >> ws >> hs;

    if (wc == ws + 3 && hc == hs + 3)
        std::cout << 1;
    else
        std::cout << 0;

    return 0;
}