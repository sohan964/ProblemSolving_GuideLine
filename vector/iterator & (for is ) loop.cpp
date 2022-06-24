#include<bits/stdc++.h>
using namespace std;
int main(){
    vector<string> v={"sohan","nahos","any"};
    //this is a short way to print vector by loop
    vector<string>::iterator it;//this work like pointer
    //it's reverse
    for(it=v.end()-1;it>=v.begin();it--) cout<< *it<<" ";//*it is the value of the vector
    cout<<endl<<"\n\n";
    //this is anather way to print vector easily
    for(auto u : v) cout<< u<<" ";//it's call (for is) loop 
    cout<<endl;
return 0;
}
