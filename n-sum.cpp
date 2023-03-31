#include <iostream>

int main()
{
    int n, m, sum = 0;
    std::cin >> n;
    for (int i = 0; i < n; i++)
    {
        std::cin >> m;
        sum += m;
    }
    std::cout << sum;
    return 0;
}