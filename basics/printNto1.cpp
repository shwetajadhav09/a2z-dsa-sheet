#include<bits/stdc++.h>
using namespace std;

void print(int i, int n){

    if(i>n)
    return;
    
    print(i+1, n);
    cout<< i;

}

int main(){

    int a;
    cin>>a;
    print(1,a);
}