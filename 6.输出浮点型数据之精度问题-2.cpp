#include<iostream>
#include<iomanip>
using namespace std; 
int main()
{
	float a=3.1212121212121212121212121212121212121212121212121212121212121212121212121212121212121212121212121212;
	double b=3.1212121212121212121212121212121212121212121212121212121212121212121212121212121212121212121212121212;
    long double c=3.1212121212121212121212121212121212121212121212121212121212121212121212121212121212121212121212121212;
			  cout<<setprecision(100)<<a<<endl;
			  /*setprecision(100)是操作控制符 ，
			  后面的b、c也默认按照上面的精度去打印 */ 
			  cout<<b<<endl;
			  cout<<c<<endl;
	return 0;
 } 
