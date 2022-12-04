#include <stdio.h>
int main()
{
 int num,rem,fact=1,sum=0;
 printf("Enter a number: ");
 scanf("%d",&num);
 int copy=num;
 if(num==0)
 sum=sum+fact;
 else
{
 while(copy!=0)
 {
 rem=copy%10;
 fact=1;
 for(int i=1;i<=rem;i++)
 {
 fact=fact*i;
 }
 sum=sum+fact;
 copy=copy/10;
 }}
 if(sum==num)
 printf("Strong number");
 else
 printf("Not a strong number");
 return 0;
}
