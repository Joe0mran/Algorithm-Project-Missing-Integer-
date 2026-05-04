#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin >> n;
    int arr[n];
    bool found[n+10] = {0};
    for(int i = 0; i < n; i++){
        cin >> arr[i];
        if(arr[i] >= 0 && arr[i] <= (n + 1)) found[arr[i]] = true;
    }
    int ans = 1;
    while(found[ans]) ans++;
    cout << ans << endl;
}
/*
Time Complexity => O(n)
Memory Complexity => O(n)
*/
