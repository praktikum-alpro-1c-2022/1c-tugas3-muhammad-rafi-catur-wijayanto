#include<iostream>
#include<math.h>
using namespace std;

int main (){
    float I, V, R;

//Program Mencari Arus
cout<<"Program Mencari Arus"<<endl;
cout<<"===================="<<endl;

cout<<"Input Tegangan \t: ";
cin>>V;

cout<<"Input Hambatan \t: ";
cin>>R;

//Rumus
I = V/R;

cout<<"Arus \t: "<<I<<endl;

return 0;



}
