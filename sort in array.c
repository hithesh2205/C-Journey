#include<stdio.h>
int main(){
    int scores[8];
    int i,j;
    for(i=0;i<8;i++){
        printf("Enter score by judge %d:- ",i+1);
        scanf("%d",&scores[i]);
    }
    for (i=0;i<8;i++){
        for (j=i+1;j<8;j++){
            if (scores[i]>=scores[j]){
                int temp;
                temp=scores[i];
                scores[i]=scores[j];
                scores[j]=temp;
            }
        }
    }
    printf("Scores in ascending order \n");
    for (i=0;i<8;i++)
    printf("%d ",scores[i]);


}
