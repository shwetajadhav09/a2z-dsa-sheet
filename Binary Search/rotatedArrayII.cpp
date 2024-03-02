#include<bits/stdc++.h>
using namespace std;

//array with duplicates

bool searchInARotatedSortedArrayII(vector<int> &A, int key) {
    int n = A.size();
    int low=0, high=n-1;
    
    while(low<=high){

        int mid=(low+high)/2;

        if(A[mid]== key)return true;
        if(A[mid] == A[low] && A[mid] == A[high]){
            low= low+1;
            high =  high -1;
            continue;
        }
        //left sorted
        if(A[low]<=A[mid]){

            if(A[low] <= key && A[mid]>=key){
                high=mid-1;
            }
            else low =mid+1;

        }

        else {
            if(A[mid]<=key && A[high]>=key){
                low = mid+1;
            }
            else{
                high = mid-1;
            }
        }

        
    }

    return false;
}

