#include <iostream>
using namespace std;

int main()
{
    // int arr[3][4] = {1 , 2 , 3, 4, 5, 6, 7, 8, 9, 10, 11, 12};   // ONE WAY
    // int arr[3][4] = { {2,4,6,8} , {1,3,5,7} , {5,7,8,9} } ;         // SECOND WAY BY GIVING NOS BY OURSELVELS FOR ARRAY

    // for(int row = 0; row<3; row++){
    //     for(int col = 0; col<4; col++)
    //         cout<<arr[row][col]<<" ";

    //     cout<<endl;
    // }

    // TAKING INPUT  NOW
    int arr[3][4];

    // for(int row=0; row<3; row++){            // TAKING INNPUT ROW WISE
    //     for(int col=0; col<4; col++)
    //         cin>>arr[row][col];
    // }

    for (int col = 0; col < 4; col++)
    { // TAKING INNPUT COLUMN WISE
        for (int row = 0; row < 3; row++)
            cin >> arr[row][col];
    }

    // Print OUTPUT
    for (int row = 0; row < 3; row++)
    {
        for (int col = 0; col < 4; col++)
            cout << arr[row][col] << " ";
        cout << endl;
    }

    return 0;
}


// MIHIRR42
