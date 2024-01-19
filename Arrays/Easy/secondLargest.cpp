#include<bits/stdc++.h>
using namespace std;

int secondLargest(vector<int> &a, int n){

    int largest = a[0];
    int sLargest = -1;

    for(int i=0; i< n; i++){
        if(a[i] > largest){
            sLargest = largest;
            largest = a[i];
        }
        else if(a[i] < largest && a[i] > sLargest){
            sLargest= a[i];
        }
    }
    return sLargest;
}

int secondSmallest(vector<int> &a, int n){

    int smallest = a[0];
    int sSmallest = INT_MAX;

    for(int i=0; i<n; i++){
        
        if(a[i] < smallest){
            sSmallest = smallest;
            smallest = a[i];
        }
        else if(a[i]!= smallest && a[i] < sSmallest){
            sSmallest = a[i];
        }
    }
    return sSmallest;
}



vector<int> getSecondOrderElements(int n, vector<int> a) {
    // Write your code here.

   int sL = secondLargest(a, n);
   int sS = secondSmallest(a, n);
    return{sL, sS};
}


//optimal sol to find the second largest and second smallest element in an array.