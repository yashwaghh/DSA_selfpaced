#include<iostream>
#include<vector>
using namespace std;
vector<int> pattern(int n){
    vector<int> res;
    if(n<=0){
        res.push_back(0);
        return res;
    }
    res.push_back(n);
    pattern(n-5);
    res.push_back(n);
    return {res};
}
int main(){
    
    vector<int> temp = pattern(10);
}