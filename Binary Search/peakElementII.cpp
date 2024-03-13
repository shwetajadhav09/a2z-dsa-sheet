#include<bits/stdc++.h>
using namespace std;

int maxElement(vector<vector<int>> &g, int n, int m, int col){

    int maxValue = -1;
    int ind = -1;

    for(int i=0; i<n;i++){
        if(g[i][col] > maxValue){
            maxValue = g[i][col];
            ind = i;
        }
    }

    return ind;
}


vector<int> findPeakGrid(vector<vector<int>> &g){
    int n= g.size();
    int m = g[0].size();

    int low = 0, high =m-1;

    while(low <=high){

        int mid = (low+high)/2;

        int row = maxElement(g, n, m, mid);

        int left = mid - 1 > 0 ? g[row][mid-1] : -1;
        int right = mid+1 < m ? g[row][mid+1] : -1;

        if(g[row][mid] > left && g[row][mid] > right){
            return {row, mid};
        }
        else if(g[row][mid] < left) high = mid-1;

        else low = mid+1;
    }    

    return {-1,-1};
}