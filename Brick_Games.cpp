#include<iostream>
using namespace std;

int main(int argc, char const *argv[])
{
	int s, sn, n, i, d;
	cin>>n;
	for(i=1; i<85; i++){
		s = (3*i*(i+1))/2;
		if(s >= n)
			break;
	}

	sn = (3*i*(i-1))/2;
	d = n-sn;

	if(d >= i)
		cout<<"Motu\n";
	else
		cout<<"Patlu\n";
	return 0;
}