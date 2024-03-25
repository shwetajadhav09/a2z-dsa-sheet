#include<bits/stdc++.h>
using namespace std;

int beautySum(string s) {
        int ans=0;
        for(int i=0; i<s.length(); i++){
            map<char, int> mpp;
            for(int j=i; j<s.length(); j++){
               mpp[s[j]]++;

               int max_freq=0, min_freq=INT_MAX;

               for(auto x: mpp){

                max_freq = max(max_freq, x.second);
                min_freq = min(min_freq, x.second);
               }

               ans+= (max_freq - min_freq);
            }
        }

        return ans;
    }