#include<iostream>
using namespace std;

// void update(int n){        // PASS BY VALUE ONLY COPIES 
//     n++;
// }

void update(int &n){        // When passed as reference new memory is allocated
    n++;                    // so change reflects in the value
}

int main(){
    // int i;
    // cin>>i;

    // // creating a reference variable
    // int &j = i;

    // cout<<i<<endl;
    // i++;
    // cout<<i<<endl;

    // // Gets the updated value
    // cout<<j<<endl;
    // j++;
    // cout<<j<<endl;


    int n;
    cin>>n;
    cout<<"Before n is : "<<n<<endl;

    update(n);
    cout<<"After update n is : "<<n<<endl;

    return 0;
}


// MIHIRR42
