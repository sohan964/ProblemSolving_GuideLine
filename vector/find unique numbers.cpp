#include<bits/stdc++.h>
using namespace std;

int main(){
     vector<int> v={2,3,3,5,9,7,7,1};
     //it will sort all element
     sort(v.begin(),v.end());//0(nlog2(n))
     for(int u:v ) cout<<u<<" ";
     //it will remove all double value
     int sz=unique(v.begin(),v.end())-v.begin();//o(n)
     for(int i=0;i<sz;i++) cout<< v[i] <<" ";//with out unique value
     
     cout<<endl;

     

 return 0;
}
