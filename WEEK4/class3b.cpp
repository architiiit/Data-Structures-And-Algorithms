// DIVIDE 2 NUMBERS USING BINARY SEARCH GIVEN DIVIDEND AND DIVISOR
#include <iostream>
using namespace std;
int solve(int dividend, int divisor)
{
    int s = 0;
    int e = abs(dividend);
    int mid = s + (e - s) / 2;
    int ans = 0;
    while (s <= e)
    {
        if (abs(mid * divisor) == abs(dividend))
        {
            ans = mid;
            break;
        }
        if (abs(mid * divisor) > abs(dividend))
        {
            // left search
            e = mid - 1;
        }
        else
        {
            ans = mid;
            // store answer
            // right search
            s = mid + 1;
        }
        mid = s + (e - s) / 2;
    }
    if ((divisor < 0 && dividend < 0) || (divisor > 0 && dividend > 0))
        return ans;
    else
    {
        return -ans;
    }
}
int main()
{
    int dividend = -1;
    int divisor = 1;

    int ans = solve(dividend, divisor);
    cout << "ans is " << ans << endl;
    double finalans = ans;
    double step = 0.1;
    int precision;
    cout << "give precision" << endl;
    cin >> precision;
    for (int i = 0; i < precision; i++)
    {
        for (double j = finalans; j * divisor <= dividend; j = j + step)
        {
            finalans = j;
        }
        step = step / 10;
    }
    cout << "final answer is " << finalans << endl;
    return 0;
}
 