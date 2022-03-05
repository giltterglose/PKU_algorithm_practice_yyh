#include<iostream>
#include<vector>
using namespace std;
int main(){
    vector<int> array;
    int n;
    cin >> n;
    int height;
    for(int i=0; i<n; i++){
        cin >> height;
        array.push_back(height);
    }
}