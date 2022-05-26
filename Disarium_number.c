#include<stdio.h>
#include<math.h>
int main()
{
    int a,b,n,r,r1,count=0,sum=0,sq;
    scanf("%d",&n);
    a=n;
    while(n>0)
    {
        r=n%10;
        count++;
        n=n/10;
    }
    b=a;
    while(a>0)
    {
        r1=a%10;
        sq=pow(r1,count);
        sum+=sq;
        count--;
        a=a/10;
        
    }
    if(b==sum)
    {
        printf("True");
    }
    else
    {
        printf("False");
    }
}