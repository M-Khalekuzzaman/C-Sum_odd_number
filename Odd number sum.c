#include<stdio.h>
int main()
{
    int n,i;
    printf("Enter your nth odd number is :");
    scanf("%d",&n);
    int sum = 0;
    printf("The odd number are : ");
    for(i=1;i<=n;i++)
    {

               if(i%2!=0){
                printf("%d ",i);
                    sum = sum + i;
               }

    }
printf("\nTotal sum is :%d\n",sum);
         getch();
}
