#include<bits/stdc++.h>
using namespace std;

#define optimize() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);

int main(){
  optimize();
     //find divisors off a spacefic number using number theory
     int n; cin>>n;
     vector<int> divisors;
     int sq = sqrt(n);//if n=10 then sq will be 3
     //it will short the loop .. here will take less time
     for( int i=1;i<=sq;i++){ //the loop will run until i==sq
        if(n%i==0){
          divisors.push_back( i );//here will insert i because i will be divisor
          if(n/i!=i) divisors.push_back( n/i ); //the ans of division(n/i) also divisor. that why we insert on divisors.

        }
     }
     sort(divisors.begin(),divisors.end());
     for(auto u:divisors){
      cout<<u<<" ";
     }
     return 0;

}
