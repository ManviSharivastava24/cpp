#include<bits/stdc++.h> 
using namespace std;
//function template
// template <class T>
// T sum(T a,T b){//both a and b should be of same type
//     cout<<"total is:"<< a+b;
// }
//CLASS TEMPLATE
template <class X>
class Demo{
    private:
    X num1,num2;
    public:
     Demo(X n1,X n2){
        num1=n1;
        num2=n2;
    }
    void check()
    {
        if(num1>num2){
            cout<<num1<<"is the largest"<<endl;
        }else{
            cout<<num2<<"is the largest"<<endl;
        }
    }
};
int main(){
    // int *nptr;//declare a ptr
    // nptr=new (nothrow) int;
    // if(nptr==nullptr){
    //     cout<<"null pointer";
    // }
    // // cout<<nptr<<endl;
    // // cout<<*nptr;
    // delete nptr;
    // return 0;
    //TEMPLATE IN CPP

    //  sum(2.7,3.5); function template
    //CLASS TEMPLATE
    Demo <float> obj1(5.2,3.3);
    Demo<int> obj2(6,3);
    obj1.check();
    obj2.check();
    return 0;

}