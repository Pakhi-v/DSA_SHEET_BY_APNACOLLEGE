//Chocolate Distribution Problem
//m = no of students
//n = no of packets of chocolate in arr of size n
#include<iostream>
using namespace std;

int findmindiff(int arr[], int n , int m){
    if( m == 0 || n == 0)
    return 0;

    sort(arr, arr+n);

    if(n < m)
    return -1;

    int min_diff = int_max;
    for(int i = 0 ; i + m - 1 < n ; i++){
        int diff = arr[i+m -1] - arr[i];
         if (diff < min_diff)
            min_diff = diff;
    }
    return min_diff;
}