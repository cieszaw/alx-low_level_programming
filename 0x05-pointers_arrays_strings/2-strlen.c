#include "main.h"
/**
 * _strlen - a function that returns the length of a string.
 * @s: string
 * Return: length
 */
int _strlen(char *s)
{
int longi = 0;
for (; *s != '\0'; s++)
{
longi++;
}
return (longi);
}
