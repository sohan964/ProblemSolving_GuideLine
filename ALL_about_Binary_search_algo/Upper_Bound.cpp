//  BISMILLAHIR RAHMANIR RAHIM //

//     Upper bound   //

//it will find Upper bound index of an target

#include<bits/stdc++.h>
using namespace std;
#define optimize() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
 
int a[]={1,2,2,2,4,5,6,6};

int main(){
  optimize();
   
   int l=0,r=7,tar=3;
   int ans=8;

   while(l<=r){
       int mid = (l+r)/2;

       if(a[mid]<=tar){
        
        l = mid+1;

       }
       else{
          ans=min( ans,mid );
          r = mid-1;
       }
   }
  cout<<ans<<endl;
}
