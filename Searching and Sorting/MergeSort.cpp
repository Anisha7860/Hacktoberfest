#include <iostream>

using namespace std;

void merge(int *a, int s, int e)
{
    int mid = (s+e)/2;
    // I need 3 pointers
    
    int i = s;               
    int j = mid + 1;          
    int k = s;               
    
    int temp[1000];          
    
    while (i <= mid && j <= e)
    {
        if(a[i] < a[j])
        {
            
            temp[k] = a[i];
            i++;
            k++;
            
        }
        
        else
        {
            
            temp[k] = a[j];
            j++;
            k++;
            
        }
        
    }

    
    while(i <= mid)
    {
        temp[k] = a[i];
        i++;
        k++;
        
    }
    
    
    while (j <= e)
    {
        
        temp[k] = a[j];
        j++;
        k++;
        
    }
    for(int i = s; i <= e; i++)
    {
        a[i] = temp[i];
        
    }
    
    
}


void merge_Sort(int a[], int s, int e)
{
    if(s>=e)
    {
        return;
    }

    
    int mid = (s + e)/2;

    merge_Sort(a,s,mid);

    merge_Sort(a,mid+1,e);
    
    merge(a,s,e);
    
    
}


int main()
{
    
    int a[1000];
    int n;
    cout << "Enter the size of Array: ";
    cin >> n;
    
    for(int i = 0; i < n; i++)
    {
        cin >> a[i];
        
    }

    merge_Sort(a,0,n-1);
    
    for(int i = 0; i < n; i++)
    {
        cout << a[i] << "  ";
        
    }

    return 0;
}

