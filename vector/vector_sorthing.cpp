#include<bits/stdc++.h>
using namespace std;
int main(){
    vector<int> v={1,2,5,9,3,2,3};
    //it's for print small to large value
    sort(v.begin(),v.end());
    for(auto u:v ) cout<<u<<" ";
    cout<<endl;

    sort(v.begin(),v.end(),greater<int>() );//it's will print large to small
    for(auto u:v ) cout<<u<<" ";
    cout<<endl;

    sort(v.rbegin(),v.rend());//it's so sortcut to print large to small
    for(auto u:v ) cout<<u<<" ";
    cout<<endl;

return 0;
}
