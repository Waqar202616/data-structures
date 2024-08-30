#include<stdio.h>

int main()
{
    int a;
    printf("Enter the number: ");
    scanf("%d",&a);
    for (int i = 2; i<a; i++)
    {
        if (a%i==0)
        {
            printf("not a prime number");
            return 0;
        }
    }
    printf("prime number");
}