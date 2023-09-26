#include "main.h"
/**
*_strstr - The _strstr() function finds the occurrence
* of the substring needle in the string haystack.
*@haystack: string where  search made
*@needle: string whose occurence 
*Return:Returns a pointer
*/

char *_strstr(char *haystack, char *needle)
{
	int i;

	if (*needle == 0)
		return (haystack);

	while (*haystack)
	{
		i = 0;

		if (haystack[i] == needle[i])
		{
			do {
				if (needle[i + 1] == '\0')
					return (haystack);
				i++;
			} while (haystack[i] == needle[i]);
		}
		haystack++;
	}
	return ('\0');
}
