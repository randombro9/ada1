#include<stdio.h>
#include<time.h>
void main()
{
    int i,j,n,swap=0,pos;
    clock_t t;
    printf("no of elements \n");
    scanf("%d",&n);
    int a[n];
    printf("enter the elements :\n");
    for(int i=0;i<n;i++)
    scanf("%d",&a[i]);
    t=clock();
    for(int i=0;i<n;i++)
    {
        pos=i;
        for(int j=0;j<n;j++)
        {
            if(a[pos]<a[j])
            pos=j;
        }
        if(pos!=i)
        {
            swap=a[i];
            a[i]=a[pos];
            a[pos]=swap;
        }
    }
    t=clock()-t;
    printf("time: %lf\n",(double)t);
    printf("sorted array\n");
    for(int i=0;i<n;i++)
    {
        printf("%d",a[i]);
    }
    
    
}
