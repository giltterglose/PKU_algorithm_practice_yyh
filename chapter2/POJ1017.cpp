#include<iostream>
#include<cstdlib>
using namespace std;
int main(){
    int n,a,b,c,d,e,f,x,y; 
    //n代表需要的箱子，x表示1*1的数目，y表示2*2的数目
    int u[4]={0,5,3,1};
    //表示3*3的产品数目为4k，4k+1，4k+2，4k+3
    //为3*3产品打开的新箱子里面剩余的2*2的位数
    while(scanf("%d%d%d%d%d%d", &a, &b, &c, &d, &e, &f) != EOF){
        if(a==0 && b == 0 && c == 0 && d == 0 && e == 0 && f == 0) break;
        n = f + e + d + (c+3)/4;
        y = 5 * d + u[c%4];
        //长宽大于或者等于3*3的产品所占新箱子的数目
        if(b>y) n += (b-y+8)/9; //多出来的2*2对应的箱子应该占用的新箱子数目
        x = 36*n-36*f-25*e-16*d-9*c-4*b;//所有剩下的1*1的空格
        if(a>x) n+= (a-x+35)/36;
        cout << n;
    }
    return 0;
}