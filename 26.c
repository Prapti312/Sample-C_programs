#include<stdio.h>
void* square(void* num);
int main()
{
	int x=6;
	int squared;
	squared=square(&x);
	printf("square of x is : %d",squared);
	printf("made some changes today");
}
void* square(void* num)
{
	return (*(int *)num)*(*(int *)num);
}
