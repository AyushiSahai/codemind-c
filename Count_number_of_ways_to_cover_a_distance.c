#include<stdio.h>
int fun(int n)
{
    if (n<0)
    return 0;
    else if (n==0)
    return 1;
    else
    {
        return (fun(n-1)+fun(n-2)+fun(n-3));
    }
}
int main()
{
    int n,res;
    scanf("%d",&n);
    res=fun(n);
    printf("%d",res);
}