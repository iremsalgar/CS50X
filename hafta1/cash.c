#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main(void) 
{
    int lira = get_float("Para ustu : ");
    int kurus = round(lira * 100);
    int i = 0;

    while (kurus > 0)
    {
        while(kurus - 25 > 0)
        {
            kurus = kurus - 25;
            i++;
        }
        while ( kurus < 25 && kurus - 10 >= 0)
        {
            kurus = kurus - 10;
            i++;
        }
        while ( kurus < 25 && kurus < 10 && kurus - 5 >= 0)
        {
            kurus = kurus - 5;
            i++;
        }
        while (kurus < 5 && kurus < 25 && kurus < 10 && kurus - 1 >= 0)
        {
            kurus = kurus - 1;
            i++;
        }
    }
    printf("%d", i);
}

//cs50x de istenen formatta değilde ac av şeklinde
//yazmayı tercih ederim ancak örneklerde bu şekilde 
//yapılıyor kodları ac av olarak yazıp kontrol ediyor ardından
//sadece kütüphane ve get fonksiyonları ekliyorum
