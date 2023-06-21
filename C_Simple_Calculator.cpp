#include <bits/stdc++.h>
using namespace std;
int main()
{
    long long int a, b;
    cin >> a >> b;
    long long int add = a + b;
    long long int multi = a * b;
    long long int sub = a - b;

    cout << a << " "
         << "+"
         << " " << b << " "
         << "="
         << " " << add << endl
         << a << " "
         << "*"
         << " " << b << " "
         << "="
         << " " << multi << endl
         << a << " "
         << "-"
         << " " << b << " "
         << "="
         << " " << sub << endl;

    return 0;
}