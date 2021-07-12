
#include <stdio.h>
#include <conio.h>
#include <string.h>

char str[1000];
void main()
{
    int ch = 9;
    printf("Enter string : - ");
    scanf("%[^\n]%*c", str);

    printf("what funtion do you want to perform ? \n 1) Encrypt\n 2)Decrypt\n");
    printf("Input :- ");
    scanf("%d", &ch);
    //printf("%d",)
    if (ch == 1)
    {
        // * Encryption

        int len = strlen(str);

        for (int i = 0; i < len; i++)
        {
            if (str[i] % 2 == 0)
            {
                // ! Even
                str[i] += 22;
                //printf("\n%d at %d\n", str[i], i);
                //str[i] *= 10;
            }
            else
            {
                // ! odd
                str[i] -= 20;
                // printf("\n%d at %d\n", str[i], i);
                // str[i] *= 10;
            }
        }
    }
    else
    {
        // * Decryption

        int len = strlen(str);

        for (int i = 0; i < len; i++)
        {
            //str[i] /= 10;

            if (str[i] % 2 == 0)
            {
                // ! Even
                str[i] -= 22;
            }
            else
            {
                // ! odd
                str[i] += 20;
            }
        }
    }

    printf("%s", str);
    getch();
}
