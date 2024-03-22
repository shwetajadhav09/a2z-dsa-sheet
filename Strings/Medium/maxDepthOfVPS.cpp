#include<bits/stdc++.h>
using namespace std;

int maxDepth(string s) {
        int depth = 0, count=0;

        for(int i=0; i<s.length(); i++){

            if(s[i] == '(') count++;
            else if(s[i] == ')')count--;

            depth = max(depth, count);
        }

        return depth;
    }