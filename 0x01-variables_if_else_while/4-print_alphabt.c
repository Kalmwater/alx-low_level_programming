#include<stdio.h>
/**
*main - entry point
*
* Return: always returs 0
*/
int main(void)
{
char ch;
for (ch = 'a'; ch <= 'z'; ch++)
{
if(ch != 'q' && ch != 'e')
{
putchar(ch);
}
putchar(10); /* this is an ascii code for new line*/
return (0)
}
