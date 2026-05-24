#include <bits/stdc++.h>
using namespace std;
int main() 
{
    int n,a,b;
    cin >> n >> a >> b;
    int tot_cst = a * b;
    int ans = n - tot_cst;
    cout << ans << endl;
    return 0;
}