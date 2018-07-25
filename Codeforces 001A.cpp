#include<bits/stdc++.h>
using namespace std;

int main(){
    int n, m, a;
    cin >> n >> m >> a;
    if (m % a == 0){
        m /= a;
    }
    else{
        m = m / a + 1;
    }
    if (n % a == 0){
        n /= a;
    }
    else{
        n = n / a + 1;
    }
    long long ans = m * n;
    cout << ans;
}
