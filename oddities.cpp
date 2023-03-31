#include <iostream>

int main()
{
    int n, m;
    std::cin >> n;
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        std::cin >> arr[i];
    }

    for (int i = 0; i < n; i++)
    {
        if (arr[i] % 2 == 0)
            std::cout << arr[i] << " is even" << std::endl;
        else
            std::cout << arr[i] << " is odd" << std::endl;
    }
    return 0;
}