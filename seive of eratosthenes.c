//sieve of eratosthenes
#include <stdio.h>
//code is wrong

void main(){
    int a,b,c;
    scanf("%d",&a);
    b=0;
    int br[a];
    for (int i=2;i<=a;i++){
         for (int j=2;j<=a;j++){
             if ((j%i)!=0){
                br[b]=j;
                b=b+1;
             }
         }
         }
    int len=sizeof(br)/sizeof(br[0]);
    for (int i=0;i<len;i++){
        printf("%d",br[i]);
    }
}
