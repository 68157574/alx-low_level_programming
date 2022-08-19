#include <stdio.h>
#include "main.h"



/**
* main - check the code.
* Return: Always 0.
*/
int main(void)
{
unsigned long int n;
int stat;
n = 1024;
stat = set_bit(&n, 5);
printf("%lu, status %d\n", n, stat);
n = 0;
stat = set_bit(&n, 10);
printf("%lu, status %d\n", n, stat);
n = 98;
stat = set_bit(&n, 0);
printf("%lu, status %d\n", n, stat);
return (0);
}
