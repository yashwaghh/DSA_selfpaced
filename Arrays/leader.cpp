#include<iostream>
#include<vector>
using namespace std;

void printLeaders(vector<int> &arr){
    int n = arr.size();
    int max_right = arr[n-1];
    cout<<max_right<<" ";
    for(int i=n-2; i>=0; i--){
        if(max_right<arr[i]){

            max_right = arr[i];
            cout<<max_right<<" ";
        }
    }
}
int main(){
    vector<int> arr = {1,2,4,21,4,6,13,6,2};
    printLeaders(arr);
}