#include <stdio.h>

/**
* main - Entry point
*
* Return: Always 0 (Success)
*/
int main(void)
{
int a[5] = { 98, 102, 402, -102, 298 };
int *p;

p = a + 2;
*(p) += 0;
printf("a[2] = %d\n", *(p));
return (0);
}
