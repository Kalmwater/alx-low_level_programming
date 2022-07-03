#include<stdio.h>
/**
*main - entry point
*
* Return: always returs 0
*/
int main(void)
{
char a;
for (a = 'a'; a <= 'z'; a++)
{
if (a =='e'|| a == 'q')
continue;
else
putchar(a);
}
return (0);
}
