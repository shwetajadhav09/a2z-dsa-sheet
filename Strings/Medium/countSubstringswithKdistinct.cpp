#include<bits/stdc++.h>
using namespace std;

long long int substrCountwithAtleastPDistinct (string s, int n, int p){
       
       int i, j, c[26], f =0;
       
       long long count = 0;
       
       for(int i=0; i<26; i++){
           c[i] = 0;
       }
       
       i = j =0;
       
       for(i=0;i<n;i++){
           
           while(j<n && f<p){
               c[s[j] - 97]++;
               
               if(c[s[j] - 97] == 1){
                   f++;
               }
               
               j++;
           }
           
           if(f>=p){
               count = count +n -j+1;
           }
           
           c[s[i] - 97]--;
           
           if(c[s[i] - 97] == 0){
               f--;
           }
       }
       
       return count;
   } 
  
    long long int substrCount (string s, int k) {
    	//code here.
    	
    	int n = s.length();
    	int ans;
    	
    	ans = substrCountwithAtleastPDistinct (s, n, k) - substrCountwithAtleastPDistinct (s, n, k+1);
    	
    	return ans;
    }