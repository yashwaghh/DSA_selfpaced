#include<iostream>
#include<vector>
using namespace std;
class solution{
    public:
    int normalSubarraySum(vector<int> arr){
        int normalMax = arr[0];
        int maxending = arr[0];
        for(int i=1; i<arr.size(); i++){
            maxending = max(maxending+arr[i],arr[i]);
            normalMax = max(normalMax,maxending);
        }
        return normalMax;
    }
    int circularSubarray(vector<int> arr){
        int minEnding = arr[0];
        int totalsum = arr[0];
        int res = arr[0];
        int CircularsumMin= arr[0];
        for(int i=1; i<arr.size(); i++){
            minEnding = min(minEnding+arr[i], arr[i]);
            totalsum += arr[i];
            CircularsumMin = min(CircularsumMin,minEnding);
        }
        int circularmax = totalsum - CircularsumMin;
         res = max(normalSubarraySum(arr), circularmax);
         return res;
    }
};
int main(){
    solution s1;
    vector<int> arr = {-1, 40, -14, 7, 6, 5, -4, -1};
    
    int finalans = s1.circularSubarray(arr);
    cout<<"The final answer is "<<finalans<<" ";
    return 0;
}