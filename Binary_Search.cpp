#include<iostream>
using namespace std;

int sorted(int a[],int n){
    int i,j;
  for(i=0;i<n;i++){
        for(int j=0;j<n-1;j++){
            if(a[j]>a[j+1]){
                int temp = a[j];
                a[j]=a[j+1];
                a[j+1]=temp;
            }
        }

    }
    return a[50];
}
int main(){
    int i,arr[50],n,x,y;

    cout<<"Enter the size of array:";
    cin>>n;
    
    cout<<"Enter the elements in an array:";    
    for(i=0;i<n;i++){
        cin>>arr[i];
    }

    sorted(arr,n);
    for(i=0;i<n;i++){
        cout<<arr[i]<<"\t";
    }

    int end = n-1,beg =0;
    cout<<endl<<"Enter the elements to be found:";  
    cin>>x;

    for(i=0;i<n;i++){
        int mid = (beg+end)/2;

        if(arr[mid]==x){
            cout<<"The element is found at index:"<<mid;
            break;
        }
        else if(arr[mid]>x){
            end = mid-1;
        }
        else{
            beg = mid+1;
        }
    }
    
}