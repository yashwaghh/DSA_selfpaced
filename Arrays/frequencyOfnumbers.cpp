#include<iostream>
#include<vector>
using namespace std;

void frequency(vector<int> &arr){
    int count =1;
    int k;
    for(int i=1; i<arr.size(); i++){
        
       if(arr[i-1]==arr[i]){
        count++;
       }
       if(arr[i-1]!=arr[i]){
        cout<<arr[i-1]<<" "<<count<<endl;
        count = 1;
       }

    }
    
}
int main(){
    vector<int> arr = {1, 1, 1, 2, 3, 3, 5, 5, 8, 8, 8, 9, 9, 10,10} ;
    frequency(arr);
}