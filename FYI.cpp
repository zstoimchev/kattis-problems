#include <iostream>
#include <string>

int main()
{

    std::string num;
    
    std::cin >> num;

    if (num[0] == '5' && num[1] == '5' && num[2] == '5')
        std::cout << "1";
    else
        std::cout << "0";
    return 0;
}