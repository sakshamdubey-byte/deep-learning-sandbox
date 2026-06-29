#include <bits/stdc++.h>
using namespace std;

int k = 7;
string digit;
int dp[20][2][2][7][11];

int solve(int pos, int tight, int leadzero, int rem, int prev)
{
    if (pos == digit.size())
    {
        if (rem == 0)
            return 1;
        else
            return 0;
    }

    if (dp[pos][tight][leadzero][rem][prev + 1] != -1)
        return dp[pos][tight][leadzero][rem][prev + 1];

    int maxdigit;
    if (tight == 1)
        maxdigit = digit[pos] - '0';
    else
        maxdigit = 9;

    int ans = 0;

    for (int d = 0; d <= maxdigit; d++)
    {
        if (!leadzero && prev == d)
            continue;

        int newtight, newleadzero, newrem, newprev;

        if (tight == 1 && d == maxdigit)
            newtight = 1;
        else
            newtight = 0;

        if (leadzero == 1 && d == 0)
            newleadzero = 1;
        else
            newleadzero = 0;

        if (newleadzero)
            newrem = 0;
        else
            newrem = (rem * 10 + d) % k;

        if (newleadzero)
            newprev = -1;
        else
            newprev = d;

        ans += solve(pos + 1, newtight, newleadzero, newrem, newprev);
    }

    return dp[pos][tight][leadzero][rem][prev + 1] = ans;
}

int count(int n)
{
    if (n < 0)
        return 0;

    digit = to_string(n);
    memset(dp, -1, sizeof(dp));

    return solve(0, 1, 1, 0, -1);
}

int main()
{
    int L, R;
    cin >> L >> R;

    cout << count(R) - count(L - 1) << endl;
}