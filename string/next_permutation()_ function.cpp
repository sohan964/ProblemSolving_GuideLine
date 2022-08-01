#include <bits/stdc++.h>
#include<cstring>
     
using namespace std;
#define optimize() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define endl '\n';

int main(){
        optimize();
        string s="abcd";
        //it will find the next luckgograficaly larger string by s string
        bool f1 = next_permutation(s.begin(),s.end());
        //if it posible to find luckgograficaly larger string then f1 will be 1 otherwise f1=0

        cout<<f1<<"\n"<< s<<endl;//s=abdc


        return 0;

}
