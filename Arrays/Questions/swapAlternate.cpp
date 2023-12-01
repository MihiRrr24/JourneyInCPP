#include<iostream>
using namespace std;

void swapAlternate(int arr[], int size){

    for(int i=0; i<size; i+=2){

        if(i+1<size){
            swap(arr[i], arr[i+1]);
        }
    }
}

void printArray(int arr[], int size){

    for (int i = 0; i < size; i++)
    {
        cout<<arr[i]<<" ";
    }
    
}

int main(){
    int even[8]={2, 4, 6, 8, 10, 12, 14, 16};
    int odd[5]={3, 6, 9, 12, 15};

    swapAlternate(even, 8);
    swapAlternate(odd, 5);

    cout<<"After swapping alternately -> \n";
    printArray(even, 8);
    cout<<endl;
    printArray(odd, 5);

    return 0;
}

// MIHIRR42
