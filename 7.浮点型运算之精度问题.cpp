/*避免将一个很大的数与一个很小的数直接相加或相减，
否则由于浮点型数据精度的问题，就使很小的数"丢失"掉了 */
#include<iostream>
#include<iomanip>
using namespace std; 
int main()
{
	float a=0,b=0;
	a=123456.789e5;
	b=a+20;
	cout<<setprecision(20)<<b<<endl;
		return 0;
 } 
