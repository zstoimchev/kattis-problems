#include <iostream>

int main()
{
    int a, b;
    std::cin >> a >> b;
    if (a > b)
    {
        int temp = b;
        b = a;
        a = temp;
    }
    for (int i = a + 1; i <= b + 1; i++)
        std::cout << i << std::endl;
    return 0;
}