#include<iostream>
using namespace std;

bool isPresent(int array[][4] ,int target, int row, int column){
    for(int row=0; row<3; row++){
        for(int col=0; col<4; col++){
            if(array[row][col] == target)
                return true;
        }
    }
    return false;
}


int main(){
    int array[3][4];

    cout<<"Input the Array : ";
    for(int row = 0; row<3; row++){
        for(int col = 0; col<4; col++)
            cin>>array[row][col];
    }

    // Printing 2d array
    cout<<"\nOutput Array is : \n";
    for(int row = 0; row<3; row++){
        for(int col = 0; col<4; col++)
            cout<<array[row][col]<<" ";
        cout<<endl;
    }

    // SEARCHING AN ELEMENT
    cout<<"\nEnter the element to search : ";
    int target;
    cin>>target;

    if( isPresent(array, target, 3, 4) )
        cout<<"Element Found"<<endl;
    else
        cout<<"Element not Found"<<endl;

    return 0;
}


// MIHIRR42
