//Author Pavel
#include<bits/stdc++.h>
#include<vector>

using namespace std;

int main()
{
    
    int t;
    cin>>t;

    while(t--){
            vector<int>v;
            int n;

            cin>>n;
            v.reserve(100);


            for (int i = 0; i < n; ++i)

            {


                int no;
                cin>>no;


                v.push_back(no);
                /* code */
            }



            cout<<"VECTOR IS "<<endl;
            for (int x:v)
            {
                /* code */
                cout<<x<<" ";
            }
            cout<<endl;

            cout<<"SORTED VECTOR IS "<<endl;

            sort(v.begin(), v.end());

             for (int x:v)
            {
                /* code */
                cout<<x<<" ";
            }




            for (int i = 0; i < 2; ++i)
            {
                /* code */
                v.pop_back();
            }

            cout<<endl;
        cout<<"DELETED TWO ELEMENTS FROM  VECTOR IS "<<endl;
        for (int x:v)
            {
                /* code */
                cout<<x<<" ";
            }

    }


    return 0;
}