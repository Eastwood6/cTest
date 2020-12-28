//#include <stdio.h>
//
//main()
//{
////!!!pointers to array
//int inarr[10] = { 1,2,3,1,2,1,31,2 };
//int* xx = inarr;
//
////表示修改地址指向,指向21
////*xx = 21;
//printf("\n%d", *xx);
////*(xx) = 21;
////printf("\n%d", *(xx));
////
////printf("\n%d", inarr[0]);
//////表示修改地址本身,即移动指针
////*(xx + 5);
////*xx++;
//////表示既修改地址指向,又修改地址本身
////*xx++ = 21;
////
////printf("\n%d", inarr[0]);
//
//////address of the first element of array
////printf("\n%d", *xx);
//////first element
////printf("\n%d", *(xx));
//////second element
////printf("\n%d", *(xx + 1));
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

//5.5 Character Pointers and Functions
/* strcpy: copy t to s; pointer version 3 */
//void strcpy(char* s, char* t)
//{
//	while (*s++ = *t++)
//		;
//}

//* p++ = val; /* push val onto stack */
//val = *--p; /* pop top of stack into val */
//are the standard idiom for pushingand popping a stack; see Section 4.3.

/*
char** argv
argv : pointer to char
int(*daytab)[13]
daytab : pointer to array[13] of int
int* daytab[13]
daytab : array[13] of pointer to int
void* comp()
comp : function returning pointer to void
void (*comp)()
comp : pointer to function returning void
char (*(*x())[])()
x : function returning pointer to array[] of
pointer to function returning char
char(*(*x[3])())[5]
x : array[3] of pointer to function returning
pointer to array[5] of char
*/