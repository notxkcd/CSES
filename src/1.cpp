#include <iostream>
using namespace std;

void solve()
{
    unsigned long long n;
    cin >> n;
    printf("%lld ", n);
    while (n != 1)
    {

        if (n % 2 == 0)
        {
            n = n / 2;
            printf("%lld ", n);
        }
        else

        {
            n = (n * 3) + 1;
            printf("%lld ", n);
        }
    }
}

int main()
{
    solve();
    return 0;
}
