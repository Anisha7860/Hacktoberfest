#include<iostream>
using namespace std;
void swap(int & a, int &b){
    int temp;
    temp=a;
    a=b;
    b=temp;
}

int partition(int ar[],int lb,int ub){
    int pivot=ar[lb],start=lb,end=ub;
    while(start<end){
        while(ar[start]<pivot)
            start++;
        while(ar[end]>pivot)
            end--;
        if(start<end)
            swap(ar[start],ar[end]);
    }
    swap(ar[lb],ar[end]);
    return end;
}

void QuickSort(int ar[],int lb,int ub){
    if(lb<ub){
        int pos=partition(ar,lb,ub);
        QuickSort(ar,lb,pos-1);
        QuickSort(ar,pos+1,ub);
    }
}

int main()
{   
    int ar[9];
    cout<<"enter ";
    for ( i = 0; i <9; i++)
        cin>>ar[i];
    QuickSort(ar,0,9);
    return 0;
}
