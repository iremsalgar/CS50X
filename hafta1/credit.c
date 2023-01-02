#include <unistd.h>
#include <stdlib.h>
//#include <cs50.h>
#include <stdio.h>

int ft_controller(long number)
{
    return(1);
}

int main(int ac, char **av)
{
    int len = strlen(av[1]);
    char *card_name;
    int chk_card;
    long number = av[1];

    if(len == 15)
    {
        if(atoi(av[1][0]) == 3)
            chk_card++;
        if(atoi(av[1][1]) == 4 || atoi(av[1][1]) == 7)
            chk_card++;
        if(chk_card == 2)
            *card_name = "AMEX";
    }
    chk_card = 0;
    if(len == 16)
    {
        if(atoi(av[1][0]) == 5)
            chk_card++;
        if(atoi(av[1][1]) == 1 || atoi(av[1][1]) == 2 || atoi(av[1][1]) == 3 || atoi(av[1][1]) == 4 ||atoi(av[1][1]) == 5)
            chk_card++;
        if(chk_card == 2)
            *card_name = " MASTERCARD";
    }
    chk_card = 0;
    if(len == 13 || len == 16)
    {
        if(atoi(av[1][0]) == 4)
            chk_card++;
        if(chk_card == 1)
            *card_name = "VISA";
    }
    int control_chk = 0;
    if(*card_name == '\0')
        *card_name= "INVALID";
    if(ft_controller(number))
        control_chk = 1;
    if(control_chk)
    {
        printf("%ld\n", number);
        printf("%s\n", card_name);
    }
}