#include<bits/stdc++.h>
using namespace std;
int main(){
    try{
        int a=9;
        int b=0;
        if(b==0){
            throw runtime_error("Division by zero");
        }
        int c=a/b;
        cout<<c;
    }catch (exception &e) {
        cout<< "error:" <<e.what();
        }
        return 0;
}
