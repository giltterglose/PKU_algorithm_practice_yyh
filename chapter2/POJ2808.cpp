#include<iostream>
#include<cstring>
using namespace std;
int main(){
    bool exist_tree[10001];//用一个布尔数组定义树的状态，有没有存在
    int L, M;//L表示长度，M表示挖掘次数
    cin >> L >> M;
    int count=0; //用来被挖掉的树的数目
    memset(exist_tree, true, sizeof(exist_tree));//初始化数组
    for(int i=0; i<M; i++){
        int start, end;
        cin >> start >> end;//输入开始和结束节点
        for(int j=start; j<=end; j++){
            if(exist_tree[j]){//如果树存在，就挖掉，然后把存在的状态变成false
                exist_tree[j]=false;
                count++;//被挖去的树的数目
            }
        }
    }
    cout << L-count+1 << endl; //输出剩余树的数目
    return 0;
}