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
		string, ten;
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
struct ng
{
	string ten;
	int diem;
};

//void DocDe()
//{
//	int de;
//	cout<<"chon" << endl;
//	cin>> de;
//	if(de==1)
//	{
//		ifstream f("Input.txt");
//		string s, De de1;
//		int n;
//		getline(f,s);
//		n=atoi(s);
//		for(int i=0; i<n; i++)
//		{
//			getline(f,s);
//			dscaugoi[i].CH.s;
//		}
//	
//		
//		
//	}
//}
vector <Cauhoi_DA> dscau;
void Xuat(Cauhoi_DA de)
{
	
	string DA;
	cout<<de.cauhoi<<endl;
	cout<< de.cauhoi;
	cout<< de.A;
	cout<< de.B;
	cout<< de.C;
	cout<< de.D;
	cout<<"nhap dap an";
	cin>>DA;

}
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
// xuat cau tra loi ra man hinh

int main()
{
	LayDe();	
//	DocDe();
}

