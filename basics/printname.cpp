#include<bits/stdc++.h>
using namespace std;

void printName(int i, int n){

    if(i>n)
    return;
    else
    cout<< "Shweta"<<endl;
    printName(i+1, n);
}

int main(){

    int a;
    cin>>a;
    printName(1,a);
}