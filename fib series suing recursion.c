#include <stdio.h>
void fib(int n1,int n2,int n,int c,int a);
void main(){
    int n1,n2,n,c=0,a;
    scanf("%d",&n);
    n1=0;
    n2=1;
    printf("%d ",n1);
    printf("%d ",n2);
    fib(n1,n2,n,c,a);

}
void fib(int n1,int n2,int n,int c,int a){
    if (c<n){
         a=n1;
         n1=n2;
         n2=a+n2;
         c=c+1;
         printf("%d ",n2);
         fib(n1,n2,n,c,a);
    }
}
