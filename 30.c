#include<stdio.h>
#include<string.h>
typedef struct{
	char title[40];
	float hour;
	int id;
}course;

void update_course(course *cs);
void display_course(course cs);

int main()
{
	course cs1;
	update_course(&cs1);
	display_course(cs1);
}

void update_course(course *cs)
{
	cs->id=11;
	cs->hour=3.45;
	strcpy(cs->title,"Advanced c++");
}

void display_course(course cs)
{
	printf("Title:%s\n",cs.title);
	printf("Hour: %4.3f\n",cs.hour);
	printf("ID is : %d\n",cs.id);
}
