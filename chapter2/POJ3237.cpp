#include<iostream>
using namespace std;
int main(){
    bool exist_tree[10001]={true};
    int L, M;
    cin >> L >> M;
    int remain = L+1; 
    for(int i=0; i<M; i++){
        int start, end;
        cin >> start >> end;
        for(int j=start; j<=end; j++){
            if(exist_tree[j]){
                exist_tree[j]=false;
                remain--;
            }
        }
    }
    cout << remain << endl;
    return 0;
}