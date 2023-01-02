#include <unistd.h>
#include <stdlib.h>
//#include <cs50.h>

int main(int ac, char **av)
{
    int i = atoi(av[1]);
    if(ac == 2 && i < 9)
    {   
        int yildiz = 0;
        int bosluk = i - yildiz;
        int chk = yildiz;
        int i_chk = i;
        while (i_chk >= 0)
        {
            bosluk = i - yildiz;
            chk = yildiz;
            while( chk > 0 )
            {
                while (bosluk > 0)
                {
                    write(1, " ", 1);
                    bosluk--;
                }
                if(bosluk == 0)
                    write(1, "#", 1);
                chk--;
            }
            yildiz++;
            if(bosluk == 0)
                write(1, "\n", 1);
            i_chk--;
        }
        
    }
}