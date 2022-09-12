#include <stdio.h>
#include <stdbool.h>

void initialize(int *a, int *b, char *c)
{
    *a = 10;
    *b = 20;
    *c = 'A';
}
 
// Return multiple values from a function in C
int main(void)
{
    int a=9, b=4;
    char c='C';
 
    initialize(&a, &b, &c);
    printf("a = %d, b = %d, c = %c", a, b, c);
 
    return 0;
}