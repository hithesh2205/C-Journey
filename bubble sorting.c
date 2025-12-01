#include <stdio.h>
void main(){
    int a,temp;
    scanf("%d",&a);
    int arr[a];
    for (int i=0;i<a;i++){
       scanf("%d",&arr[i]);
    }
    for (int i=0;i<a;i++){
       printf("%d ",arr[i]);
    }
    printf("\n");
    for (int i=0;i<a;i++){
        for (int j=0;j<a-i-1;j++){
            if (arr[j]>arr[j+1]){
               temp=arr[j];
               arr[j]=arr[j+1];
               arr[j+1]=temp;
            }
        }
    }
    for (int i=0;i<a;i++){
       printf("%d ",arr[i]);
    }
}
