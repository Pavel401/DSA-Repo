//Author Pavel
#include<bits/stdc++.h>
#include<array> 
#include<algorithm>//it consists all the basic sorting algos 
using namespace std;


void updateArray(array<int,6>&arr,int i,int val){
    //to use a array stl in c++ we have to pass the value 
    //in all container stls we pass by the value 
    //the array "a[]" and "arr[]" are alias.We can call array a[] using the
    //name arr.But the scope of the arr[] is only inside the updateArray 
    //function

    arr[i]=val;
    arr[5]=6;

}
int main()
{
    
    int t;
    cin>>t;

    while(t--){
            int n;


            array<int,6>a;
            a={1,2,3,4,5};

            updateArray(a,0,15);

            for (int i = 0; i < a.size(); ++i)
            {
                /* code */
              cout<<  a[i]<<" ";
            }
            cout<<endl;
            cout<<"Sorted array is "<<endl;


            sort(a.begin(), a.end());

                for(int x:a){
                    //using the for each loop 

                    cout<<x<<" ";
                }
    }


    return 0;
}