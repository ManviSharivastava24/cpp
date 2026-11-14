//when a program runs variables are stored in RAN which is atemporary memory so to store it in haed disk we use file handling
//when needed we can access files from permanent memory as well
#include<bits/stdc++.h>
#include<iostream>
#include<fstream>
using namespace std;
 int main()
 {
    // ofstream fout;//created object of ofstream
    // //cout dislpaly outpu similary fout write chnages in file
    // fout.open("demo.dat");//created a file
    // fout<<"welcome to cpp";//write into file
    //NOW TO READ FROM FILE
    ifstream fin;
    char ch;
    fin.open("demo.dat");
    //now to read
    // fin>>ch;//file se input lekr variable mie store kr rhe hai
    ch=fin.get();//this will also read spaces
    while(!fin.eof()){
       cout<<ch;
    //    fin>>ch;
    ch=fin.get();//to read spaces as well
    }
 //or shortcut
 //ifstream fin;
//  char ch;
//  fin.open("demo.dat");
//  while(!fin.eof()){
//     ch=fin.get();
//     cout<<ch;
//  }
    return 0;
 }