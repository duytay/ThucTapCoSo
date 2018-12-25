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
int KiemTra(int nam)
{
	if(nam %400==0 || (nam %4==0 and nam %100==0))
		return 1;
		return 0;
}
int Timstt(NgayThang n)
{
	int i;
	int stt=0;
	for(int i=0; i<n.thang; i++)
		stt +=n.thang;
		stt +=n.ngay;
		if(KiemTra ==0 && n.thang>2)
		stt++;
		return stt;
}
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
	if(KiemTra(x.nam))
		cout << " nam "  <<x.nam   << "  la nam nhuan"   <<endl;
	else
		cout<< " nam "  <<x.nam << "  khong la nam nhuan" <<endl;
	cout << Timstt <<endl;
		
	cout << x.ngay <<"/"<< x.thang <<"/" << x.nam <<endl;	
}

