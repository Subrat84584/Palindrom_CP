#include<iostream>
using namespace std;
int palindrom(int x)
{
	int rem,rev=0,temp=x;
	while(temp!=0)
	{
		rem=temp%10;
		rev=(rev*10)+rem;
		temp=temp/10;
	}
	if(rev==x)
	return 1;
	else
	return 0;
}
int main()
{
	if(palindrom(121))
	cout<<"True";
	else
	cout<<"False";
	return 0;
}
