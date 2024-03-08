#include<bits/stdc++.h>
using namespace std;

bool canWePlace(vector<int> &stalls, int distance, int k){
    int cowsCount = 1, last = stalls[0];
    int n = stalls.size();
    for(int i =1; i< n; i++){

        if(stalls[i] - last >= distance ){
            cowsCount++;
            last = stalls[i];
        }
        if(cowsCount >= k) return true;
    }
    return false;

    
}

int aggressiveCows(vector<int> &stalls, int k)
{
    sort(stalls.begin(), stalls.end());
    int n = stalls.size();
     int low = 1, high = stalls[n-1] - stalls[0];
     

     while(low<=high){
        int mid = (low+high)/2;
         if(canWePlace(stalls, mid, k) == true){
             low = mid+1;
         }
         else high = mid-1;
     }

     return high;

     
     
     }

