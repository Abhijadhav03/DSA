#include<bits/stdc++.h>
using namespace std;

void print1(int n){
   int start =1;
   for(i=0;i<n;i++){
    if( i% 2 ==0) start=1;
    else start = 0;
    for (j=0;j<i;j++){
        cout<< start <<" ";
    }
   }
       
}
int main() {
   int n;
   cin>>n;
   print1(n);
}