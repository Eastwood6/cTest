#include <stdio.h>
#include <ctype.h>
#include <string.h>
#define MAXWORD 100
#define NKEYS (sizeof keytab / sizeof(keytab[0]))
int getword(char*, int);
int binsearch(char*, struct key*, int);
struct key {
char *word;
int count;
} keytab[] = {
"auto", 0,
"break", 0,
"case", 0,
"char", 0,
"const", 0,
"continue", 0,
"default", 0,
/* ... */
"unsigned", 0,
"void", 0,
"volatile", 0,
"while", 0
};
/* makepoint: make a point from x and y components */
//struct point {
//	int x;
//	int y;
//};
//struct point makepoint(int x, int y)
//{
//	struct point temp;
//	temp.x = x;
//	temp.y = y;
//	return temp;
//}
/* count C keywords */
main()
{	
	//int n;
	//char word[MAXWORD];
	//while (getword(word, MAXWORD) != EOF)
	//	if (isalpha(word[0]))
	//		if ((n = binsearch(word, keytab, NKEYS)) >= 0)
	//			keytab[n].count++;
	//for (n = 0; n < NKEYS; n++)
	//	if (keytab[n].count > 0)
	//		printf("%4d %s\n",keytab[n].count, keytab[n].word);
	//return 0;

	struct MyStruct
	{
		char x;
		float f;
	};
	struct MyStruct ms = { '1',1.1 };
	//struct as arr[10];
	printf("\n%d", sizeof(ms));

 }

/* binsearch: find word in tab[0]...tab[n-1] */
int binsearch(char* word, struct key tab[], int n)
{
	int cond;
	int low, high, mid;
	low = 0;
	high = n - 1;
	while (low <= high) {
		mid = (low + high) / 2;
		if ((cond = strcmp(word, tab[mid].word)) < 0)
			high = mid - 1;
		else if (cond > 0)
			low = mid + 1;
		else
			return mid;
	}
	return -1;
}
int getword(char* word, int lim)
{
	int c, getch(void);
	void ungetch(int);
	char* w = word;
	while (isspace(c = getch()))
		;
	if (c != EOF)
		*w++ = c;
	if (!isalpha(c)) {
		*w = '\0';
		return c;
	}
	for (; --lim > 0; w++)
		if (!isalnum(*w = getch())) {
			ungetch(*w);
			break;
		}
	*w = '\0';
	return word[0];
}

//@function sizeof,isalnum,isalpha
//printf("\n%d", sizeof(struct MyStruct));
//1×Ö½Ú(zijie)£¨Byte£©=8Î»(wei)£¨bit£©
//printf("\n%d", sizeof(struct MyStruct)); 
//printf("\n%d", sizeof(short int));	2
//printf("\n%d", sizeof(int));			4
//printf("\n%d", sizeof(long int));		4
//printf("\n%d", sizeof(float));		4
//printf("\n%d", sizeof(double));		8
//printf("\n%d", sizeof(char));			1

//printf("\n%d", isalnum('1'));
//printf("\n%d", isalpha('9'));