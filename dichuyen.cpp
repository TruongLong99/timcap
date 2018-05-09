
#include "dichuyen.h"
//xet bang
bool ChienThang(bool open[MAX][MAX])
{
    int i,j;
    for (i=0;i<MAX;i++)
        for (j=0;j<MAX; j++)
            if (!open[i][j]) return false;
    return true;
}
//di chuyen de chon ô
void DiChuyen(int table[MAX][MAX])
{
    bool end = false;
    int x=1,y=1,temp,x_temp,y_temp;
    int d=0;
    char c;
    bool kt=true,open[MAX][MAX]={false};
    while (!end)
    {
    gotoxy(x,y);
    c=getch();//nhap 1 ky tu từ bàn phim

    switch (c)
    {
        case UP:
            if (y>1) y--;
            break;
        case RIGHT:
            if (x<2*MAX-1) x+=2;
            break;
        case DOWN:
            if (y<MAX) y++;
            break;
        case LEFT:
            if (x>1) x-=2;
            break;
        case ENTER:
            if (!open[y-1][x/2])
            {
            cout << table[y-1][x/2];
            open[y-1][x/2] = true;
            if (kt)
            {
            temp = table[y-1][x/2];
            x_temp = x;
            y_temp = y;
            }
            d++;
            if (d%2==0) kt =true;
             else kt = false;
            if (temp != table[y-1][x/2] && kt)
            {
                Sleep(1000);
                gotoxy(x_temp,y_temp);
                cout << (char) 15;
                gotoxy(x,y);
                cout << (char) 15;
                open[y-1][x/2] = false;
                open[y_temp-1][x_temp/2] = false;
            }
            break;
            }
        default:
            cout << "";

    }
    if (ChienThang(open))//neu ham tra ve gia tri true
    {
        end = true;
        clrscr();//xoa man hinh
        cout << "=============================VICTORY==============================";
        Sleep(1000);
        clrscr();
    }
}
}
