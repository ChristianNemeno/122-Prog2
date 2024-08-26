#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct{
int age;
char name[50];
float grade;
} student;

void print(student s){
printf("%s\n", s.name);
printf("%d\n", s.age);
printf("%.2f\n", s.grade);
}
int main()
{

    student noeh;
    strcpy(noeh.name, "Boiser, Noeh");
    noeh.age = 12;
    noeh.grade = 5.0;

    print(noeh);

    //printf("Hello world!\n");
    return 0;
}
