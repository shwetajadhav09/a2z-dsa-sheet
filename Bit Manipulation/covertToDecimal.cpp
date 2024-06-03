#include<bits/stdc++.h>
using namespace std;

int main(){

    string s;
    cin >> s;

    int len = s.length();
    int p2 = 1;
    int num = 0;

    for(int i=len-1; i>=0; i--){

        if(s[i] == '1'){
        num = num + p2;
        }

        p2 = p2*2;
    }

    cout << num;

    return 0;
}