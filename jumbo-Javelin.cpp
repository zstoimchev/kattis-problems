#include <iostream>

int main()
{
    int n, l, sum = 0;
    std::cin >> n;

    for (int i = 0; i < n; i++)
    {
        std::cin >> l;
        sum += l;
    }
    std::cout << sum - (n - 1);

    return 0;
}