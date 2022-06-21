#include<bits/stdc++.h>//this for all header file
using namespace std;

int main(){
    int n,i;
    vector<int> v;//vector diclayer
    cin>>n;//the limit
    //taking input vector
    for(i=0;i<n;i++){
        int a;
        cin>>a;
        v.push_back( a );//pushing a inside the vector
    }
    cout<<v.size()<<endl;
    for(i=0;i<n;i++){
        cout<<v[i]<<" ";//output will be all elament
    }


}
