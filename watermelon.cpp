#include <stdlib.h>
#include <stdio.h>
#include <iostream>

int main()
{
    int n;
    std::cin >> n;

    if ((n & ~3) && !(n & 1))
    {
        printf("YES");
    }
    else
    {
        printf("NO");
    }
}