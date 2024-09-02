#include <iostream>
using namespace std;
int main(){
	double p,r,t;
	cout<<"Enter Principle: "<<endl;
	cin>>p;
	cout<<"Enter rate: "<<endl;
	cin>>r;
	cout<<"Enter time: "<<endl;
	cin>>t;

	double value=1;
	for(int i=1;i<=t;i++){
		value=value*(1+(r/100));
	}
	double a = p*value;
	double ci=a-p;
	cout<<"Copound interest is :"<<ci<<endl;
	return 0;

}
