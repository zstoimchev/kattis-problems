#include <iostream>
#include <cstring>

int main()
{
    char str[80];
    int count = 0;
    std::cin.getline(str, 80);
    for (int i = 0; i < strlen(str); i++)
        if (toupper(str[i]) == 'A' || toupper(str[i]) == 'E' || toupper(str[i]) == 'I' || toupper(str[i]) == 'O' || toupper(str[i]) == 'U')
            count++;
    std::cout << count;
}
