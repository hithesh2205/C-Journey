#include <stdio.h>
void main(){
    int a,b,n,c,pos,d;
    printf("enter number of elements");
    scanf("%d",&n);
    int arr[n+1];
    for (int i=0;i<n;i++){
            printf("enter the element");
             scanf("%d",&arr[i]);
    }
    printf("enter the position in which u want to delete the element");
    scanf("%d",&pos);
    for (int i=pos;i<=n;i++){
        arr[i]=arr[i+1];
    }
    for (int i=0;i<n-1;i++){
        printf("%d\n",arr[i]);
    }
   }

