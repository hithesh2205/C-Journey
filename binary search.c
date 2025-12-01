#include <stdio.h>
void main(){
   int low,mid,high,n,a,b,index=-1;
   printf("enter the number of elements");
   scanf("%d",&n);
   int arr[n];
   printf("enter the elements in ascending order\n");
   for (int i=0;i<n;i++){
       printf("enter the element");
       scanf("%d",&arr[i]);
   }
   printf("enter the element to be searched");
   scanf("%d",&a);
   low=0;
   high=n-1;
   while (low<=high){
      mid=(low+high)/2;
      if (arr[mid]==a){
          printf("element found at %d index",mid);
          index=0;
          break;
          }
      else if (arr[mid]<a){
             low=mid+1;
      }
      else if (arr[mid]>a){
            high=mid-1;
      }
   }
   if (index==-1){
      printf("element not found");
   }
}
