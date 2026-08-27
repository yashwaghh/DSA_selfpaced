// #include<iostream>
// #include<vector>
// using namespace std;

// void rotateByD(vector<int> &arr, int d){

//     for(int i=1; i<=d; i++){
//     int temp = arr[0];
//     for(int i=1; i<arr.size(); i++){
//         arr[i-1] = arr[i];
//     }
//     arr[arr.size()-1] = temp;
// }
//     for(int i=0; i<arr.size(); i++){
//         cout<<arr[i]<<" ";
//     }
// }

// int main(){
//     vector<int> arr = {1,2,3,5,6,7};
//     rotateByD(arr,3);
// }


#include<iostream>
#include<vector>
using namespace std;

void rotateByD(vector<int> &arr, int d){
    int new_index;
    int n = arr.size();
    vector<int> newArr(n);
        for(int i=0; i<n; i++){
            new_index = (i-d+n)%n;
            newArr[new_index] = arr[i];
        }
        for(int i=0; i<newArr.size(); i++){
            cout<<newArr[i]<<" ";
        }
}
int main(){
     vector<int> arr = {1,2,3,5,6,7};
    rotateByD(arr,2);
}