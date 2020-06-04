#include <stdlib.h>
#include <string.h>
#include <stdio.h>
char* boardRead()
{
    char* input = malloc(sizeof(char) * strlen("e2-e4"));
    scanf("%s", input);
    return input;
}