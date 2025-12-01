//pivot index
#include <stdio.h>
void main(){
    int n,lsum,rsum,index=-1;;
    printf("enter no of elements in the array");
    scanf("%d",&n);
    int arr[n];
    for (int i=0;i<n;i++){
          scanf("%d",&arr[i]);
    }
    for (int i=0;i<n;i++){
        lsum=0;
        rsum=0;
        for (int j=0;j<i;j++){
             rsum=rsum+arr[j];
        }
        for (int k=i+1;k<n;k++){
             lsum=lsum+arr[k];
        }
        if (lsum==rsum){
            printf("Pivot element is %d\n",i);
            index=1;
            break;
        }
    }
    if (index==-1){
        printf("no pivot element");
    }
}
