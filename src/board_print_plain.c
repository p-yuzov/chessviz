#include <stdlib.h>
#include <string.h>
#include <stdio.h>
void printBoard(char b[8][8],char abcIdx[8])
{
    for (int i = 7; i >= 0; i--)
    {
        printf("\n%i", i + 1);
        for (int j = 0; j < 8; j++)
        {
            printf("%c", b[i][j]);
        }
    }
    printf("\n ");
    for (int i = 0; i < 8; i++)
    {
        printf("%c", abcIdx[i]);
    }
}