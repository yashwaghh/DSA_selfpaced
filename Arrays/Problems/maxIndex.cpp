// Maximum Index
// Given an array arr of positive integers. You have to return the maximum of j - i such that arr[i] < arr[j] and i < j.

// Examples:

// Input: arr[] = [1, 10]
// Output: 1
// Explanation: arr[0] < arr[1] so (j-i) is 1-0 = 1.
// Input: arr[] = [5, 4, 3]
// Output: 0
// Explanation: There is no pair that satisfies the given condition.
// Input: arr[] = [34, 8, 10, 3, 2, 80, 30, 33, 1]
// Output: 6
// Explanation: In the given array arr[1] < arr[7] satisfying the required condition(arr[i] < arr[j]) thus giving the maximum difference of j - i which is 6(7-1).
// Constraints:
// 1 ≤ arr.size ≤ 105
// 0 ≤ arr[i] ≤ 109

//Navie Approach
// #include<iostream>
// #include<vector>
// using namespace std;
// class Solution{
// public:
    
//     void maxindex(vector<int> &arr){
//     int diff;
//     int maxdiff=0;
//     for(int i=0; i<arr.size(); i++){
//         diff = 0;
//         for(int j=i+1; j<arr.size(); j++){
//             if(arr[j]>arr[i]){
//                 diff= j-i;
//             }
//         }
//         maxdiff = max(maxdiff,diff);
//     }
//     cout<<maxdiff<<" ";
//     }
// };
// int main(){
//     Solution s1;
//     vector<int> arr = {34, 8, 10, 3, 2, 80, 30, 33, 1};
//     s1.maxindex(arr);
// }
#include <iostream>
#include<vector>
#include<algorithm>
using namespace std;
class Solution{
    public:
    void maxIndex(vector<int> &arr){
        int n = arr.size();
        vector<int> left;
        vector<int> right;
        int smallest =0;
        int largest = n-1;
        for(int i=0; i<n; i++){
            if(arr[i]<arr[smallest]){
                smallest = i;
            }
            left.push_back(arr[smallest]);
        }
        for(int j=n-1; j>=0; j--){
            if(arr[j]>arr[largest]){
                largest = j;
            }
            right.push_back(arr[largest]);
        }
        reverse(right.begin(),right.end());
        for(int i=0; i<n; i++){
            cout<<left[i]<<" ";
        }
        cout<<endl;
        for(int i=0; i<n; i++){
            cout<<right[i]<<" ";
        }
    }
};
int main(){
    Solution s1;
    vector<int> arr = {34, 8, 10, 3, 2, 80, 30, 33, 1};
    s1.maxIndex(arr);
}
//acutual solution 
class Solution {
  public:
    int maxIndexDiff(vector<int>& arr) {
        // code here
       int n = arr.size();
    vector<int> right;
    int rightmax=n-1;
    for(int i=n-1; i>=0; i--){
        if(arr[i]>arr[rightmax]){
            rightmax = i;
        }
        right.push_back(arr[rightmax]);
    }
    reverse(right.begin(),right.end());
    int i=0, j=0; 
    int ans = -1;
    while(i<n and j<n){
        if(right[j]>=arr[i]){
            ans = max(ans,j-i);
            j++;
        }
        else{
            i++;
        }
    }
    return ans;
    }
};