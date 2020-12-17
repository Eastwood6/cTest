#include <stdio.h>
#include <string.h>
#include <ctype.h>
#include <math.h>
static int testVarialble = 101;
 void test2()
{
	printf("asdf");
	printf("\n%d", testVarialble);
}

test1()
{
	//int a=17/2;
	//int b=3%2;
	//printf("%d", !(111));
	//printf("\n%d", !0);
	//printf("\n%d", b);
	//printf("\n%d", 'a' - 'A');
	//printf("\n%c", '!'+32);

	//printf("\n%c",tolower('C'));
	//printf("\n%d",isdigit('4'));
	//printf("\n%d", sizeof(ch));

	//@function atoi, which converts a string of digits into its numeric equivalent.
	/* atoi: convert s to integer */
	/*int atoi(char s[])
	{
		int i, n;
		n = 0;
		for (i = 0; s[i] >= '0' && s[i] <= '9'; ++i)
			n = 10 * n + (s[i] - '0');
		return n;
	}*/

	//@function lower, which maps a single character to lower case for the ASCII character set.If the character is not an upper case letter, lower returns it unchanged.
		/* lower: convert c to lower case; ASCII only */
		/*int lower(int c)
	{
		if (c >= 'A' && c <= 'Z')
			return c + 'a' - 'A';
		else
			return c;
	}*/
	
	//@function strcat: concatenate t to end of s; s must be big enough
	/*
		void strcat(char s[], char t[])
	{
		int i, j;
		i = j = 0;
		while (s[i] != '\0') 
			i++;
		while ((s[i++] = t[j++]) != '\0') 
			;
	}
	*/

	//2.7 type conversion
	/*printf("\n%d", -1L < 1U);
	printf("\n%d", -1L > 1UL);*/

	//2.9 bitwise operator
	//@ (& operator)
	/*int x = 163;
	x = x & 0177(sets to zero all but the low-order 7 bits of n.);
	printf("\n%d", x);*/

	//@ difference between & and && 
	/* int x = 1;
	int y = 2;
	//bitwize operator
	int z1 = x & y;
	//logical operator 
	int z2 = x && y;
	printf("\n%d", z1);
	printf("\n%d", z2);*/

	//@ x & (-077) use
	//int x = 205;
	//x = x & (-077)(sets the last six bits of x to zero except last one.);
	//printf("\n%d", x);

	//3.5
	/*@function reverse: reverse string s in place */
	//#include <string.h>
	/*void reverse(char s[])
	{
		int c, i, j;
		for (i = 0, j = strlen(s) - 1; i < j; i++, j--) {
			c = s[i];
			s[i] = s[j];
			s[j] = c;
		}
	}*/

	//3.6
	/*@function itoa: convert n to characters in s */
	//void itoa(int n, char s[])
	//{
	//	int i, sign;
	//	if ((sign = n) < 0) /* record sign */
	//		n = -n; /* make n positive */
	//	i = 0;
	//	do { /* generate digits in reverse order */
	//		s[i++] = n % 10 + '0'; /* get next digit */
	//	} while ((n /= 10) > 0); /* delete it */
	//	if (sign < 0)
	//		s[i++] = '-';
	//	s[i] = '\0';
	//	reverse(s);
	//}

	//@removes trailing blanks, tabsand newlines from the end of a string, using a break to exit from a loop when the rightmost non - blank, non - tab, non - newline is found.
	/* trim: remove trailing blanks, tabs, newlines */
	//int trim(char s[])
	//{
	//	int n;
	//	for (n = strlen(s) - 1; n >= 0; n--)
	//		if (s[n] != ' ' && s[n] != '\t' && s[n] != '\n')
	//			break;
	//	s[n + 1] = '\0';
	//	return n;
	//}

	//4.2
	/*@function atof: convert string s to double */
	//#include <ctype.h>
	//double atof(char s[])
	//{
	//	double val, power;
	//	int i, sign;
	//	for (i = 0; isspace(s[i]); i++) /* skip white space */
	//		;
	//	sign = (s[i] == '-') ? -1 : 1;
	//	if (s[i] == '+' || s[i] == '-')
	//		i++;
	//	for (val = 0.0; isdigit(s[i]); i++)
	//		val = 10.0 * val + (s[i] - '0');
	//	if (s[i] == '.')
	//		i++;
	//	for (power = 1.0; isdigit(s[i]); i++) {
	//		val = 10.0 * val + (s[i] - '0');
	//		power *= 10;
	//	}
	//	return sign * val / power;
	//}


	//5.2 Pointers and Function Arguments
	//changex(&x);
	//void changex(int* x) {
	//	*x = 3;
	//};

	//exchange two out-of-order arguments with a function called swap
	//swap(&a, &b);
	//void swap(int* px, int* py) /* interchange *px and *py */
	//{
	//	int temp;
	//	temp = *px;
	//	*px = *py;
	//	*py = temp;
	//}

	//5.3 Pointers and Arrays
	//experiment of array a: a==&a[0],a[i]==*(a+i)
	//int s[] = { 1,3,2 };
	//printf("\n%d", s);
	//printf("\n%d", &s[0]);
	//printf("\n%d", *(s + 2));


	//@¾­³£Õ³Ìù
	//printf("\n%d", d1);
}