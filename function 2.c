#include <stdio.h>
int sum(int a,int b);
void main(){
    int a,b;
    scanf("%d",&a);
    scanf("%d",&b);
    printf("%d",sum(a,b));

}
int sum(int a,int b){
    int c;
    c=a+b;
    return c;
}
