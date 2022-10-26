//  BISMILLAHIR RAHMANIR RAHIM //

//     Lower bound   //

//it will find lower bound index of an target

#include<bits/stdc++.h>
using namespace std;
#define optimize() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);

int a[]={1,2,2,2,4,5,6};

int main(){
  optimize();
   
   int l=0,r=6,tar=3;
   int ans=7;

   while(l<=r){
       int mid = (l+r)/2;

       if(a[mid]>=tar){

        ans=min( ans,mid );
        r = mid-1;

       }
       else l = mid+1;
   }
  cout<<ans<<endl;
}
