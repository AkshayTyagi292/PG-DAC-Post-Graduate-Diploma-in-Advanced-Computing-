#include <iostream>
using namespace std;

int main(){
	int a,b;
	cout<<"Enter two numbers: "<<endl;
	cin>>a>>b;

	cout<<"Value of a before swapping is "<<a<<" Value of b before swapping is "<<b<<endl;

	int temp = a;
	a=b;
	b=temp;

	cout<<"Value of a is "<<a<<" and value of b is "<<b<<endl;

	return 0;
}

