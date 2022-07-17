//Author Pavel
#include<bits/stdc++.h>
#include<stack>
using namespace std;

int main()
{
    
    int t;
    cin>>t;

    while(t--){
        stack<string>v;


        v.push("PAVEL");
        v.push("ALAM");
        v.push("IS");



        while(!v.empty()){

            cout<<v.top()<<endl;
            v.pop();


        }
                v.pop();

  while(!v.empty()){

            cout<<v.top()<<endl;
            v.pop();


        }
    }


    return 0;
}

//output
//IT IS BASED ON LIFO
