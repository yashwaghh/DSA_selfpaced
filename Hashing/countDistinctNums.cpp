#include<iostream>
#include<unordered_set>
#include<vector>
using namespace std;
class Solution{
    public:
    void countElements(vector<int> &arr){
        unordered_set<int> resultSet;
        for(auto i:arr){
            resultSet.insert(i);
        }
        for(auto x:resultSet){
            cout<<x<<" ";
        }
        cout<<endl;
        cout<<resultSet.size()<<endl;
    }
};
int main(){
    Solution s1;
    vector<int> arr = {10,101,01,56,10,10,20,20,40};
    s1.countElements(arr);
    return 0;
}