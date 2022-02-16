#include "main.h"

/**
* infinite_add - adds two numbers
* @n1: first number
* @n2: second number
* @r: buffer
* @size_r: buffer size
* 
* Return: r or 0
*/

char *infinite_add(char *n1, char *n2, char *r, int size_r)
{
	int i = 0, j = 0, k, l, overflow = 0, flag = 0;
	char a;

	while (n1[i] != '\0')
	{
		i++;
	}
	i--;
	while (n2[j] != '\0')
	{
		j++;
	}
	j--;
	if (i + 1 > size_r || j + 1 > size_r)
	{
		return (0);
	}
	for (k = 0; i >= 0 && j >= 0; i--, j--, k++)
	{
		a = n1[i] + n2[j] - '0';
		for (l = k; l > 0; l--)
                {
                        r[l] = r[l - 1];
                }
		if (a > '9')
		{
			a -= 9;
			flag = 1;
		}
		else
		{
			flag = 0;
		}
		r[0] = a + overflow;
		if (flag == 1)
		{
			overflow = 1;
		}
		else
		{
			overflow = 0;
		}
	}
	if (i >= j)
	{
		for (; i >= 0; i--, k++)
		{
			a = n1[i] + overflow;
			for (l = k; l > 0; l--)
			{
				r[l] = r[l - 1];
			}
			if (a > '9')
			{
				a -= 9;
				flag = 1;
			}
			else
			{
				flag = 0;
			}
			r[0] = a;
			if (flag == 1)
			{
				overflow = 1;
			}
			else
			{
				overflow = 0;
			}
		}
		if (overflow == 1)
		{
			for (l = k + 1; l > 0; k++)
			{
				r[l] = r[l - 1];
			}
			r[0] = '1';
		}
	}
	else
	{
		for (; j >= 0; j--, k++)
                {
                        a = n2[j] + overflow;
                        for (l = k; l > 0; l--)
                        {
                                r[l] = r[l - 1];
                        }
                        if (a > '9')
                        {
                                a -= 9;
                                flag = 1;
                        }
                        else
                        {
                                flag = 0;
                        }
                        r[0] = a;
                        if (flag == 1)
                        {
                                overflow = 1;
                        }
                        else
                        {
                                overflow = 0;
                        }
                }
                if (overflow == 1)
                {
                        for (l = k + 1; l > 0; k++)
                        {
                                r[l] = r[l - 1];
                        }
                        r[0] = '1';
                }

	}
	return (r);
}
