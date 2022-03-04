#include<iostream>
using namespace std;
int main(){
    int n;
    cin >> n; //输入n
    int sum=0;
    for(int i=1; i<=n; i++){
        if(i%7!=0 && i%10!=7 && i/10!=7) sum+=(i*i);//判断是否和7相关，不相关就加起来
    }
    cout << sum << endl;

    return 0;
}