#include <stdio.h>
void main(){
    int a,n1,n2,t;
    printf("no of fibonacci numbers");
    scanf("%d",&a);
    int arr[2*a+1];
    n1=0;
    n2=1;
    arr[0]=n1;
    arr[1]=n2;
    for (int i=2;i<2*a+1;i++){
         t=n1;
         n1=n2;
         n2=n1+t;
         arr[i]=n2;
    }
    int sum=0;
    for (int i=0;i<2*a+1;i=i+2){
         sum=sum+arr[i];
    }
    printf("%d",sum);
}
