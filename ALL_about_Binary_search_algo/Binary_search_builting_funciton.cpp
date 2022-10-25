#include<bits/stdc++.h>
using namespace std;
#define optimize() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
//int arr[]={1,2,5,6,8,9,10,12};
int main(){
  optimize();

    vector<int> v={1,2,3,4,5};
    int target= 3;
    //it will find that target on the vector or not 
    //the duilting binary search function
    bool f1= binary_search(v.begin(),v.end(),target);
    cout<<f1<<endl;//output 1;
  return 0;
}
