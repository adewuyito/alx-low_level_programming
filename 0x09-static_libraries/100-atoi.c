#include "main.h"
#include <ctype.h>

int _atoi(char *s)
{
	int sign;
	int result, i;

	sign = 1;
	result = 0;
	i = 0;
	while (isspace(s[i]))
	{
		i++;
	}
	if (s[i] == '-' || s[i] == '+')
	{
		if (s[i] == '-')
			sign = -1;
		i++;
	}

	while (isdigit(s[i]))
	{
		result = result * 10 + (s[i] - '0');
		i++;
	}

	return (result * sign);
}