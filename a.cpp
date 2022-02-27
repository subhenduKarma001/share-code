#include<bits/stdc++.h>
using namespace std;

void solve() {
    int n;
    cin>>n;

    if(n==1) {
        int a;
        cin >> a;
        cout << a << "\n";
        return ;
    }

    vector<int> arr(n+1);
    
    for(int i=1;i<=n;i++) {
        cin>>arr[i];
    }

    int l=0,r=0;
    int check = true;

    for(int i=1;i<=n;i++) {
        if(arr[i]!=i && check) {
            l=i;
            check = false;
        }
        if(!check && arr[i] == l) {
            r = i;
        }
    }

    while(l<=r) {
        int temp = arr[l];
        arr[l] = arr[r];
        arr[r] =temp;
        l++;
        r--;
    }

    for(int i=1;i<=n;i++) { 
        cout << arr[i] << " ";
    }
    
    cout << "\n";
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
    int t=1;
    cin >> t;
    for(int i=1; i<=t; ++i) {
        //cout << "Case #" << t << ": ";
        solve();
    }
    return 0;
}