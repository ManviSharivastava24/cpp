#include<bits/stdc++.h> 
using namespace std;
int main(){
   //pair
//    pair<int ,int> p ={2,3};
//    cout<<p.first<<endl;
//    pair<int,pair<int,int>> pp={1,{2,3}};
//    pair<int,int> arr[]={{1,2},{2,3},{3,4}};
//    cout<<pp.second.first<<endl;
//    cout<<arr[1].second;
//     return 0;

//vector
vector<int> v;
v.push_back(1);
// cout<<v[0];
vector<pair<int,int>> v1;
v1.push_back({1,2});
v1.emplace_back(1,2);

vector<int> v2(5,100);//5 is present 100 times
vector<int> v3(5);//0 is present 5 times
vector<int> v4(v2);
cout<<v4[4];
return 0;
}