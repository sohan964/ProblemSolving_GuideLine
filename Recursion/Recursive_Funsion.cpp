//  BISMILLAHIR RAHMANIR RAHIM //
 
#include<bits/stdc++.h>
using namespace std;
 
typedef long long ll;
 
#define optimize() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define endl  '\n'
#define TC() int t; cin>>t; while(t--){ solve(); }
 
 //Recursive function
 int f(int n){
        if(n == 0 ) return 1;
        return n* f(n-1); //back Tracking
 }
 
void solve(){
    
    cout<<f(5)<<endl;
   
}
 
int main(){
  optimize();
 
   //TC();
   solve();
  
 
   return 0;
}
