#include<bits/stdc++.h>
using namespace std;
// void printName(){
//     cout<< "hey manvi";
// }

// main(){
//     printName();
//     return 0;
// }
// int add(int a,int b){
//     int ans=a+b;
//     return ans;
// }
// int main(){
//     int n;
//     int m;
//     cin>>n>>m;

// cout<<add(n,m);
//     return 0;
// }
// int main(){
//     string s="manvi";
//     s[0]='s';
//     cout<<s;
//     return 0;
// }
//pass by value;
void doSome(string s){
   s[0]='s';
   cout<<s<<endl;
}
//pass by ref
void doSomething(string &s){//same refernce is ent so change will chnage the orginal s
    s[0]='s';
    cout<<s<<endl;
}
int main(){
    // string s="manvi";
    // doSome(s);//copied value of s is sent with differnet address or ref so modification in s doesnt change original s
    // doSomething(s) ;
    // cout<<s;
    // return 0;
    int arr[5];
    for(int i=0;i<5;i++){
        cin>>arr[i];
    }
    for(int i=0;i<5;i++){
        cout<<arr[i]<<endl1;
    }
    return 0;
}