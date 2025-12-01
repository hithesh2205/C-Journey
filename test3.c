#include <stdio.h>
void main(){
int n;
scanf("%d",&n);
int r[n];
for (int i=0;i<n;i++){
   scanf("%d",&r[i]);
}
for (int i=0;i<n;i++){
   printf("%d",r[i]);
}
}
