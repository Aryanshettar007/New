#include<stdio.h>
int main()
{
  int a[10],i,n,low,high,mid,key,flag=0;
  printf("enter the number of elemnts \n");
  scanf("%d",&n);
  printf("Enter array elements \n");
  for(i=0;i<n;i++)
    scanf("%d",&a[i]);
  printf("Enter the key element to be searched \n");
scanf("%d",&key);
low=0;
high=n-1;
while(low<=high)
  {
    mid=(low+high)/2;
    if(key==a[mid])
    {
      flag=1;
      break;
    }
    else if (key < a[mid])
      high=mid-1;
    else low=mid+1;
  }
  if (flag)
    printf("Element found %dposition",mid+1);
else
    printf("Elements not found\n");
return 0;
}
