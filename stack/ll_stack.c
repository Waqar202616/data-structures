#include <stdio.h>

struct node 
{
    int data;
    struct node *next;
};

struct node *top = NULL;

int main()
{
    int ch,item;
    printf("1 for push 2 for pop 3 for view other for exit: ");
    scanf("%d",&ch);
    while (1)
    {
        if (ch == 1){
            printf("Enter the data to be pushed: ");
            scanf("%d",&item);
            push(item);
        }

        else if (ch == 2){
            item = pop();
            printf("poped item = %d\n",item);
        }

        else if (ch == 3)
            view();

        else
            break;
    }
    return 0;
}
void push(int item)
{
    
}