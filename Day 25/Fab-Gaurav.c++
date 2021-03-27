#include<bits/stdc++.h>
using namespace std;

int main(){   
    int m, n, i, k;
    cout<<"Enter the size of Array 1 : ";
    cin>>m;
    cout<<"Enter the size of Array 2 : ";
    cin>>n;
    
    int arr1[m],arr2[n],arr3[m+n];
    
    cout << "Input the Array 1 elements : ";
    for(i=0; i<m; i++){
        cin>>arr1[i];
        arr3[i] = arr1[i];
    }
    
    k = i;
    
    cout << "Input the Array 2 elements : ";
    for(i=0; i<n; i++){
        cin>>arr2[i];
        arr3[k] = arr2[i];
        k++;
    }
    
    cout<<"Merged Array is : \n";
    for(i=0; i<k; i++){
        cout<<arr3[i]<<" ";
    }
    }
    return 0;
}
