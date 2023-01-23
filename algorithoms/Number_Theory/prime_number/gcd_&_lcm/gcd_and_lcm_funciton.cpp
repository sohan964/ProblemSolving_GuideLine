//  BISMILLAHIR RAHMANIR RAHIM //

#include<bits/stdc++.h>
using namespace std;

#define optimize() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define endl '\n'

int main(){
 
  optimize();
  //find gcd and lcm
    int a,b; cin>>a>>b;
  cout<<__gcd(a,b)<<endl;
  cout<<a*(b/__gcd(a,b));
   return 0;
}
