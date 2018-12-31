//file txt co so do thi trong thanh pho
// cac dinh la ten cua thanh pho
// hang la cac trong so
#include <iostream>
#include <stdlib.h>
#include <string.h>
#include <fstream>
#include <vector>
// Tao struct Cap{ Dinh, tang)
// Tao ra  vector <cap> Danh sach de xet trong qua trinh xu li
// Tao  bien char kieu Cap
// Gan cung dinh dau tien vao char
// Xet cac dinh chua duoc chon
// Kiem tra xem co duong di tu dinh duoc chon toi cac dinh con lai
// Neu co duong di -> gan dinh dang xet i, chon tang = chon, tang+a[i][chondinh]
//nguoc lai chon tang = 0;
// Kiem tra lan luot cac phim tu trang vector chon ra phan tu co tong nho nhat va i=0 dua vao ds chon.
using namespace std;
int a[10][10];
	int n;
	fstream fi; //Nhap file
//ifstream fi("DoThi.txt")
//Tao luu file .txt
void TaoMoi(/*int a[][], int &n*/)
{
	cout<<"nhap n";
	cin>>n;
	fi.open("DoThi.txt", ios::out);
	fi<<n<<endl;
	for(int i=0; i<n; i++)
	{
		for(int j=0; j<n; j++)
		{
		cout<<"trong so "<<i <<"den" <<j <<":";
		cin>>a[i][j];
		fi<<a[i][j]<<" ";
		}
		fi<<endl;
	}
	fi<<endl;
	fi.close();
}
// Doc file txt
void DocFile()
{
		for(int i=0; i<n; i++)
		{
			for(int j=0; j<n; j++)
			{
				fi>>a[i][j];
			}
		
		}
			fi.close();
}
// in do thi ra man hinh
void XuatDoThi()
{
	for(int i=0; i<n;i++)
	{
		for(int j=0; j<n; j++)
		cout<<a[i][j]<< " ";
		cout<<endl;
	}
	//	cout<<endl;
}

int main()
{
	TaoMoi();
	fi>>n;
	DocFile();
	XuatDoThi();
}
