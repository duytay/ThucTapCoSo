#include <iostream>-
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <fstream>
using namespace std;
ifstream fi("input.txt");
struct NgayThang
{
	int ngay;
	int thang;
	int nam;
};
int Thang[13]={0,31,28,31,30,31,30,31,31,30,31,30,31};
// ham kiem tra nam co nhuan hay khong
int KiemTra(NgayThang x) //lay du lieu kieu NgayThang
{
	if(x.nam %400==0 || (x.nam %4==0 and x.nam %100==0)) // ham kiem tra
		return 1; // day la nam nhuan
	return 0; // khong la nam nhuan
}
// tim so thu tu cua mot ngay trong nam
int Timstt(NgayThang n)
{
	int stt=0;
	for(int i=0; i<n.thang; i++)
			stt +=Thang[i];
		stt +=n.ngay;
		if(KiemTra(n) && n.thang>2)
			stt++;
		return stt;
}
//NgayThang congNgayThang(NgayThang n, int x) // x<=365
//{
//	int kq = x+sttNgayTrongNam(n);
//	int nam=n.nam;
//		if(kq<=365)
//			return ngayTuSTT(kq,nam);
//		else
//			if(KiemTra(nam)==1)
//				if(kq==366)
//					return ngaytustt(kq,nam)
//				else
//					return ngaytustt(kq-366, nam+1);
//			else
//				return ngaytustt(kq-365, nam+1);
//}
//int main()
//{
//	string st;
//	char t[4];
//	cout << "nhap du lieu : ";
//	getline(cin, st);
//	NgayThang x;
//	t[0]=st[0];
//	t[1]=st[1];
//	x.ngay=atoi(t);
//	
//	t[0]=st[3];
//	t[1]=st[4];
//
//	x.thang=atoi(t);
//	
//	t[0]=st[6];
//	t[1]=st[7];
//	t[2]=st[8];
//	t[3]=st[9];
//	x.nam=atoi(t);
//	
//	
//	if(KiemTra(x.nam))
//		cout << " nam "  <<x.nam   << "  la nam nhuan"   <<endl;
//	else
//		cout<< " nam "  <<x.nam << "  khong la nam nhuan" <<endl;
//	cout << Timstt <<endl;
//		
//	cout << x.ngay <<"/"<< x.thang <<"/" << x.nam <<endl;	
//}
// tao du lieu ngay thang nam
void DuLieu(NgayThang &x, string &st)
{
	char t[4];
	cout << "nhap du lieu : ";
	getline(cin, st);
//	NgayThang x;
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
}
void text(int n, int sum)
{
	int i=0;
	while(sum>Thang[i])
	{
		sum=sum-Thang[i];
		i++;
	}
	cout<< sum <<"Nga" << i <<"Thang" << n << "Nam" <<endl;
}
// Ham cong mot so nguyen duong vao ngay trong nam
void Cong(NgayThang n, int t)
{
	int sum=0;
	sum=Timstt(n)+t;
	if(KiemTra(n))
	{
		if(sum<=366)
		{
			Thang[2]=29;
			text(n.nam,sum);
			Thang[2]=28;
			
		}
		else
			text(n.nam+1,sum-366);
	}
	else
	{
		if(sum<=365)
			text(n.nam,sum);
			else
				{
					n.nam++;
					if(KiemTra(n))
					{
						Thang[2]=29;
						text(n.nam,sum-365);
						Thang[2]=28;
					}
					else
						{
							text(n.nam,sum-365);
						}
				}
	}
}
int main()
{
	fflush(stdin);
	NgayThang x;
	string st;
	cout<<endl;
	if(KiemTra(x)) cout <<"day la nam nhuan" <<endl;
	else 
		cout<<"khong phai la nam nhuan"<<endl;
	cout<<Timstt(x)<<endl;
	
}

