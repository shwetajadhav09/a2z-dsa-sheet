#include<bits/stdc++.h>
using namespace std;

//search element in a rotated sorted array and return its index no

int search(vector<int>& arr, int n, int k)
{
    int low=0, high=n-1;
    
    while(low<=high){

        int mid=(low+high)/2;

        if(arr[mid]== k)return mid;
        
        //left sorted
        if(arr[low]<=arr[mid]){

            if(arr[low] <= k && arr[mid]>=k){
                high=mid-1;
            }
            else low =mid+1;

        }

        else {
            if(arr[mid]<=k && arr[high]>=k){
                low = mid+1;
            }
            else{
                high = mid-1;
            }
        }

        
    }

    return -1;
}
