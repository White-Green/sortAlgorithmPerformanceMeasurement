#include <iostream>
#include <string>

using namespace std;
int main(int argc, char **argv)
{
    int n;
    if (argc >= 2)
        n = stoi(argv[1]);
    else
        cin >> n;
    cout << n << endl;
    for (int i = n; i >= 1; i--)
        cout << i << endl;
}