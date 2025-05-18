#include <iostream>
#include <string.h>

int main()
{
    int n;

    std::cin >> n;

    char outputs[100][101];

    for (int i = 0; i < n; i++)
    {
        std::cin >> outputs[i];
    }

    for (int i = 0; i < n; i++)
    {
        size_t l = strlen(outputs[i]);
        if (l > 10)
        {
            std::cout << outputs[i][0] << l - 2 << outputs[i][l - 1] << '\n';
        }
        else
        {
            std::cout << outputs[i] << '\n';
        }
    }
}