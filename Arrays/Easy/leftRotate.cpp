 #include<bits/stdc++.h>
 using namespace std;
 
 
 void leftRotate(int arr[], int n, int d){

        if(n==0) return;

        vector<int> temp;
        d = d%n;
        
        for(int i = 0; i<d; i++){
            temp.push_back(arr[i]);
        }
        
        for(int i= d; i<n; i++){
            arr[i-d] = arr[i];
        }
        
        for(int i = n-d; i<n; i++){
            arr[i] = temp[i-(n-d)];
        }
 }

 int main(){
    int n = 7;
  int arr[] = {1, 2, 3, 4, 5, 6, 7};
  int k = 2;
  leftRotate(arr, n, k);
  cout << "After Rotating the elements to left " << endl;
  for (int i = 0; i < n; i++)
  {
    cout << arr[i] << " ";
  }
  return 0;
 }