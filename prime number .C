#include <stdio.h>

int prime();

main ()
{
int a;
printf("please enter the number :");
scanf("%d",&a);
prime(a);

}

int prime (a)
{
    int count=0;
    for(int i=2;i<=a;i++)
    {
        if (a%i==0)
        {
        
            count=count+1;
        }
        
    }
    printf("%d",count);
    if (count==1)
    {
        printf("Entered  Number is Prime Number");
    }
    else 
    {
        printf("This is not Prime number");
    }
}


