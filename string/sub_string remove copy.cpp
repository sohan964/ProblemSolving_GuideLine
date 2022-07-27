#include <bits/stdc++.h>
     
using namespace std;
#define optimize() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
int main(){
        optimize();
        //remove sub string
        string s= "sumaiyasohan";
        //it will remove after so and before han
        s.erase(s.begin()+2,s.begin()+9);
        cout<<s<<endl;//sohan

        //add sub string on anather string
        string m="su";
        string t="sohan";
        //it will copy the sub string from t and add on m
        copy( t.begin()+2,t.end(), back_inserter(m));
        //back_inserter will add the sub string on the back to the m
        cout<<m<<endl;


        //find sub string from a string
        string n="Ruma";
        if(n.find("uma") !=-1) cout<<"sub string found"<<endl;
        else cout<<"Not found"<<endl;

        

}
