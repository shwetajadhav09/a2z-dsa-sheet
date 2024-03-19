#include<bits/stdc++.h>
using namespace std;

bool isIsomorphic(string s, string t) {
        int n = s.length();
        int m = t.length();
        unordered_map<char, vector<int>> mp1;
        unordered_map<char, vector<int>> mp2;

        if(n != m ) return false;

        for(int i=0; i<n; i++){
            mp1[s[i]].push_back(i);
        }
         
        for(int i=0; i<m; i++){
            mp2[t[i]].push_back(i);
        }

        for(int i=0; i<n; i++){

            if(mp1[s[i]] != mp2[t[i]]) {
                return false;
            }
        }
        return true;

    }