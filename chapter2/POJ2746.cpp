#include<iostream>
#include<cstdlib>
#include<cstring>
#include<cstdio>
using namespace std;
bool is_out[305];//状态数组，标记所有猴子的状态
void init(){
    for(int i=0; i<305; i++) is_out[i]=false;
}//进行初始化，没有被淘汰的为false
int main(){
    int m, n;
    while(scanf("%d%d", &n, &m) != EOF){
        if(m==0 && n==0) break;//输入0停止
        int index = -1;//表示点名的索引
        int count = 0;
        init();
        for(int i=1; i<n; i++){
            count = 0;
            while(count != m){
                index = (index+1)%n;//利用索引值取模，就像循环列表一样，选择合适的进行访问
                if(!is_out[index]){//如果没有被访问，就进行加一，一直访问
                    count++;
                    if(count==m){//点到了那个猴子
                        is_out[index]=true;//直接淘汰，开始新一轮
                    }
                }
            }
        }

        for(int j=0; j<n; j++){
            if(!is_out[j]) {cout << j+1 << endl; break;}//最终打印留下的猴子
        }
    }
    return 0;
}