#include <iostream>
#include <string.h>

int main()
{
    char moves[50];
    std::cin.getline(moves, 50);
    if (moves[strlen(moves) - 1] == 'A')
        std::cout << 2;
    else if (moves[strlen(moves) - 1] == 'B')
        std::cout << 3;
    else if (moves[strlen(moves) - 1] == 'C')
        std::cout << 1;

    return 0;
}
