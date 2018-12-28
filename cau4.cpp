//file txt co so do thi trong thanh pho
// cac dinh la ten cua thanh pho
// hang la cac trong so
#include <iostream>
#include <stdlib.h>
#include <string.h>
#include <fstream>
#include <vector>
using namespace std;
int a[10][10];
	int n;
	fstream fi;
//ifstream fi("DoThi.txt")

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
