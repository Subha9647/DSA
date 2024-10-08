#include<bits/stdc++.h>
using namespace std;

int findFibo(int n, vector<int> &dp) {
    if(n<=1) {
        return n;
    }

    if(dp[n] != -1) {
        return dp[n];
    }

    return dp[n] = findFibo(n-1, dp) + findFibo(n-2, dp);
}


int main() {
    int n;
    cin >> n;
    vector<int> dp (n+1, -1);

    cout << findFibo(n, dp) << endl;

    return 0;
}