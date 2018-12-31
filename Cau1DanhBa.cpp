#include <iostream>
#include <string.h>
#include <stdlib.h>
#include <vector>
#include <fstream>
using namespace std;

// Khai bao cau truc contact
typedef struct
{
	char ten[20];
	char sdt[11];
	char email[20], diachi[50];
	bool gioitinh;
}Contact;


vector <Contact> DanhBa;// them Danhba vao contact
vector <Contact> db;// lay db ra de kiem tra
void GhiFile()
{
	FILE *f = fopen("input.dat","wb"); // mo file nhi phan input.dat
	for(int i=0;i<DanhBa.size();i++)
		fwrite(&DanhBa[i],sizeof(Contact),1,f); //tim kich co cua file Contact
	fclose(f);
}
// Xuat thong tin cua tung contact
void Xuat(Contact c)
{
	cout<<"ten"<<c.ten<<endl;
	cout<<"so dien thoai"<<c.sdt<<endl;
	cout<<"gioi tinh"<<c.gioitinh<<endl;
	cout<<"email"<<c.email<<endl;
}


//Them danh ba vao contact
void Them()
{
	Contact c;
	
	strcpy(c.ten, "Nguyen Duy Tay"); //Dung strcpy de gan chuoi vao cac tham so cua struct Contact
	strcpy(c.sdt, "123");
	c.gioitinh = 1;
	strcpy(c.email, "duytay");
	strcpy(c.diachi, "NT");
	DanhBa.push_back(c); //push_back dung de them cac tham so trong struct duoc gan boi bien Contact c vao cuoi vector DanhBa
//	InDanhBa(c);
}
// Doc danh ba tu file nhi phan 
void DocFile()
{
	FILE *f = fopen("input.dat","rb"); // mo file input.dat
	for(int i=0;i<DanhBa.size();i++) //kich co cua vector
		{
			Contact c;
			fread(&c,sizeof(c),1,f);
			db.push_back(c);
		}
	fclose(f);
}
// liet ke cac contact in ra danh ba
void Lietke()
{
	DocFile();
	for(int i=0; i<sizeof(db); i++)
	{
		Xuat(db[i]);
	}
}
// chinh sua danh ba
void ChinhSua(char tt[])
{
	for(int i=0;i<DanhBa.size();i++)
		if(strcmp(db[i].sdt,tt)==0)
			strcpy(db[i].ten,"NGuyen Duy");
}
int main()
{
	Them();
	GhiFile();
	DocFile();
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
