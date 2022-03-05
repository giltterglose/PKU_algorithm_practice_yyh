#include<iostream>
using namespace std;
bool is_leap_year(int a){
    if((a%100==0 && a%400!=0) || a%4!=0) return false;
    else if((a%4 == 0 && a%100!=0)||(a%400)==0) return true;
    else if(a%3200==0) return false;
}
int main(){
    int a;
    cin >> a;
    if(is_leap_year(a)) cout << "Y" << endl;
    else cout << "N" << endl;
    return 0;
}