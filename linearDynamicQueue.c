
// _________________________   A N K I T   R A W A T __________________________________//

#include <stdio.h>
#include <stdlib.h>



int *enque(int *rear, int *front, int *Queue)
{

    if (Queue == NULL)
    {
        *front = 0;
        Queue = (int *)calloc(1, sizeof(int));
    }
    else
    {
        Queue = (int *)realloc(Queue, 1 * sizeof(int));
    }
    (*rear)++;
    printf("Enter the Data: ");
    scanf("%d", &Queue[(*rear)]);

    return Queue;
}




void deque(int *front, int *rear, int *Queue)
{
    if (Queue == NULL || (*front) > (*rear))
        printf("Queue is Empty\n");
    else
    {
        (*front)++;
    }
}



void display(int front, int rear, int *Queue)
{
    if (front == -1 && rear == -1 || front > rear )
        printf("Queue is empty\n");
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
{
    int front = -1, rear = -1 ,  choice = 1;
    int *Queue = NULL;
    printf("\n____Ankit Rawat _____ 20011670 ______Section G\n");
    printf("1-Enque  2-Deque  3- DISPLAY 0-EXIT\n");
    printf("Enter the choice :  ");
    scanf("%d", &choice);
    while (choice)
    {   switch (choice)
        {
        case 1:
            Queue = enque(&rear, &front, Queue);
            break;
        case 2:
            deque(&front, &rear, Queue);
            break;
        case 3:
            display(front, rear, Queue);
            break;
        case 0:
            return 0;
        default:
            printf("Invalid choice \n");
        }
        printf("Enter the choice : ");
        scanf("%d", &choice);
    }
    return 0;
}


