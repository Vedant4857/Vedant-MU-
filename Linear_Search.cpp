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

    cout<<"Enter the elements to be found:";  
    cin>>x;

    for(i=0;i<n;i++){
        if(arr[i]==x){
            cout<<"The index of the element is:"<<i;
            break;
        }
    }
}