// SQUARE ROOT OF A NUMBER USING BINARY SEARCH
#include <iostream>
using namespace std;
int findSqrt(int target)
{
    int s = 0;
    int e = target;
    int mid = s + (e - s) / 2;
    int ans = -1;
    while (s <= e)
    {
        if (mid * mid == target)
        {
            return mid;
        }
        if (mid * mid < target)
        {
            s = mid + 1;
            ans = mid;
        }
        else
        {
            e = mid - 1;
        }
        mid = s + (e - s) / 2;
    }
    return ans;
}
int main()
{
    int n;
    cout << "enter the number" << endl;
    cin >> n;

    int ans = findSqrt(n);
    cout << "sqrt is " << ans << endl;
    // PRECISION
    int precision;
    cout << "Enter the number of floating digits in precison " << endl;
    cin >> precision;
    double step = 0.1;
    double finalAns = ans;
    for (int i = 0; i < precision; i++)
    {

        for (double j = finalAns; j * j <= n; j = j + step)
        {
            finalAns = j; 
        } 
        step = step / 10;
    }
    cout << "Final ans is. " << finalAns << endl;
}