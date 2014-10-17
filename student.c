#include<stdio.h>
#include<string.h>

struct student{
  char name[50];
  float marks;
};

int main(){

  struct student *std1;
  struct student std2;
  char s1[30];
  float f;

  std1 = &std2;
  printf("Student name:");
  scanf("%s", s1);
  printf("Student Marks:");
  scanf("%f",&f);
  strcpy(std1->name,s1);
  std1->marks = f;
 
  printf("Name is :%s \n", std1->name);
  printf("Marks is :%f \n", std1->marks);
  return 0;
}
