#include<bits/stdc++.h>
using namespace std;
// struct unions and enums
struct employee
{
    int id;
    char fav;
    float salary;
};
// typedef struct employee// shortcut//then we use 
//ep manvi
// {
//     int id;
//     char fav;
//     float salary;
// } ep;
//UNION FOR BETTER MEMORY MANGEMENT
union money//ek time par sirf ek value use kr skte hai
{
    int rice;
    char ch;
    float pounds;
}
int main(){
    struct employee manvi;
    manvi.id=1;
    manvi.fav='m';
    manvi.salary=120000000;
    cout<<manvi.salary<<endl;
    cout << fixed << setprecision(0) << manvi.salary;
    return 0;
}
