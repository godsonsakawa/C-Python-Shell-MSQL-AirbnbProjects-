#include "main.h"
#include <string.h>
/**
  * _memcpy - copies memory area
  * @n: The number of bytes to be copied from src.
  * @src: The memory area where bytes are copied from.
  * @dest: The memory area where bytes are copied to.
  * Return: dest.
  */
char *_memcpy(char *dest, char *src, unsigned int n)
{
        unsigned int i;

        for (i = 0; i < n && src[i] != '\0'; i++)
        {
                dest[i] = src[i];
        }
        for (; i < n; i++)
        {
                dest[i] = '\0';
        }
        return (dest);
}
