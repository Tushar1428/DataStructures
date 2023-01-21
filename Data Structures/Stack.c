#include <stdio.h>

int stack[5];
int top=-1;

void push(){
    int element;
    if(top<=4){
        top=top+1;
        printf("enter a element \n");
        scanf("%d",&element);
         stack[top]=element;
        
    }
    else
    printf("stack overflow");
}
void pop(){
    if(top>=0){
    printf("deleted element is :%d",stack[top]);
    top--;
   
    }
    else
    printf("stack underflow\n");
}

int Top(){
    if(top>=0){
    printf("%d\n",stack[top]);
    
    }
    else
    printf("no element in stack");
  
}



int main()
{
  int choice;
 
  do {
      printf("1.push\n");
      printf("2.pop\n");
      printf("3.Top\n");
      printf("enter a choice\n");
      scanf("%d",&choice);
      
  switch(choice)
  {
   case 1 :
   push();
   break;
   
   case 2 :
   pop();
   break;
   
   case 3 : 
   Top();
   break;
   
  default :
  printf("enter a correct choice");
  }
  
  }while(choice!=3);
    return 0;
  }