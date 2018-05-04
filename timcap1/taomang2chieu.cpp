#include"taomang2chieu.h"
#include<cstdlib>
#include<ctime>
#include<iostream>
using namespace std;
// tao bang so ngau nhien
void TaoBang(int table[MAX][MAX])
{
    bool kiemtra[MAX][MAX] = {false};
    srand(time(0));
    int i,j,x,y;
    for (i = 0 ; i < MAX ; i++)
        for (j=0; j< MAX ; j++ )
    {
        if (kiemtra[i][j] == false)
        {
        table[i][j] = rand() % 9 + 1;
        kiemtra[i][j] = true;
        do
        {
            x = rand() % MAX;
            y = rand() % MAX;
        }
        while (kiemtra[x][y]);
        table[x][y] = table [i][j];
        kiemtra[x][y] = true;
        }
    }
}
//in mang duuoi dang dau
void InBang(int table[MAX][MAX])
{
    int i,j;
    for (i=0;i<MAX;i++)
    {
        for (j=0;j<MAX;j++)
        {
            cout << (char) 15 << " ";
        }
        cout << endl;
}
}
