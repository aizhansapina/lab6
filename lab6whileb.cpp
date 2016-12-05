#include <iostream>
#include <cmath>
using namespace std;
int main ()
{
	int i=2,n;
	cin >> n;
	while (n>0){
	if (n%i==0){
	cout << i << " ";
	break;}
	i++;}
return 0;
}
