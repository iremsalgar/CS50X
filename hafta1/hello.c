#include <stdio.h>
#include<cs50.h>

int main()
{
    char *name = get_string("What is your name?\n");
    printf("hello. %s\n", name);
}