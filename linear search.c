#include <stdio.h>
void main(){
    int a,b;
    scanf("%d",&a);
    printf("enter the element to search ");
    scanf("%d",&b);
    int arr[a];
    for (int i=0;i<a;i++){
       scanf("%d",&arr[i]);
    }
    for (int i=0;i<a;i++){
       printf("%d ",arr[i]);
    }
    printf("\n");
    for (int i=0;i<a;i++){
         if (b == arr[i]){
             printf("%d\n",i);
             printf("element found");
             break;
         }
    }
}

