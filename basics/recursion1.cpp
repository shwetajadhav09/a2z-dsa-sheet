#include<bits/stdc++.h>
using namespace std;
int cnt = 1;

void printNos(int x){

    if(cnt == x+1)
    return;
    else
    cout << cnt <<endl;
    cnt++;

    printNos(x);

}

int main(){
 int n;
 cin >> n;

 printNos(n);

 return 0;

}