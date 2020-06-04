#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#define MAX_INPUT_SZ strlen("e2-e4 e7-e6")+1
char* boardRead()
{
    char* input = malloc(sizeof(char) * MAX_INPUT_SZ);
    fgets(input, sizeof(char) * MAX_INPUT_SZ, stdin);
    sscanf(input, "%[^\n]", input);
    return input;
}