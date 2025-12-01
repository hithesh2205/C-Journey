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
    printf("enter the position in which u want to insert the element");
    scanf("%d",&pos);
    printf("enter the element to be added");
    scanf("%d",&d);
    for (int i=n-1;i>=pos;i--){
        arr[i+1]=arr[i];
    }
    arr[pos]=d;

    for (int i=0;i<=n;i++){
        printf("%d",arr[i]);
    }
}
