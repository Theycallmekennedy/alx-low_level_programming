#include "main.h"
#include <stdlib.h>
/**
 * string_nconcat - concatenates two strings, up to n bytes of the second string
 * @s1: first string to concatenate
 * @s2: second string to concatenate
 * @n: number of bytes of s2 to concatenate
 *
 * Return: pointer to newly allocated memory containing the concatenated string,
 * or NULL if allocation fails
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
        char *concat_string;
        unsigned int len1 = 0, len2 = 0, i;

        if (s1 == NULL)
                s1 = "";
        if (s2 == NULL)
                s2 = "";

        while (s1[len1])
                len1++;

        while (s2[len2])
                len2++;

        if (n >= len2)
                n = len2;

        concat_string = malloc(sizeof(char) * (len1 + n + 1));

        if (concat_string == NULL)
                return (NULL);

        for (i = 0; i < len1; i++)
                concat_string[i] = s1[i];

        for (i = 0; i < n; i++)
                concat_string[len1 + i] = s2[i];

        concat_string[len1 + n] = '\0';

        return (concat_string);
}

