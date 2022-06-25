#include<bits/stdc++.h>
using namespace std;

int main(){
     vector<int> v={2,3,3,5,9,7,7,1};
     //it's for find the maximam value
     vector<int>::iterator it=max_element(v.begin(),v.end());
     cout<<*it<<endl;
     //it's will find the minimam value
     it=min_element(v.begin(),v.end());
     cout<<*it<<endl;
     

 return 0;
}
