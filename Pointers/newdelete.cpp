#include<iostream>
using namespace std;

int main(){
	int *ptr = new int(40);
	cout<<"The value of ptr is : "<<*ptr<<endl;
	float *ptrr = new float(4.98);
	cout<<"The value of ptr is : "<<*ptrr<<endl;
	
	
	// dynamically allocating contigous blocks of memory
	int *arr = new int[3];
	arr[0] = 10;
	*(arr+1) = 20;
	arr[2] = 30;
	//delete keyword
	delete arr;         // delete[] arr  full contiguous memory delete and free
	cout<<"The value at arr[0] is "<<arr[0]<<endl;
	cout<<"The value at arr[1] is "<<*(arr+1)<<endl;
	cout<<"The value at arr[2] is "<<arr[2]<<endl;
	
	return 0;
}


// MIHIRR42
