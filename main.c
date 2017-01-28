#include <stdio.h>
#include <stdlib.h>

int main(void)
{
    printf("           --\n");
    printf("---       -  -  ---------------             --\n");
    printf("---        ---  ----------------            --\n");
    printf("---      ---          --    ---            ---\n");
    printf("------------          --   ---             ---\n");
    printf("-------               -- ----             ---\n");
    printf("---                  --- --              ----\n");
    printf("---                  ---                ----\n");
    printf("---                 ---               ----\n");
    printf("-------------     ----            -------\n");
    printf(" ------------    ---              ----\n");
    
    char c;
    int duration = 100;
    double scale[] = {261.63, 277.18, 293.66, 311.13, 329.63, 349.23, 369.99, 392.00, 415.30, 440.00, 466.16, 493.88, 523.25};
    
    while(1)
    {
        c = getch();
        switch (c)
        {
            case 'z':
                for (int i = 0; i < 13; i++)
                {
                    scale[i] /= pow(1.0594630, 12);
                }
                break;
            case 'x':
                for (int i = 0; i < 13; i++)
                {
                    scale[i] *= pow(1.0594630, 12);
                }
                break;
            case 'c':
                duration -= 100;
                break;
            case 'v':
                duration += 100;
                break;
            case 'a':
                beep((int)scale[0],duration);
                break;
            case 'w':
                beep((int)scale[1],duration);
                break;
            case 's':
                beep((int)scale[2],duration);
                break;
            case 'e':
                beep((int)scale[3],duration);
                break;
            case 'd':
                beep((int)scale[4],duration);
                break;
            case 'f':
                beep((int)scale[5],duration);
                break;
            case 't':
                beep((int)scale[6],duration);
                break;
            case 'g':
                beep((int)scale[7],duration);
                break;
            case 'y':
                beep((int)scale[8],duration);
                break;
            case 'h':
                beep((int)scale[9],duration);
                break;
            case 'u':
                beep((int)scale[10],duration);
                break;
            case 'j':
                beep((int)scale[11],duration);
                break;
            case 'k':
                beep((int)scale[12],duration);
                break;
            default:
                break;
        }
    }
    system("PAUSE");	
    return 0;
}
