#include<bits/stdc++.h>
using namespace std;
int rec(int i, int ans, int arr[], int size){
    if(i == size) return ans;
    if(arr[i] == ans){
        return rec(i + 1, ans + 1, arr, size);
    }
    return rec(i + 1, ans, arr, size);
}
int main(){
    int n;
    cin >> n;
    int arr[n];
    for(int i = 0; i < n; i++) cin >> arr[i];
    sort(arr, arr + n);
    cout << rec(0, 1, arr, n) << endl;    
}
/*
Time Complexity => O(n*log(n))
Memory Complexity => O(n)
*/
