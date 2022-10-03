#include<iostream>
using namespace std;
int main()
{
    int n;
    cout<<"Enter length of array ";
        cin>>n;
    int ar[n];
    for(int i=0;i<n;i++)
        cin>>ar[i];
    cout<<endl;

    for(int i=0;i<n-1;i++)
        for(int j=i+1;j<n;j++)
            if(ar[j]<ar[i])
                {
                    int temp=ar[j];
                    ar[j]=ar[i];
                    ar[i]=temp;
                }
    cout<<"sorted array is "<< endl;
    for(int i=0;i<n;i++)
        cout<<ar[i]<<" ";
    return 0;
}
