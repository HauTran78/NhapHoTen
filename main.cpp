#include <iostream>
#include<string.h>
using namespace std;

int main()
{
    int tuoi;
    string hoten;
    cout<<"Moi nhap ten:";
    getline(cin,hoten);
    cout<<"Xin Chao "<< hoten <<" dep trai" <<endl;
    cout<<"Xin hoi "<< hoten <<" dep trai bao nhieu tuoi: " <<endl; 
    cin>>tuoi;
    cout<< "Thong tin ca nhan"<<endl;
    cout<<"Ho Ten: "<<hoten<<endl;
    cout<<"Tuoi: "<<tuoi<<endl;

    return 0;
}