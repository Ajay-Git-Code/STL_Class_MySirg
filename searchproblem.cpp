#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main()
{
    int test, n, temp;
    cin >> test;
    while (test)
    {
        cin >> n;
        vector<int> a;
        vector<int>::iterator it;
        for (int i = 0; i < n; i++)
        {
            cin >> temp;

            it = upper_bound(a.begin(), a.end(), temp);
            if (it == a.end())
            {
                a.push_back(temp);
            }
            else
            {
                *it = temp;
            }
        }
        cout << a.size();
        for (it = a.begin(); it != a.end(); it++)
        {
            cout << " " << *it;
        }
        cout << endl;
        test--;
    }

    return 0;
}

//     if (i == 0)
//     {
//         a.push_back(x);
//     }
//     else
//     {
//         for (it = a.begin(); it != a.end(); it++)
//         {
//             if (x < *it)
//             {
//                 a.erase(it);
//                 a.insert(it, x);
//                 break;
//             }

//         }
//         if(it == a.end())
//         {
//            a.push_back(x);
//         }
//     }
// }
