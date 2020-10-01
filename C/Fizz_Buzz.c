// a fizz buzz in c (first thing I though would work :) )
// Author: @stanmondesir
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{
    char str[12];
    int i;

    i = 1;
    while (i < 100)
    {
        if (i % 3 == 0)
            strcat(str, "Fizz");
        if (i % 5 == 0)
            strcat(str, "Buzz");
        if (!(str[0]))
            printf("%d\n", i);
        else
            printf("%s\n", str);
        str[0] = '\0';
        i++;
    }
}
