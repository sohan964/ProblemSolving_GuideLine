#include<bits/stdc++.h>
using namespace std;

#define optimize() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
const int mx=1e6+123;
vector<int> divisors[mx];

int main(){
  optimize();
     //find divisors of 1 to n number using number theory
     int n; cin>>n;
     for(int i=1;i<=n;i++){
      for(int j=i;j<=n;j+=i){
        divisors[j].push_back( i );//if i is a divisor of j then i will add on j vector
        
      }
     }
     for(int i=1;i<=n;i++){
      cout<<"Divisors of "<<i<<" : ";
      for(auto u:divisors[i]){
        cout<<u<<" ";
      }
      cout<<endl;
     }

     return 0;

}
