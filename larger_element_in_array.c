#include<stdio.h>
int main()
{
    int max = 0;
    int num[10] = {1,2,3,4,4,5,8,10,45,0};
    for (int i = 0; i<10; i++)
    {
        if(num[i]>max)
            max = num[i];
    }
    printf("%d",max);
}