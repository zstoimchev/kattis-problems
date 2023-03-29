#include <iostream>

int main()
{

    int g; // GCVWR (maximum pulling weight, vehicle included)
    int t; // weight of truck
    int n; // num of items to bring
    int mass = 0;
    std::cin >> g >> t >> n;
    int w[n];
    for (int i = 0; i < n; i++)
    {
        std::cin >> w[i];
        mass += w[i];
    }

    int towing = g - t;
    towing = (towing * 90 / 100) - mass;
    std::cout << towing;

    return 0;
}