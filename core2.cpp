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
union money//ek time par sirf ek value use kr skte hai//shares memory
{
    int rice;
    char ch;
    float pounds;
}; 
int main(){
    struct employee manvi;
    manvi.id=1;
    manvi.fav='m';
    manvi.salary=120000000;
    cout<<manvi.salary<<endl;
    cout << fixed << setprecision(0) << manvi.salary<<endl;
    enum Meal{breakfast, lunch ,dinner};
    Meal m1=dinner;//beause now all above value became data types
    cout<<breakfast<<endl;
    cout<<lunch<<endl;
    cout<<m1;
    return 0;
}
