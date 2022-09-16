    #include <bits/stdc++.h>
         
    using namespace std;

    #define optimize() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
     
     
    int main(){
        optimize();
        //queue is a linear DS which work like fifo
        queue<int> q;
        //it's take value inside queue
        q.push(4);
        q.push(2);
        q.push(3);
        q.push(3);

        cout<<q.size()<<endl;//it will print the size of the queue
        //here you only can access the first value
        while(!q.empty()){
                cout<<q.front()<<endl;//it will print the first value

                q.pop();//it's will erase the first value
                //it will heppen until the queue size = 0

        }

        
        return 0;
            
    }
