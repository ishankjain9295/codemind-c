#include<stdio.h>
int main()
{
    int n,i,x[20],odd=0;
    scanf("%d",&n);
    for(i=0;i<n;i++)
    scanf("%d",&x[i]);
    for(i=0;i<n;i++)
    {
        if(x[i]%2!=0)
        odd++;
    }
    if(odd<=2)
    printf("YES");
    else
    printf("NO");
}