//  BISMILLAHIR RAHMANIR RAHIM //
 
#include<bits/stdc++.h>
using namespace std;
 
typedef long long ll;
 
#define optimize() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define endl  '\n'
#define TC() int t; cin>>t; while(t--){ solve(); }
 // previusly calculate fibo will store each index of the array.
 int dp[1000];

 //Recursive function for fibonacci
 int f(int n){
        if( n==0 ) return 0;
        if( n==1 ) return 1;
        if( dp[n] != -1 ) return dp[n]; //it will return already calculate value

        return dp[n] = ( f(n-1) + f(n-2) ); // back traking
 }
 
void solve(){
    
    for( int i=0; i<1000; i++ ) dp[i]=-1;
    cout<<f(7)<<endl;
   
}
 
int main(){
  optimize();
 
   //TC();
   solve();
  
 
   return 0;
}
