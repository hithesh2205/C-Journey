// q to print hello a number of times
#include <stdio.h>
void main(){
    int a;
    scanf("%d",&a);
    hello(5);
}
int hello(int a){
    if (a==0){
        return 0;
    }
    printf("hello\n");
    hello(a-1);
}
