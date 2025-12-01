#include <stdio.h>
int main() {
    int arr[]={22,32,35,41,52,67,78,93};
    int ele=40;
    int low=0;
    int high=(sizeof(arr)/sizeof(arr[0]))-1;
    while (low<=high){
        int mid=(low+high)/2;
        if(arr[mid]>ele)
        high=mid-1;
        if(arr[mid]<ele)
        low=mid+1;
        if(arr[mid]==ele){
        printf("Element found at %d position",mid+1);
        break;}
        printf("Not  found");
    }}

