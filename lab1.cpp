#include<iostream>
using namespace std;
int main()
{
	int num;
	int i;
	int j=50;
	cin >> num ;
	cout << num <<" ";
	
	for(i=1;i<j;i++)
	{
		if(num==1)
			break;
		else if(num%2==1)
			num=3*num+1;
		else
			num=num/2;
			cout << num <<" ";
	}
	cout << endl;
}
