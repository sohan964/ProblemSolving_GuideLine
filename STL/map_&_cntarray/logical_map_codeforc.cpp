#include <bits/stdc++.h>
     
using namespace std;
#define optimize() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);


int main(){
        optimize();
        map<string,string>p1;
        int n1,n2;
        cin>>n1>>n2;
        for( int i=0;i<n1;i++){
                string a,ip;
                cin>>a>>ip;
                ip=ip+";";
                p1[ip]=a;


        }
        while(n2--){
                string s1,ip;
                cin>>s1>>ip;
               
                cout<<s1<<" "<<ip<<" #"<<p1[ip]<<endl;
        }
        
        
        return 0;
        
}
