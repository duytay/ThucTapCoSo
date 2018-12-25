#include <iostream>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
using namespace std;
typedef struct NgayThang
{
	int ngay;
	int thang;
	int nam;
}NgayThang;

int main()
{
	string st;
	char t[4];
	cout << "nhap du lieu : ";
	getline(cin, st);
	NgayThang x;
	t[0]=st[0];
	t[1]=st[1];
	x.ngay=atoi(t);
	
	t[0]=st[3];
	t[1]=st[4];

	x.thang=atoi(t);
	
	t[0]=st[6];
	t[1]=st[7];
	t[2]=st[8];
	t[3]=st[9];
	x.nam=atoi(t);
	cout << x.ngay <<"/"<< x.thang <<"/" << x.nam <<endl;	
}
int KiemTra(int nam)
{
	if(nam %400==0 || (nam %4==0 and nam %100=0))
		return 1;
		else
		return 0;
}
