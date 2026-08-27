#include<iostream>
using namespace std;
class solution{
    public:
    int naturalSum(int n){
        if(n==0){
            return 0;
        }
        return n+naturalSum(n-1);
    }
};
int main(){
    solution s1;
   int answer =  s1.naturalSum(5);
    cout<<answer;
}