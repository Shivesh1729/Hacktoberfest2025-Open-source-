//Romove duplicate element in an array and return that array where no element is duplicate
#include<bits/stdc++.h>
using namespace std;
vector<int> removeDuplicates(vector<int> &arr) {
        int i=0;
        for(int j = 1 ; j < arr.size() ; j++ ){
            if(arr[i] != arr[j] ){
                swap (arr[i+1], arr[j]);
                i++;
            }
        }
    arr.erase(arr.begin()+ (i+1), arr.end());
    return arr;   
}
int main(){
    vector<int> arr = {1,  2,  2,  3, 4,  5, 6, 6};
    vector<int> ans = removeDuplicates(arr);
    for(auto i : ans){
        cout<<i<<" ";
    }
    
    return 0;
}