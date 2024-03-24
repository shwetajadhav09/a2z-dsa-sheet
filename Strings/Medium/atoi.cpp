#include<bits/stdc++.h>
using namespace std;

int myAtoi(string s) {
        
        int i=0;
        while(i < s.length() && s[i] == ' ') i++;

        int sign =1;
        if(s[i] == '+'){
            sign = +1;
            i++;
        }else if(s[i] == '-'){
            sign =-1;
            i++;
        }

        if(i >= s.length()) return 0;

        long result =0;

        while(i<s.length()){
            if(s[i] >='0' && s[i] <='9'){
                result = result*10 + (s[i] -'0');

                if(result > INT_MAX && sign == -1) 
                    return INT_MIN;
                else if(result > INT_MAX && sign == 1) 
                    return INT_MAX;
                i++;

            }

            else return result*sign;
        }

        return result*sign;
    }