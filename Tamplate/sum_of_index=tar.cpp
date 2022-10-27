//  BISMILLAHIR RAHMANIR RAHIM //

//     Upper bound   //

//it will find Upper bound index of an target

#include<bits/stdc++.h>
using namespace std;
#define optimize() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
 
//int a[]={1,2,2,2,4,5,6,6};
#define endl '\n'
int main(){
  optimize();
   
   int n,tar; cin>>n>>tar;
   vector<int> v(n);
   for(int i=0;i<v.size();i++) cin>>v[i];

   for(int i=0;i<v.size();i++){
    int d=tar-v[i];
    int lo = lower_bound(v.begin(),v.end()+i-1,d) - v.begin();
    if(lo < v.size() && v[lo]==d){
      cout<<lo+1<<" "<<i+1<<endl;
      break;
    }
    else cout<<-1<<" "<<-1<<endl;
   }
   
   
   return 0;
}
