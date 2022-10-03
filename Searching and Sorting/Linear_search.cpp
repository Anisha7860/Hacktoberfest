#include <iostream>
#include<bits/stdc++.h>
using namespace std;
int linear_search(vector<int>&arr,int n,int x)
{
    for(int i=0; i<n; i++)
    {
        if(arr[i]== x)
        {
            return i;
        }
    }
    return -1;
    
}
int main()
{
    cout<<"please enter the size of array :-";
    int n,x;
    cin>>n;
    cout<<endl;
    cout<<"please enter the array data :-";
    cout<<endl;
    vector<int> arr(n);
    for(int i=0; i<n; i++)
    {
        cin>>arr[i];
    }
    cout<<"please enter the no. to find :-";
    cin>>x;
    cout<<endl;
    int ans=linear_search(arr,n,x);
    if(ans==-1)
    {
        cout<<"Not Found"<<endl;
    }
    else{
        cout<<"Found at index:-"<<ans<<endl;
    }
    
}
