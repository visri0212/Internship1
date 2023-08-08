#include <iostream>
using namespace std;
int condition2(int[][9], int , int );
int condition1(int a[][9], int k, int l, int n)
{
    int i,j,c1=0,c2=0,c3=0,x=2;
    for (i = 0; i < 3; i++)
    {
        for (j = 0; j < 3; j++)
        {
            if (n == a[i+k-(k%3)][j+l-(l%3)])
            {
                c1 = 1;
                break;
            }
        }
    }
    for(i = 0; i < 9 ; i++)
    {
        if(n==a[k][i])
        {
            c2 = 1;
            break;
        }
    }
    for (i = 0; i < 9; i++)
    {
        if (n == a[i][l])
        {
            c3 = 1;
            break;
        }
    }
    if (c1 == 0 && c2 == 0 && c3 == 0)
    {
        a[k][l] = n;
        x = condition2(a, k, l);
        if (x == 0)
            a[k][l] = 0;
    }

    return x;
}
int condition2(int a[][9], int k, int l)
{
    int i,x=2;
    if (a[k][l] == 0)
    {
        for (i = 1; i <= 9; i++)
        {
            x= condition1(a, k, l, i);
            if (x == 1)
                return 1;
        }
        return 0;
    }
    else
    {
        l++;
        if (l > 8)
        {
            k++;
            if (k > 8)
                return 1;
            l = l % 9;
        }
        x = condition2(a, k, l);
        return x;

    }
}
int main()
{
    int x, i, j;
    int a[9][9];
    cout<<"Enter Suduko(For Blank Spaces use : 0)"<<endl;
    for (i = 0; i < 9; i++)
    {
        for (j = 0; j < 9; j++)
        {
            cin >> a[i][j];
        }
    }
    x = condition2(a, 0, 0);
    if (x == 0)
    {
        cout << "no solution  exists " << endl;
    }
    else
    {
        cout << endl << "Solution for this is :" << endl;
        for (i = 0; i < 9; i++)
        {
            for (j = 0; j < 9; j++)
            {
                cout << a[i][j] << " ";
            }
            cout << endl;
        }
    }
    return 0;
}