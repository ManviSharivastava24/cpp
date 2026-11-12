#include <bits/stdc++.h>
using namespace std;
int main(){
    // string s;
   
    // getline(cin,s); //taking input line

    // cin>>s;//taking sinlge string
    // cout<<s;
    //1d array
    // int arr[5];
    //list of strings of not decided size
    // vector<string> nums;
    // string x;
    // while(cin>>x){
    //     nums.push_back(x);
    // }
    // for(int i=0;i<nums.size();i++){
    //     cout<<nums[i]<<" ";
    // }
    //2D ARRAY
    // int n,m;
    // cin>>n>>m;
    // vector<vector<int>> arr(n,vector<int>(m));
    // for(int i=0;i<n;i++){
    //     for(int j=0;j<m;j++){
    //         cin>>arr[i][j];
    //     }
    // }
    //   for(int i=0;i<n;i++){
    //     for(int j=0;j<m;j++){
    //         cout<<arr[i][j];
    //     }
    //     cout<<endl;
    // }
    //3D ARRAY
    // int n,m,k;
    // cin>>n>>m>>k;
    // vector<vector<vector<int>>> dp(n,vector<vector<int>>(m,vector<int>(k,0)));
    //  for (int i = 0; i < n; i++) {
    //     for (int j = 0; j < m; j++) {
    //         for (int l = 0; l < k; l++) {
    //             cout << dp[i][j][l] << " ";
    //         }
    //         cout << endl;
    //     }
    //     cout << endl;
    // }
    // string s="manvi";
    // cout<<s.length()<<endl;
    // cout<<s[0]<<endl;
    // cout<<s.substr(0,2)<<endl;//(start,length)
    // reverse(s.begin(),s.end());
    
    // cout<<s<<endl;
    // sort(s.begin(),s.end());//sorting on the basis of ascii value
    // cout<<s<<endl;
    // string k="MAN";
    // transform(k.begin(),k.end(),k.begin(),::tolower);
    // cout<<k;
    //HASHMAP
    // unordered_map<string,int> mp;
    // mp["manvi"]=10;
    // mp["kavyaraj"]=20;

    // cout<<mp["manvi"]<<endl;
    // vector<int> v={1,2,2,2,3,3,3,4};
    // unordered_map<int,int> mpp;
    // for(int x:v){
    //     mpp[x]++;
    // }
    // mp.size();
// mp.empty();
// mp.erase(1);
// mp.count(2);
// mp.find(2);
// mpp.clear();
// mpp.insert({5,100});
// cout<<mpp[5]<<endl;
// mpp.erase(5);
// cout<<mpp.count(5)<<endl;
// cout<<mpp.empty()<<endl;
// if(mpp.empty()){
//     cout<<"empty";
// }else{
//     cout<<"not";
// }
//ITERATION IN HASHMAP
// unordered_map<int,int> mp;

// mp[1]=2;
// mp[2]=3;
// mp[4]=5;

// for(auto it:mp){//unsorted order
//     cout<<it.first<<" "<<it.second<<endl;
// }
// map<char,int> mpp;//sorted order
// string s="banana";

// for(char c:s){
//     mpp[c]++;
// }

// for(auto it:mpp){
//     cout<<it.first<<" "<<it.second<<endl;
// }
// int mini=INT_MIN;
// cout<<mini<<endl;
// long long maxi=LLONG_MAX;
// cout<<maxi;
// unordered_set<int> s;
// s.insert(1);
// s.insert(2);
// s.insert(3);
// s.insert(4);
// s.insert(5);
// if(s.find(2)==s.end()){
//     cout<<"not found"<<endl;
// }else{
//     cout<<"found"<<endl;
// }
// s.erase(2);
// if(s.count(2)==1){
//     cout<<"present";
// }else{
//     cout<<"not present";
// }

//MAX HEAP IN CPP
// priority_queue<int> pq;
// pq.push(10);
// pq.push(20);
// cout<<pq.top()<<endl;
// cout<<pq.size()<<endl;
// pq.pop();
// cout<<pq.top()<<endl;
// pq.empty();
// cout<<pq.empty()<<endl;
// //MIN  HEAP
// priority_queue<int,vector<int>,greater<int>> pqq;
// pqq.push(10);
// pqq.push(20);
// cout<<pq.top();
//STACK AND QUEUE
// stack<int> st;//push pop top  size empty
// queue<int> q;//push pop front size empty
// int arr[5]={1,3,2,4,5};
// sort(arr,arr+5);//for array
// sort(arr,arr+5,greater<int>());//for descending order
// // //sort(arr.begin(), arr.end());//for vector
// for(int i=0;i<5;i++){
// // cout<<arr[i];
// }
//BINARY SEARCH
// vector<int> v={1,2,3,4};
// cout << binary_search(v.begin(), v.end(), 4)<<endl;//return boolean value//0 or 1
// bool ans = binary_search(v.begin(), v.end(), 4);
// int an=lower_bound(v.begin(), v.end(), 4)-v.begin();//return index
// upper_bound(v.begin(), v.end(), target);
// if (ans) {
//     cout << "Found";
// }
// else {
//     cout << "Not Found";
// }

// cout<<an;
//SORTING CUSTOM OBJECTS/PAIRS
// vector<pair<int,int>> v;

// v.push_back({1, 5});
// v.push_back({2, 3});
// sort(v.begin(), v.end());//by default  it sorts by first element and then by second if firsts are equal
// sort(v.begin(), v.end(), [](pair<int,int> a, pair<int,int> b) {
//     return a.second < b.second;
// });
// // a.second < b.second → ascending order.
// // a.second > b.second → descending order
// sort(v.begin(), v.end(), greater<pair<int,int>>());//in descending order
//DP 
vector<int> dp(n+1,-1);
//graph adjacency list
ArrayList<ArrayList<Integer>> adj=new ArrayList<>();
vector<vector<int>> adj;
    return 0;
}