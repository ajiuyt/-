#include<iostream>
using namespace std; 
int main()
{
	int number[45]={11,11,11,11,12,12,12,12,12,12,12,12,12,
	                12,12,12,12,12,12,12,12,12,12,12,12,12,
					12,12,12,12,12,12,12,12,12,12,21,21,21,
					12,12,12,12,12,12};
	int max=0;
	int i=0;
	for(i=0;i<45;i++)
	{
		if(number[i]>max)
		         max=number[i];
	}
	cout<<"The Maximal Number is:"<<max;
	return 0;
 } 
