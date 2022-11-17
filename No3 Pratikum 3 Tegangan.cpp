#include<iostream>
#include<math.h>
using namespace std;

int main (){
    float I, V, R;

//Program Mencari Tegangan
cout<<"Program Mencari Tegangan"<<endl;
cout<<"===================="<<endl;

cout<<"Input Arus \t: ";
cin>>I;

cout<<"Input Hambatan \t: ";
cin>>R;

//Rumus
V = I*R;

cout<<"Tegangan \t: "<<V<<endl;

return 0;



}

