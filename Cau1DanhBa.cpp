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












/* Thêm moi 1 contact vào db
1. void ThemMoi(contact c)
	1.Thêm vào danh ba
	2.ghi db vào file(danhba.dat)
2. void lietkeDB
	In các phan tu cua db ra man hinh
3. void capnhat(contact c0
	tìm contact m có sdt c.sdt
	cap nhat c vào db
	ghi danh ba vào file
4. Xoacontact(char *sdt)
	1. tìm contact m có sdt trong db
	2. xóa m
	3. ghi db vào file
5. vector<contact>
	TimTheoTen(char *ten);
	-Tìm các contact m có tên ten
	-Them m vào bien Vector
	-tra ve bien vector
*/
