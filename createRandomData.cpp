#include <iostream>
#include <numeric>
#include <algorithm>
#include <random>
#include <string>

using namespace std;
int main(int argc, char **argv)
{
    int n;
    if (argc >= 2)
        n = stoi(argv[1]);
    else
        cin >> n;
    int *list = new int[n];
    cout << n << endl;
    iota(list, list + n, 1);

    std::random_device seed_gen;
    std::mt19937 engine(seed_gen());
    std::shuffle(list, list + n, engine);

    for (int i = 0; i < n; i++)
        cout << list[i] << endl;
}