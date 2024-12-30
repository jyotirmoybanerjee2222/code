#include<bits/stdc++.h>
using namespace std;

int increment(int n)
{
	n++;
	return n;
}

void inc(int n)
{
	n++;
}

void ince(int &n)
{
	n++;
}

void swap(int &a,int &b)
{
	int temp = a;
	a = b;
	b = temp;
}

void swap1(int a,int b)
{
	int temp = a;
	a = b;
	b = temp;
}

void array1(int a[][20])
{
	 a[0][0] = 5;
}
int main(){
	int a =3;
	int arr[10][20];
	cout<<a<<endl;//3
	cout<<increment(a)<<endl;//4
	inc(a);//pass by value;
	cout<<a<<endl;//3
	ince(a);//pass by reference;
	cout<<a<<endl;//4


	int x = 6;
	int y = 7;
	cout<<x<<" "<<y<<endl;
	swap1(x,y);//pass by value
	cout<<x<<" "<<y<<endl;
	swap(x,y);//pass by reference
	cout<<x<<" "<<y<<endl;

	arr[0][0]=7;
	cout<<arr[0][0]<<endl;
	array1(arr);//arr always pass by reference
	cout<<arr[0][0]<<endl;
     
}