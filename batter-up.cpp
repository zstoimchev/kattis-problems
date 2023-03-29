#include <iostream>

int main()
{
    int n, m, count = 0;
    double sum = 0;
    std::cin >> n;
    for (int i = 0; i < n; i++)
    {
        std::cin >> m;
        if (m < 0)
        {
            count++;
            continue;
        }
        sum += m;
    }
    std::cout << sum / (n - count);

    return 0;
}
