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
        for(int j=0;j<n-i-1;j++)
            if (ar[j+1]<ar[j])
            {
                int temp=ar[j+1];
                ar[j+1]=ar[j];
                ar[j]=temp;
            }
            
    
    
    cout<<"sorted array is "<< endl;
    for(int i=0;i<n;i++)
        cout<<ar[i]<<" ";
    return 0;
}
