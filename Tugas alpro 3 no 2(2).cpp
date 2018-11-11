#include <stdio.h>
#include <conio.h>
#include <iostream>

using namespace std;
int main () {
	float bil, max, total;
	cout<<"Masukkan nilai max : ";cin>>max;
	
	bil=0;
	total=0;
	do
	{
		total+=bil;
		bil++;
	}
	
	while (bil<=max);
	cout<<"total :"<<total<<endl;
	getch();
	return 0;
}
