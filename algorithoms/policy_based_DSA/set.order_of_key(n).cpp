//  BISMILLAHIR RAHMANIR RAHIM //

#include<bits/stdc++.h>
using namespace std;

//this for policy based DS
#include<ext/pb_ds/assoc_container.hpp>
using namespace __gnu_pbds;
typedef tree <long long, null_type, less_equal<long long>,rb_tree_tag,tree_order_statistics_node_update> pbds_set;
// up to this


#define optimize() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);


int main(){
  optimize();

    pbds_set ps;
    
    ps.insert(1);
    ps.insert(3);
    ps.insert(2);
    ps.insert(2);
    //it will print how many element are less than 4
    cout<<ps.order_of_key(4)<<endl;
   
    
    
   return 0;
}
