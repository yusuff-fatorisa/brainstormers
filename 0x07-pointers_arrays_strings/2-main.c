#include "main.h"
#include <stdio.h>

/**
 * main - check the code
 *
 * Return: Always 0.
 */
int main(void)
{
    char *s = "hello";
    char *w = "Olaoluwa";
    char *f;
    char *g;

    f = _strchr(s, 'l');

    if (f != NULL)
    {
        printf("%s\n", f);
    }

    g = _strchr(w, 'a');

    if (g != NULL)
    {
        printf("%s\n", g);
    }
    return (0);
}
