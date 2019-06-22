#include <iostream>
#if USE_MERGE_SORT_SPACE
#include "algorithms/merge_sort_space.cpp"
#elif USE_MERGE_SORT_NO_SPACE
#include "algorithms/merge_sort_noSpace.cpp"
#elif USE_QUICK_SORT
#include "algorithms/quick_sort.cpp"
#elif USE_BUBBLE_SORT
#include "algorithms/bubble_sort.cpp"
#elif USE_SELECT_SORT
#include "algorithms/select_sort.cpp"
#elif USE_INSERT_SORT
#include "algorithms/insert_sort.cpp"
#endif

using namespace std;
int main(int argc, char **argv)
{
    int n;
    cin >> n;
    int *input = new int[n], *work = new int[n];
    for (int i = 0; i < n; i++)
        cin >> input[i];
    sort(input, work, 0, n);
    if (argc >= 2 && *argv[1] != '1')
        for (int i = 0; i < n; i++)
            cout << input[i] << endl;
    delete[] input;
    delete[] work;
}
