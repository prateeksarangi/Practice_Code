#include<iostream>
using namespace std;

int fibonacci(int position){
	if(position <= 1)
		return position;

	return fibonacci(position-1)+fibonacci(position-2);
}
int main(int argc, char const *argv[])
{
	int position;
	cin>>position;
	cout<<fibonacci(position);
	return 0;
}