//Author Pavel
#include<bits/stdc++.h>
using namespace std;

//Print all the double numbers from 1 to n

int main()
{
    
    int t;
    cin>>t;

    while(t--){

        int a[]={4,1,2,1,2};
        int n=sizeof(a)/sizeof(a[0]);
                //sort(a,a+n);


        unordered_map<int,int>v;


        for (int i = 0; i < n; ++i)
        {
            /* code */

            v[a[i]]++;
        }


        for (auto x:v)
        {
            /* code */
                int no=x.second;
                if(no==2){
                    cout<<x.first<<endl;

                }
            
        }

               
    }


    return 0;
}