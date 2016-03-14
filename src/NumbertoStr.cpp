/*
OVERVIEW: Given a float number ,Convert it into a string 

INPUTS: A Float,Final string ,How many digits after decimal has to be displayed .
Its zero for integers.


OUTPUT: No need to output anything ,Modify the str in function parameter such that it
now holds the string format of the float number specified

Example : number_to_str(345,str,0);
Should copy "345\0" in the str;
number_to_str(345.342,str,2);
Should copy "345.34" in the str;

NOTES: Don't create new string.

*/

#include <stdio.h>
void number_to_str(float number, char *str, int afterdecimal)

{
	int num, i = 0,j, k = 1, l = 0, ad;
	ad = afterdecimal;
	if (afterdecimal == 0)
	{
		ad = -1;
	}
	if (number<0)
	{
		str[0] = '-';
		i++;
		l++;
		number = number*-1;
	}
	num = number;
	while (num)
	{
		i++;
		num = num / 10;
	}
	{
		while (afterdecimal>0)
		{
			num = number * 10;
			number = number * 10;
			k++;
			afterdecimal--;
		}
	}
	num = number;
	for (j = i + ad; j >= l; j--)
	{
		if (j == i)
		{
			str[j] = '.';
		}
		else
		{
			str[j] = num % 10 + '0';
			num = num / 10;
		}
	}
}