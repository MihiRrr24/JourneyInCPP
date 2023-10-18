// USING CONSTRUCTOR AND DESTRUCTOR WITH ARRAY CREATION
#include <iostream>
using namespace std;

class Z {
    public:
        Z() {
            cout << "Constructor called" << endl;
        }
        ~Z() {
            cout << "Destructor called" <<  endl;
    }
};

int main() {
    int n;
    cin >> n;

    // CREATING AN ARRAY OF Z CLASS TYPE WITH NEW KEYWORD
    Z *zArray = new Z[n];

    delete[] zArray;        // FREE MEMORY AFTER USE

    return 0;
}


// MIHIRR42
