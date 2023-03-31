#include <iostream>

int main()
{
    int n, r, e, c;
    std::cin >> n;
    std::string res[n];
    int counter = 0;

    for (int i = 0; i < n; i++)
    {
        std::cin >> r >> e >> c;
        if (r > e - c)
            res[counter] = "do not advertise";
        else if (r == e - c)
            res[counter] = "does not matter";
        else if (r < e - c)
            res[counter] = "advertise";
        counter++;
    }

    for (int i = 0; i < n; i++)
        std::cout << res[i] << std::endl;

    return 0;
}