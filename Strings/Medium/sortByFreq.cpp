#include<bits/stdc++.h>
using namespace std;

bool  static cmp(pair<char, int>& a,pair<char, int>& b)
    {
       return a.second > b.second;
       }
    string frequencySort(string s) {
        unordered_map<char, int> freqMap;
   
    // Count the frequency of each character
    for (int i=0; i<s.length(); i++) {
        freqMap[s[i]]++;
        
    }
    
    vector<pair<char,int>> v;

    for(auto c: freqMap){
        v.push_back({c.first, c.second});
    }

    sort(v.begin(), v.end(), cmp);

    string ans;
    for(auto x:v){
        for(int i=0; i<x.second; i++){
            ans+= x.first;
        }
    }

    return ans;
    
    }