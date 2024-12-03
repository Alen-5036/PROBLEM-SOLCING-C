#include<Stdio.h>
int binsrc(int x[],int low,int high,int key)
{
int mid;
while(low<=high)
{
mid=(low+high)/2;
if(x[mid]==key){
return mid;
elseif(x[mid]<key)
low=mid+1;
else
high=mid-1;
}
return -1;
}
int main()
{
int a[20],key,i,n,succ;
printf("Enter the n value upto max of 20");
scanf("%d",&n);
if(n>0){
printf("Enter the elements in ascending order\n");
for(i=0;i<n;i++)
scanf("%d",&a[i]);
printf("Enter the key elements to be searched");
scanf("%d",&key);
succ=binsrc(a,0,n-1,key);
if(succ>0)
printf("Element found in position=%d\n",succ+1);
else
printf("Element not Found\n");
}
else
printf("No of elements should be greater that zero\n");
return 0;
}