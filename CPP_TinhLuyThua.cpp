// CPP_TinhLuyThua.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
using namespace std;
double tinhluythua(double a, double b);
int main()
{

    double so, somu, luythua = 1;
    cout << "Nhap so:"; cin >> so;
    cout << "Nhap so mu:"; cin >> somu;
    /*
    for (int i = 0; i < somu; i++)
    {
         luythua = luythua * so;
    }
    cout "luythua = " << luythua << endl;
    */
    cout << "Luythua = " << pow(so, somu) << endl;
    cout << "Luythua = " << tinhluythua(so, somu) << endl;
    return 0;
}

double tinhluythua(double a, double b) {
    double giatri = 1;
    for (int i = 0; i < b; i++)
    {
        giatri = giatri * a;
    }
    return giatri;
}