#include <iostream>

int main()
{

    int p;
    std::cin >> p;
    int no[p][3];
    for (int i = 0; i < p; i++)
    {
        std::cin >> no[i][0] >> no[i][1];
        no[i][2] = no[i][1];
    }

    for (int i = 0; i < p; i++){
        for (int j = 0; j < no[i][1]; j++)
            no[i][2] += j;
        no[i][2]+=no[i][1];
    }

    for (int i = 0; i < p; i++)
        std::cout << no[i][0] << " " << no[i][2] << std::endl;

    return 0;
}
