#include <unistd.h>
#include <stdlib.h>
//#include <cs50.h>

int main(int ac, char **av)
{
    int h = atoi(av[1]);
    //do{
    //    h = get_int("higt"\n);
    //}while(h < 1 || h > 8)
    if(h >= 0 && h < 9)
    {
        int yildiz = 1;
        int bosluk = h - yildiz;
        while (yildiz <= h)
        {
            while (bosluk > 0)
            {
                write(1, " ", 1);
                bosluk--;
            }
            int tutucu = yildiz;
            while (tutucu)
            {
                write(1, "#", 1);
                tutucu--;
            }
            write(1, "  ", 2);
            tutucu = yildiz;
            while (tutucu)
            {
                write(1, "#", 1);
                tutucu--;
            }
            write(1, "\n", 1);
            yildiz++;
            bosluk = h - yildiz;
        }
        
    }
}