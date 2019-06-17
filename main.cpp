#include <iostream>
#include "merge_sort_space.cpp"
// #include "merge_sort_noSpace.cpp"
// #include "quick_sort.cpp"
// #include "bubble_sort.cpp"
// #include "select_sort.cpp"
// #include "insert_sort.cpp"

using namespace std;
int main(int argc, char **argv)
{
    int n;
    cin >> n;
    int *input = new int[n], *work = new int[n];
    for (int i = 0; i < n; i++)
        cin >> input[i];
    sort(input, work, 0, n);
    if (argc <= 1 && *argv[1] != '1')
        for (int i = 0; i < n; i++)
            cout << input[i] << endl;
    cout << "end" << endl;
}