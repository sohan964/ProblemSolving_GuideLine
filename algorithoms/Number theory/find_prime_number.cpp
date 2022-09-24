#include<bits/stdc++.h>
using namespace std;

#define optimize() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
bool prime(int n){
 // int sq=sqrt(n);
  if(n<2) return false;//it's mean lessthan 2 not prime
  if(n<=3) return true;//2 and 3 is prime
  if(n%2==0) return false;//all the element not prime which are divisable by 2
  for(int i=3;i*i<=n;i+=2){//here will chack by all odd numbers n is prime or not
    if(n%i==0) return false;
    
  }
  return true;
}

int main(){
  optimize();
     
     int t; cin>>t;
     while(t--){
      int n; cin>>n;
      if(prime(n)) cout<<"yes"<<endl;
      else cout<<"no"<<endl;
     }


     return 0;

}
