﻿// bai4_các phép tính cơ bản sử dụng hàm.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
using namespace std;
double tinhtong(double a, double b) { return a + b; }
double tinhhieu(double a, double b) { return a - b; }
double tinhtich(double a, double b) { return a * b; }
double tinhthuong(double a, double b) { return a / b; }
int main()
{
    double so1, so2;
    //nhap gia tri vao bien
    cout << "nhap so 1:";
    cin >> so1; //5
    cout << "nhap so 2:";
    cin >> so2; //8
    double tong = so1 + so2, hieu = so1 - so2, tich = so1 * so2, thuong = so1 / so2;
    cout << "tong 2 so tren là:" << tong;
    cout << "\nhieu 2 so tren là:" << hieu;
    cout << "\ntich 2 so tren là:" << tich;
    cout << "\nthuong 2 so tren là:" << thuong << endl;
    cout << so1 << "+" << so2 << "=" << tong;
}

// Run program: Ctrl + F5 or Debug > Start Without Debugging menu
// Debug program: F5 or Debug > Start Debugging menu

// Tips for Getting Started: 
//   1. Use the Solution Explorer window to add/manage files
//   2. Use the Team Explorer window to connect to source control
//   3. Use the Output window to see build output and other messages
//   4. Use the Error List window to view errors
//   5. Go to Project > Add New Item to create new code files, or Project > Add Existing Item to add existing code files to the project
//   6. In the future, to open this project again, go to File > Open > Project and select the .sln file
