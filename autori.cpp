#include <iostream>
#include <cstring>

int main()
{
    char str[100];
    std::cin.getline(str, 100);
    int count = 1;
    char res[100];
    res[0] = str[0];
    for (int i = 0; i < strlen(str); i++)
        if (str[i] == '-')
        {
            res[count] = str[i + 1];
            count++;
        }
    res[count]='\0';

    std::cout << res;
    return 0;
}
