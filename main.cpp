#include<iostream>
#include<cstdlib>
#include<ctime>
#include<fstream>
#include "console.h"
#include "dichuyen.h"
#include "taomang2chieu.h"
#define MAX 10
using namespace std;

int main()
{
	int table[MAX][MAX],i;
	char ch;
	char c,b;
	do
        {

	cout<<"B-BAT DAU\n"<<endl;
	cout<<"HUONG DAN\n"<<endl;
    cout<<"Di chuyen cac phim len xuong trai phai"<< endl;
    cout<<"An Enter de mo o. Neu 2 o co so giong nhau thi giu nguyen khong up o xuong"<< endl;
    cout<<"Neu hai so khong giong nhau thi up o xuong"<< endl;
    cout<<"Nhan t de quay lai\n"<<endl;
    cout<<"             CHUC CAC BAN MAY MAN"<<endl;
        cin>>c;
        clrscr();
        if(c=='b'||c=='B')
	do
    {
        gotoxy(1,1);
	TaoBang(table);
	InBang(table);
	DiChuyen(table);
	cout << "\nBan co muon choi lai (C/K) :";
	cin >> ch;
	clrscr();
	gotoxy(1,1);
    }
    while (ch == 'c' || ch == 'C');
       if(c=='h'||c=='H')
       {
             fstream myfile;
             myfile  .open("huongdan.txt",ios_base::in);//truy cap vao tep
             string data;
        gotoxy(1,1);
	string line;
	while (!myfile.eof())
	{
		getline(myfile, line);
		data += line;
	}

	myfile.close();

	cout << data;
       }
       cin>>b;

       clrscr();
       gotoxy(1,1);
        }
       while (b=='t'||b=='T');
}
