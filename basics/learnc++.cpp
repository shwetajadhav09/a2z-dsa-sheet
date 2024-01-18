#include<iostream>
using namespace std;

int printNum(int num1, int num2){
   int num3 = num1 + num2;
   return num3;
}

int main(){
    int x;
    int y;
    cin>> x >> y;

    printNum(x, y);
    

    return 0;
}