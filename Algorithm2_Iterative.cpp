#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin >> n;
    int arr[n];
    for(int i = 0; i < n; i++) cin >> arr[i];
    int ans = 1;
    sort(arr, arr + n);
    for(int i = 0; i < n; i++){
        if(arr[i] == ans) ans++;
    }
    cout << ans << endl;
}
/*
Time Complexity => O(n*log(n))
Memory Complexity => O(n)
*/
