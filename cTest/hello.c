#include <stdio.h>
#include <string.h>
#include <ctype.h>
#include <math.h>
static int y = 2;
//extern void test2();
int testVarialble;
int x = 11;
main()
{
	/*
	int *ip;
	ip = &x;
	y = *ip;
*/

	//test2();
 
	int s[] = {1,3,2};
	printf("\n%d", s);
	printf("\n%d", &s[0]);
	printf("\n%d", *(s+2));
	

}
int changex(int *x) {
		*x = 3;
		return 1;
	};

void testt() {
	//printf("test");
	printf("\n%d", x);
}



