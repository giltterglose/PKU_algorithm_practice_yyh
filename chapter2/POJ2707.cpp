#include<iostream>
#include<stdio.h>
#include<math.h>
using namespace std;
int main(){
    int n;
    double a,b,c;
    cin >> n;
    for(int i=1; i<=n; i++){
        cin >> a >> b >> c;
        double delta = b*b-4*a*c;
        if(delta>0){
            double x1=(-b+sqrt(delta))/(2*a);
            double x2=(-b-sqrt(delta))/(2*a);
            printf("x1=%.5f;x2=%.5f\n", x1, x2);
        } 
        else if(fabs(delta)<1e-6){
            double x = -b/(2*a);
            printf("x1=x2=%.5f\n", x);
        }
        else{
            delta = 0-delta;
            double real = -b/(2*a);
            double imagine = sqrt(delta)/(2*a);
            printf("x1=%.5f+%.5fi;x2=%.5f-%.5fi\n", real, imagine, real, imagine);
        }      
    }
    return 0;
}