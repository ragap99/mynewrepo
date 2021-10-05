#include <stdio.h>
#include <stdlib.h>

int main()
{
    int password=1234;
    do
    {
        printf("please enter your password!\n");
        scanf("%d",&password);
        if (password!=1234)
        {
            printf("wrong passworg");
        }
    }
    while(password!=1234);
    printf("logged in");



}
