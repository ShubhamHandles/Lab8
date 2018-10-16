//Q.1. Write a program to find sum of all elements of an array. (Use functions)

#include<iostream>
using namespace std;

//sum function
int sumAry(int arr[], int x){
	int sum=0;
	for(int i;i<x;i++){
		sum=sum+arr[i];
	}
	return sum;
}

int main(){
	
	//input of the size 
	int s;
	cout << "Enter the size of your array : " << endl;
	cin >> s;

	//define array
	int Array1[s];

	//take elements from user
	cout << "Enter the elements of your array : " << endl;
	for(int a=0;a<s;a++){
		cin >> Array1[a];
	}

	//call function 
	//output
	cout << "The sum of all elements of your array is : " << sumAry(Array1,s) << endl;

	return 0;	
}
