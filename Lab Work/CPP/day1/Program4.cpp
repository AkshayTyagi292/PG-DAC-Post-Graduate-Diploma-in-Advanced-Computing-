#include <iostream>
using namespace std;
int main(){
	int a,b;
	cout<<"Enter the number: "<<endl;
	cin>>a;
	cout<<"Enter the power: "<<endl;
	cin>>b;

	int n=1;
	for(int i=0;i<b;i++){
		n = n*a;
	}
	cout<<"The value is: "<<n<<endl;
	return 0;
}
