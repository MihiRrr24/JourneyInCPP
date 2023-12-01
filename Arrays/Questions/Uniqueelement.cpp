#include<iostream>
using namespace std;

int findUnique(int arr[], int size){

    int ans=0;
    for(int i=0; i<size; i++){
        ans^=arr[i];
    }

    return ans;
}

int main(){
    int arr[5]={2,4,4,2,5};
    for(int i=0; i<5; i++){
        cout<<arr[i]<<" ";
    }

    int val=findUnique(arr, 5);
    cout<<"\nUnique Element is "<<val;

    return 0;
}

// MIHIRR42
