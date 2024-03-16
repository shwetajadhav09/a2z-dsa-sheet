#include<bits/stdc++.h>
using namespace std;

string largestOddNumber(string num) {
         
         int end = num.length() - 1;

         while(end>=0 && (num[end] - '0') % 2 == 0){
            end--;
         }

         return num.substr(0, end + 1);
    }