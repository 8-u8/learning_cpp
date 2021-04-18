#include <iostream>
#include <vector>
using namespace std;

int main()
{
    // get input
    int N, v;
    cin >> N >> v;
    vector<int> a(N);

    for (int i = 0; i < N; ++i)
        cin >> a[i];

    // linear search
    bool exist = false; // init value is false
    for (int i = 0; i < N; ++i)
    {
        if (a[i] == v)
        {
            exist = true; // if v found flag.
        }
    }
    //output
    if (exist)
        cout << "Yes" << endl;
    else
        cout << "No" << endl;
}