/*In this problem, you have to write a program that takes an array arr[] of size N from the user and
rotates the array to the left (counter-clockwise direction) by D steps, where D is a positive integer.
For Example,
Input: arr[] = {1, 2, 3, 4, 5}, D = 2
Output: After rotation: 3 4 5 1 2 */

#include <stdio.h>
void main(){
    int n,d,f;
    scanf("%d",&n);
    int arr[n];
    for (int i=0;i<n;i++){
          scanf("%d",&arr[i]);
    }
    printf("enter d value");
    scanf("%d",&d);
    for (int i=0;i<n;i++){
        printf("%d ",arr[i]);
    }
    printf("\n");
    int temp[n];
    for (int i=0;i<n;i++){
        temp[i]=arr[(i+d)%n];
    }
    for (int i=0;i<n;i++){
        arr[i]=temp[i];
    }
    for (int i=0;i<n;i++){
        printf("%d ",arr[i]);
    }
}
