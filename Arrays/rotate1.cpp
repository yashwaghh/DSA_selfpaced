#include<iostream>
#include<vector>
using namespace std;

class solution{
    public:
    vector<int> leftRotate(vector<int>&arr){
        int n = arr.size();
        int temp = arr[0];
        for(int i=1; i<n; i++){
            arr[i-1] = arr[i];
        }
        arr[n-1] = temp;
        return arr;
    }
};
int main(){
    class solution s1;
    vector<int> arr = {1,3,2,4,};
    vector<int> res = s1.leftRotate(arr);
    for(int i=0; i<res.size(); i++){
        cout<<arr[i]<<" ";
    }
}