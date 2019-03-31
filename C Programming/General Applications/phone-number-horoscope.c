#include <stdio.h>
#include <stdlib.h>

void header();
void prompt();
void footer();
void horoscope();
int calc();
int main()
{
    header();
    prompt();
    horoscope();
    footer();
    return 0;
}

void header()
{
    printf("=================================================\n   P H O N E   N U M B E R   H O R O S C O P E   \n=================================================\n");
}

void footer()
{
    printf("\n=================================================\n=================================================\n");
}

void prompt()
{
    printf("\nEnter your phone number :   ");
}

int calc()
{
    char pnStr[11];
    int pnNum, sum = 0;
    scanf("%s", &pnStr);
    pnNum = atoi(pnStr);
    do
    {
        sum = 0;
        do
        {
            sum += pnNum % 10;
            pnNum /= 10;
        } while (pnNum > 0);
        pnNum = sum;
    } while (sum > 9);

    return sum;
}

void horoscope()
{
    printf("\nYour phone number horoscope result is : %d\n", calc());
}
