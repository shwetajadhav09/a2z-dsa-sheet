#include<bits/stdc++.h>
using namespace std;

int countStudents(vector<int> &arr, int pages){
    int n = arr.size();
    int student =1;
    long long pagesStudent = 0;
    for(int i=0;i<n; i++){
        if(pagesStudent + arr[i] <= pages){
            pagesStudent+= arr[i];
        }
        else{
            student++;
            pagesStudent = arr[i];
        }

    }
    return student;
}


int findPages(vector<int>& arr, int n, int m) {
     
    int low = *max_element(arr.begin(), arr.end());
    int high = accumulate(arr.begin(), arr.end(), 0);
    if(m>n) return -1;
    while(low<=high){

        int mid = (low+high)/2;
        int cntStudents = countStudents(arr, mid);
        if(cntStudents > m){
              low = mid+1;
        } else {
              high = mid-1;
        }
    }

    return low;
}

int largestSubarraySumMinimized(vector<int> a, int k) {
   

    return findPages(a, a.size(), k);
}