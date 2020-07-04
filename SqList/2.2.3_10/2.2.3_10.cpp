#include <iostream>

#define N 5
using namespace std;

void Reverse(int R[], int l, int r)
{
    int i, j, temp;
    for (i = l, j = r; i < j; i++, j--)
    {
        temp = R[i];
        R[i] = R[j];
        R[j] = temp;
    }
}

void RCR(int R[], int n, int p)
{
    if (p <= 0 || p >= n)
    {
        cout << "ERROR" << endl;
    }
    else
    {
        Reverse(R, 0, p - 1);
        Reverse(R, p, n - 1);
        Reverse(R, 0, n - 1);
    }
}

int main(void)
{
    int p, i;
    int R[N] = {1, 2, 3, 4, 5};
    cout << "enter p:" << endl;
    cin >> p;
    RCR(R, N, p);
    cout << "----------" << endl;
    for (i = 0; i < N; i++)
    {
        cout << R[i];
        cout << " ";
    }
    return 0;
}