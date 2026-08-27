#include<iostream>
#include<vector>
using namespace std;

vector<int> movezeroes(vector<int>&arr){
        int count = 0;
        int n = arr.size();
        for(int i=0; i<n; i++){
            if(arr[i]!=0){
                swap(arr[i],arr[count]);
                count++;
            }
        }
        return arr;
}

int main(){
    vector<int> arr = {1,2,3,0,0,1,0,1,0,0,0,2};
    vector<int> res = movezeroes(arr);
    for(int i=0; i<res.size(); i++){
        cout<<res[i]<<" ";
    }


}