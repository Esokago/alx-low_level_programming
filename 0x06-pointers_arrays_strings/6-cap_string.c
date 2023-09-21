#include "main.h"
/**
*cap_string - function that capitalize first character of a word
*@str: string to capitalize
*
*Return:returns the capitalized string
*/

char *cap_string(char *str)
{
	int i;
       	i = 0;

	while (str[i] != '\0')
	{
	
		if (str[index - 1] == ' ' ||
				str[index - 1] == '\t' ||
				str[index - 1] == '\n' ||
				str[index - 1] == ',' ||
				str[index - 1] == ';' ||
				str[index - 1] == '.' ||
				str[index - 1] == '!' ||
				str[index - 1] == '?' ||
				str[index - 1] == '"' ||
				str[index - 1] == '(' ||
				str[index - 1] == ')' ||
				str[index - 1] == '{' ||
				str[index - 1] == '}')
			str[index] -= 32;
	}
	return (str);
}
