#include <iostream>
#include <string>

int main()
{
    std::string word;
    std::cin >> word;
    for (int i = 0; i < word.length(); i++)
    {
        if (word[i] == 'a')
        {
            for (int j = i; j < word.length(); j++)
                std::cout << word[j];
            return 0;
        }
        else
            continue;
    }
}
