#include<stdio.h>
#include<stdlib.h>
#include<string.h>

struct persons{
  char name[50];
  struct persons * next;

};

typedef struct persons person;

int main(){
  person * curr, * head;
  char strn[50];
  int ans;
  head = NULL;
  
  do{ 
    printf("Enter name:");
    scanf("%s",strn);
    curr = (person *)malloc(sizeof(person));
    strcpy(curr->name,strn);
    curr->next = head;
    head = curr;
    
    printf("Wana quit type 0  :");
    scanf("%d",&ans);
  }while(ans!=0);

  curr = head;

  while(curr){
    printf("%s\n", curr->name);
    curr = curr->next;
  }


  return 0;
}
