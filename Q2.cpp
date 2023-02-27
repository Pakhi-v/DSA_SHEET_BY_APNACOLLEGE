//reverse the array
#include<iostream>
using namespace std;

void reversearray(int arr[], int start, int end){
    if(start >= end)
    return;

    int temp = arr[start];
    arr[start] = arr[end];
    arr[end] = temp;

    reversearray(arr, start + 1 , end - 1);

}