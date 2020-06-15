#include "board.h"
#include "board_print_plain.h"
#include "board_read.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

char b[8][8];
char abcIdx[8] = {'a', 'b', 'c', 'd', 'e', 'f', 'g', 'h'};
int main(int argc, char* argv[])
{
    initBoard(b);
    char* input = NULL;
    if (argc == 1) {
        do {
            system("clear");
            printBoard(b, abcIdx);
            printf("\nВведите ход или 'n' для выхода'\n");
            input = boardRead();
            if (strcmp(input, "n") != 0) {
                move(input, b);
            }
        } while (strcmp(input, "n") != 0);
    } else {
        FILE* file;
        file = fopen(argv[1], "r");
        if (file == NULL) {
            printf("\nfile is null");

        } else {
            input = malloc(12);
            while (fgets(input, 12, file) != NULL) {
                move(input, b);
            }
            printBoard(b, abcIdx);
            fclose(file);
        }
    }
}