#include<iostream>
using namespace std;
int main(){
    int i,arr[50],n,x,y;

    cout<<"Enter the size of array:";
    cin>>n;
    
    cout<<"Enter the elements in an array:";    
    for(i=0;i<n;i++){
        cin>>arr[i];
    }

    cout<<"Enter the index for deletion:";
    cin>>x;

    for(i=x;i<n;i++){
        arr[i] = arr[i+1];
    }

     for(i=0;i<n-1;i++){
        cout<<arr[i]<<"\t";
    }

     return 0;
}