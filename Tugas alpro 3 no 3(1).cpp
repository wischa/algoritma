#include <stdio.h>
#include <conio.h>
#include <iostream> 

using namespace std;
int main (){
	float bil, max, total, rerata;
	cout<<"Masukkan nilai max : ";cin>>max;
	
	bil=0;
	total=0;
	while (bil<=max)
	{
		total+=bil;
		rerata=total/max;
		bil++;
	}
	cout<<"total : "<<total<<endl;
	cout<<"rerata : "<<rerata<<endl;
	getch();
	return 0;
}

