#include <stdio.h>

/**
*main -prints the size of various types
*Return: 0 if exited properly,no-zero otherwise
*/
int main(void)
{
printf("Size of a char: %d byte\n", sizeof(char));
printf("size of an int: %d byte\n", sizeof(int));
printf("size of a long int: %d byte\n", sizeof(long int));
prinff("size of a long long int: %d byte\n", sizeof(long long int));
printf("size of a float: %d byte\n", sizeof(float));
return (0);
}
