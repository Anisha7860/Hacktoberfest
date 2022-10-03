#include<iostream>
using namespace std;
void sort(int *arr,int n)
{
    
        for(int i=0;i<n-1;i++)
            for(int j=i+1;j>0;j--)
            {
                if(arr[j]<arr[j-1])
                    {
                        int temp;
                        temp=arr[j];
                        arr[j]=arr[j-1];
                        arr[j-1]==arr[j];
                    }
                else
                    break;  
    for(int i=0;i<n;i++)
        cout<<arr[i];
}
int main()
{
    int ar[]={7,4,10,8,3,1};
    sort(ar,6);
}