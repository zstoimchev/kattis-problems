#include <iostream>

int main()
{
    std::string s;
    std::cin >> s;
    int count = 0;

    for (int i = 0; i < s.length(); i++)
    {
        for (int j = i+1; j < s.length(); j++)
            if (s[i] == s[j])
            {
                std::cout << 0;
                return 0;
            }
    }
    std::cout << 1;

    return 0;
}