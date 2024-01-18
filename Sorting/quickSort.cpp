#include <bits/stdc++.h>
using namespace std;
 
 int partition(vector<int> &arr, int low, int high){
     
     int pivot = arr[low];
     int i = low;
     int j = high;

     while(i<j){

        while(arr[i] <= pivot && i<=high-1){
          i++;
        }

        while(arr[j] > pivot && j>=low+1){
            j--;
        }

        if(i<j) swap(arr[i], arr[j]);
     }

     swap(arr[low], arr[j]);
     return j;

}

void quickSort(vector<int> &arr, int low, int high){

    if(low<high){
        int pIndex = partition(arr, low, high);
        quickSort(arr, low, pIndex-1);
        quickSort(arr, pIndex+1, high);
    }
}







int main(){

   vector<int> arr = {4, 6, 2, 5, 7, 9, 1, 3};
   int n = arr.size();

   cout<< "Before using quick sort : " <<endl;

   for(int i=0; i<n; i++) {
    cout<< arr[i] << " ";
   }
    cout<< endl;
   cout<< "After using quick Sort : " <<endl;

   quickSort(arr, 0, n-1);

   for(int i =0; i<n; i++){
    cout<< arr[i] << " ";
   }

    return 0;
}

//time complexity is O(NlogN) -> best, worst and average