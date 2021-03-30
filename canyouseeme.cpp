#include <iostream>
#include <map>
using namespace std;

int main()
{
    int test,q;
    long n;
    cin >> test;
    while (test)
    {
        cin >> n >> q;
        map<int, int> files;
        while (n != 0)
        {
            files[n % 10]++;
            n = n / 10;
        }
        cout << files[q] << endl;
        --test;
    }
    return 0;
}