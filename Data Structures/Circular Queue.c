#include <stdio.h>
#include <stdlib.h>

#define SIZE 5

void enQueue(int );
void deQueue();
void display();

int cQueue[SIZE] , front = -1  , rear = -1;

void main()
{
    int choice , value;
    //clrscr();
    do{
        printf("\n****** MENU ******\n");
        printf("1. Insert\n2. Delete\n3. Display\n4. Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);
        switch(choice){
            case 1: printf("\nEnter the value: ");
                    scanf("%d" , &value);
                    enQueue(value);
                    break;
            case 2: deQueue();
                    break;
            case 3: display();
                    break;
            case 4: exit(0);
            
            default: printf("\nPlease select the correct choice!!!\n");
        }
    }while(choice != 4);
}
void enQueue(int value){
    if((front == 0 && rear == SIZE-1) || (front == rear+1)){
        printf("The queue is FULL.");
    }
    else{
        if(rear == SIZE-1&& front !=0){
            rear = -1;
        }
        rear = rear+1;
        cQueue[rear] = value;
        printf("Insertion is success.");
        if (front == -1){
            front = 0;
        }
    }
}
void deQueue(){
    // to check whether the circular  queue is empty;
    if(front == -1 && rear == -1){
        printf("The circular queue is empty. ");
    }
    else{
        printf("The Deleted element is: %d" , cQueue[front]);
        front = front+1;
        if(front == SIZE){
            front = 0;
        }
        if(rear = front -1){// to check if the queue is empty
            front = -1;
            rear = -1;
        }
    }
}

void display(){
    // to check if the queue is empty;
    if(front == -1){
        printf("The circular Queue is empty.\n");
    }
    else{
        int i = front;
        printf("The Queue elements are: \n");
        if(front<= rear){
            while(i<=rear){
                printf("%d\t" , cQueue[i++]);
            }
        }
        else{
            while(i<= SIZE-1){
                printf("%d\t" , cQueue[i++] );
            }
            while(i<=rear){
                printf("%d\t" ,cQueue[i++]);
            }
        }
    }
}