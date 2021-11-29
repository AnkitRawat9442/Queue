
// _________________________   A N K I T   R A W A T __________________________________//

#include<stdio.h>
#define N 50

int Queue[N];
int front=-1 ,rear=-1;



void enquefront()
{
    if(front == 0)
        printf("cannot enque in Front \n");
    else if (front == -1 && rear == -1)
    {
        front = rear = 0;
        printf("Enter the data ");
        scanf("%d", &Queue[front]);
    }
    else
    {
        front--;
        printf("Enter the data ");
        scanf("%d", &Queue[front]);
    }

}



void dequefront()
{
    if (front == -1 && rear == -1 || front > rear)
        printf("Cannot dequeue from Front\n");
    else if (front == rear )
        front = rear = -1;
    else
    {
        front++;
    }
}
void enquerear()
{
    if (rear == N - 1)
        printf("Queue is Full");
    else if (front == -1 && rear == -1)
    {
        front = rear = 0;
        printf("Enter the data ");
        scanf("%d", &Queue[rear]);
    }
    else
    {
        rear++;
        printf("Enter the data ");
        scanf("%d", &Queue[rear]);
    }
}

void dequerear()
{   
    if (front == -1 && rear == -1)
        printf("Cannot dequeue from rear\n");
    else if (front == rear)
        front = rear = -1;
    else
    {
        rear--;
    }
}

void display()
{
    if (front == -1 && rear == -1 || front > rear)
        printf("Queue is empty \n");
    else
    {
        printf("Queue : ");
        for (int i = front; i <= rear; i++)
        {
            printf("%d ", Queue[i]);
        }
        printf("\n");
    }
}

int main()
{  printf("\n____Ankit Rawat _____ 20011670 ______Section G\n");
   printf("1-Enque from Front \n2-Deque from Front \n3-Enque from Rear \n4-Deque from Rear \n5-display \n0-EXIT\n");
    int choice = 1;
    printf("Enter the choice: ");
        scanf("%d", &choice);
   while (choice)
    {   switch (choice)
        {
        case 1:
            enquefront();
            break;
        case 2:
            dequefront();
            break;
        case 3:
            enquerear();
            break;
        case 4:
            dequerear();
            break;
        case 5:
            display();
            break;
        case 0: 
            return 0;
        }
        printf("Enter the choice: ");
        scanf("%d", &choice);
    } 
}