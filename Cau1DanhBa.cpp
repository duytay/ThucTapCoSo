#include <iostream>
#include <string.h>
#include <stdlib.h>
#include <vector>
#include <fstream>
using namespace std;
File*f=fopen("input.dat","rb")


typedef struct
{
	char ten[20];
	char sdt[11];
	char email[20], diachi[50];
	bool gioitinh;
}contact;

vector <contact> db;
fstream f("DanhBa.dat");
//void ThemMoi(contact c);
//void Ghidb(contact c);
//void LietKedb(contact c);
//void CapNhat(contact c);
//void Xoacontact(char *sdt);

void ThemMoi(contact c)
{
	db.push_back();
}

void Ghidb()
{
	for(int i=0; i<db.size(); i++)
	fwrite(&db[i], sizeof(rb), 1,f);
	/*	contact a;
	cout<<"nhap ho ten\n";
	cin>>a.ten;
	cout<<"so dien thoai\n";
	cin>>a.sdt;
	cout<<"nhap email\n";
	cin>>a.email;
	cout<<"nhap gioi tinh\n";
	cin>>a.gioitinh;
	cout<<"nhap dia chi\n";
	cin>>a.diachi;
	//DanhBa.push_back();*/
}
void Xuat(contact c)
{
	cout<<c;
}
void Lietke()
{
	DocFile();
	for(int i=0; i<sizeof(db), i++)
		xuat(db[i]);
}
int main()
{
	char st[]='';
	strycpy(ten,st);
	c.gioitinh=0;
	cout<<"Them moi";
}












/* Th�m moi 1 contact v�o db
1. void ThemMoi(contact c)
	1.Th�m v�o danh ba
	2.ghi db v�o file(danhba.dat)
2. void lietkeDB
	In c�c phan tu cua db ra man hinh
3. void capnhat(contact c0
	t�m contact m c� sdt c.sdt
	cap nhat c v�o db
	ghi danh ba v�o file
4. Xoacontact(char *sdt)
	1. t�m contact m c� sdt trong db
	2. x�a m
	3. ghi db v�o file
5. vector<contact>
	TimTheoTen(char *ten);
	-T�m c�c contact m c� t�n ten
	-Them m v�o bien Vector
	-tra ve bien vector
*/
