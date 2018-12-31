// câu hoi
// danh sach cau hoi
// thân cau hoi
/* struct bode
	{
		string sl;
		string cauhoi;
		string ct1, ct2, ct3, dA;
	}
	strcut Ng
	{
		string, ten;s
		int diem;
	}
*/
// chon de()
//	-chon de lam
// DocDe()
/*  -doc dong 1
	-su dung for
	-nhap cau tra loi (A, B, C);
*/
// KiemTraDA(string a, string)
//	+return 2
//	+return 0;
//	+luuDiem(int diem)
// Danh Sach nguoi choi vector<nguoichoi> dsngchoi;
#include <iostream>
#include <string.h>
#include <vector>
#include <string>
#include <stdlib.h>
#include <fstream>

using namespace std;

// khai bao bo de
struct Cauhoi_DA
{
	string cauhoi;
	string A,B,C,D;
	string DA;
};
// tao nguoi choi
struct NguoiChoi
{
	string ten;
	int diem;
};

vector <NguoiChoi> DanhSach;
vector <Cauhoi_DA> dscau;
// Tao nguoi choi
void NhapNguoiChoi()
{
	NguoiChoi n1;
	fflush(stdin);
	cout<<"nhap ten nguoi choi ";
	getline(cin, n1.ten);
	n1.diem=0;
	DanhSach.push_back(n1);
}
// lay de tu file txt và luu diem nguoi choi
void LayDe()
{
	ifstream f("DE1.txt");
	int SL,diem=0;
	Cauhoi_DA de;
	string s,ans;
	getline(f,s); SL = atoi(s.c_str());
	for(int i=0; i<SL; i++)
	{
		getline(f,s);
		cout << s <<endl;
		de.cauhoi;
		getline(f,s);
		de.A=s;
		cout<<s <<endl;
		getline(f,s);
		de.B=s;
		cout<< s <<endl;
		getline(f,s);
		de.C=s;
		cout<<s <<endl;
		getline(f,s);
		de.D=s;
		cout<< s <<endl;
		getline(f,s);
		de.DA=s;
		dscau.push_back(de);
		cout<<"moi ban nhap cau tra loi ";
		getline(cin,ans);
		if (ans == de.DA)
			diem++;
	}
	cout << "diem:" <<diem;		
}
void DocDe()
{
	for(int i=0; i<dscau.size(); i++)
		LayDe();
}
int main()
{
	NhapNguoiChoi();	
	LayDe();

//	DocDe();
}

