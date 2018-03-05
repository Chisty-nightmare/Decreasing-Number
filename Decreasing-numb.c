#include<stdio.h>
int main()
{
    int n,a[10],i,j,c;
    printf("Enter Number: ");
    scanf("%d",&n);
    for(i=n,j=0;i>0;i/=10,j++)
        a[j]=i%10;
        c=j-1;
    for(i=0;i<c;i++)
    {
        if(!(a[i]<a[i+1]))
        {


            printf("Not a decreasing number");
            return 0;
            }

    }
  printf("decreasing number");
  return 0;


}
