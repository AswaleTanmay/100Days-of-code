#include <stdio.h>
int main()
{
int n, j;
printf("Enter the size of array\n");
scanf("%d",&n);
int arr[n];
printf("Enter the elements of array\n");
int odd = 0, even = 0;
for(j = 0; j < n; j++)
{
scanf("%d",&arr[j]);
}
for(j = 0; j < n; j++)
{
if(arr[j] % 2 == 1)
odd++;
if(arr[j] % 2 == 0)
even++;
}
if(odd == n)
printf("Odd type array elements");
else if(even == n)
printf("Even type array elements");
else
printf("Mixed type array elements");
return 0;
}
