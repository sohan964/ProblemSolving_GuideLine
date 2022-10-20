#include<bits/stdc++.h>
using namespace std;
#define optimize() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
int arr[]={1,2,5,6,8,9,10,12};
int main(){
  optimize();
  
  int n=8;
  int tearget=10;//we will find 10 from the array
  int lb=0,ub=n-1;
  bool done = 0;
  while(lb<=ub){
    int mid=(lb+ub)/2;
    
    if(arr[mid] == tearget ){
      cout<< mid <<endl;
      done=1;//it for 10 is found or not
      //return 0; // it will exitqut the code when 10 founded
      break;
    }

    if(arr[mid] < tearget){
      lb=mid+1;
    }

    else{//if arr[mid]>tearget
      ub=mid-1;
    }
  }
  if(!done) cout<<"not found"<<endl;//if 10 is not available
  
   return 0;

}
