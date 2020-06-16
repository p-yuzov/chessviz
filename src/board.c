#include <stdlib.h>
#include <string.h>

void initBoard(char b[8][8])
{
    b[0][0] = 'R';
    b[0][1] = 'N';
    b[0][2] = 'B';
    b[0][3] = 'Q';
    b[0][4] = 'K';
    b[0][5] = 'B';
    b[0][6] = 'N';
    b[0][7] = 'R';
    int i, j;
    for (i = 0; i < 8; i++) {
        b[1][i] = 'P';
    }
    for (i = 2; i < 6; i++) {
        for (j = 0; j < 8; j++) {
            b[i][j] = ' ';
        }
    }
    for (i = 0; i < 8; i++) {
        b[6][i] = 'p';
    }
    b[7][0] = 'r';
    b[7][1] = 'n';
    b[7][2] = 'b';
    b[7][3] = 'q';
    b[7][4] = 'k';
    b[7][5] = 'b';
    b[7][6] = 'n';
    b[7][7] = 'r';
}
int getIdxAbc(char c)
{
    char abcIdx[8] = {'a', 'b', 'c', 'd', 'e', 'f', 'g', 'h'};
    ;
    for (int i = 0; i < sizeof(abcIdx); i++) {
        if (c == abcIdx[i]) {
            return i;
        }
    }
    return -1;
}
int checkInput(char* input)
{
    if (strlen(input) != 11) {
        return -1;
    }
    return 0;
}
void move(char* input, char b[8][8])
{
    if (checkInput(input) == -1) {
        return;
    }
    int i1 = input[1] - '0';
    int j1 = getIdxAbc(input[0]);
    int i2 = input[4] - '0';
    int j2 = getIdxAbc(input[3]);
    char c = b[i1 - 1][j1];
    //рубим фигуру в клетке хода белых
    b[i2 - 1][j2] = ' ';
    b[i1 - 1][j1] = b[i2 - 1][j2];
    b[i2 - 1][j2] = c;
    i1 = input[7] - '0';
    j1 = getIdxAbc(input[6]);
    i2 = input[10] - '0';
    j2 = getIdxAbc(input[9]);
    c = b[i1 - 1][j1];
    //рубим фигуру в клетке хода черных
    b[i2 - 1][j2] = ' ';
    b[i1 - 1][j1] = b[i2 - 1][j2];
    b[i2 - 1][j2] = c;
}