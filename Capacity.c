#include<stdio.h>
int main()
{
    int s,t,b,c;
    scanf("%d%d%d",&s,&t,&b);
    c=(2*t*b*s*512)/1024;
    printf("%d KB",c);
}