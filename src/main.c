#include "board.h"
#include "board_print_plain.h"
#include "board_read.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
char b[8][8];
char abcIdx[8] = {'a', 'b', 'c', 'd', 'e', 'f', 'g', 'h'};
int main()
{
    initBoard(b);
    char* input = NULL;
    do {
        system("clear");
        printBoard(b, abcIdx);
        printf("\nВведите ход или 'n' для выхода'\n");
        input = boardRead();
        if (strcmp(input, "n") != 0) {
            move(input, b);
        }
    } while (strcmp(input, "n") != 0);
}