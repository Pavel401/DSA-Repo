//Author Pavel
#include<bits/stdc++.h>
#include<queue>
using namespace std;

int main()
{
    
    int t;
    cin>>t;

    while(t--){

        queue<int>v;
        int n;
        cin>>n;



    for (int i = 0; i < n; ++i)
    {
        /* code */
        v.push(i);
    }





    cout<<"queue IS "<<endl;

    while (!v.empty())
    {
        /* code */



        cout<<v.front()<<"  ";
        v.pop();
    }

   
}
 return 0;

}