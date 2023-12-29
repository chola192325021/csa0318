  #include <stdio.h>
#define MAX 30
void insert_queue();
void delete_queue();
void display_queue();
int queue_array[MAX];
int rear = - 1;
int front = - 1;
int main()
{
    int choice;
    while (1)
    {
        printf("Enter 1 to insert element to queue \n");
        printf("Enter 2 to delete element from queue \n");
        printf("Enter 3 to display all elements of queue \n");
        printf("Enter your choice : ");
        scanf("%d", &choice);
        switch (choice)
        {
            case 1:
            insert_queue();
            break;
            case 2:
            delete_queue();
            break;
            case 3:
            display_queue();
            break;
            default:
            printf("Invalid input \n");
        } 
    } 
} 
void insert_queue()
{
    int add_item;
    if (rear > MAX - 1)
    printf("QUEUE OVERFLOW \n");
    else
    {
        printf("Enter value to inset in queue : ");
        scanf("%d", &add_item);
        rear = rear + 1;
        queue_array[rear] = add_item;
    }
} 
void delete_queue()
{
    if (front < -1)
    {
        printf("QUEUE UNDERFLOW \n");
        return ;
    }
    else
    {
        printf("Element deleted from queue : %d\n", queue_array[front]);
        front = front + 1;
    }
} 
void display_queue()
{
    int i;
    if (front == rear)
        printf("EMPTY QUEUE \n");
    else
    {
        printf("Displaying Queue : \n");
        for (i = front; i <= rear; i++)
            printf("%d ", queue_array[i]);
        printf("\n");
    }
}
