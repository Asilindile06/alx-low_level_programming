#include <stdbool.h>

/**
 * _atoi - COnverts a string into integer
 * @s: input string
 *
 * Return: int
 */

int _atoi(char *s)
{
	int sign = 1;
	int result = 0;
	int i = 0;
	bool digits_found = false;

	/* Skip leading whitespace */
	while (s[i] == ' ')
	{
		i++;
	}

    /* Check for leading signs */
	while (s[i] == '-' || s[i] == '+')
	{
		if (s[i] == '-')
		{
			sign *= -1;
		}
		i++;
	}

    /* Iterate over the string and convert digits to integer */
	for (; s[i] != '\0'; i++)
	{
		if (s[i] >= '0' && s[i] <= '9')
		{
			digits_found = true;

			/* Update the result by multiplying by 10 and adding the current digit */
			result = result * 10 + (s[i] - '0');
		}
		else
		{
			/* Break the loop if a non-digit character is encountered */
			break;
		}
	}

    /* Apply the sign to the result if digits were found */
	if (digits_found)
	{
		result = result * sign;
	}

	return (result);
}

