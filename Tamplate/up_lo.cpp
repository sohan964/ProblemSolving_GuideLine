//  BISMILLAHIR RAHMANIR RAHIM //

//     Upper bound   //

//it will find Upper bound index of an target

#include<bits/stdc++.h>
using namespace std;
#define optimize() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
 
//int a[]={1,2,2,2,4,5,6,6};

int main(){
  optimize();
   
   int t; cin>>t;
   while(t--){
    int n,x; cin>>n>>x;
    vector<int> v(n);
    for(int i=0;i<n;i++) cin>>v[i];
    
    int lo = lower_bound(v.begin(),v.end(),x)-v.begin();
    int up = upper_bound(v.begin(),v.end(),x)-v.begin();

    if(lo==v.size()) cout<<"-1\n";
    else if(v[lo]!=x) cout<<"-1\n";
    else{
      cout<<lo<<" "<<up-1<<endl;
    }
   }
   
   return 0;
}
