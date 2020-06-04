#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include "board.h"
#include "board_read.h"
#include "board_print_plain.h"
char b[8][8];
char abcIdx[8] = {'a','b','c','d','e','f','g','h'};
int main()
{
    initBoard(b);
    char* input = NULL;
    do {
        system("clear");
        printBoard(b,abcIdx);
        printf("\nВведите ход или 'n' для выхода'\n");
        input = boardRead();
    } while (strcmp(input, "n") != 0);

}