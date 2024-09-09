#include <iostream>
using namespace std;

void swap(int& a,int& b){
    int temp = a;
    a = b;
    b = temp;
}

int partition(int arr[],int low,int high){
    int pivot = arr[high];
    int i = low - 1;

    for (int j = low; j < high; j++) {
        if (arr[j] < pivot) {
            i++;
            swap(arr[i], arr[j]);
        }
    }
    swap(arr[i + 1], arr[high]);
    return i + 1;
}

void quicksort(int arr[],int low,int high){
    if(low<high){
    int pivot = partition(arr,low,high);

    quicksort(arr,low,pivot-1);
    quicksort(arr,pivot+1,high);
    }
}

int main()
{
    int i,arr[50],n,j,current;

    cout<<"Enter the size of array:";
    cin>>n;
    
    cout<<"Enter the elements in an array:";    
    for(i=0;i<n;i++){
        cin>>arr[i];
    }
    
    quicksort(arr,0,n-1);

    cout<<"Sorted Array:"<<endl;
    for(i=0;i<n;i++){
        cout<<arr[i]<<"\t";
    }
    return 0;
}
