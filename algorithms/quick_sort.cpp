#include <algorithm>
#include <iostream>

using namespace std;
void sort(int *input, int *work, int begin, int end)
{
    if (end - begin <= 1)
        return;
        
    int pivotCandidate[3] = {input[begin], input[(begin + end) >> 1], input[end - 1]};
    if (pivotCandidate[0] < pivotCandidate[1])
    {
        int tmp = pivotCandidate[0];
        pivotCandidate[0] = pivotCandidate[1];
        pivotCandidate[1] = tmp;
    }
    if (pivotCandidate[1] < pivotCandidate[2])
    {
        int tmp = pivotCandidate[2];
        pivotCandidate[2] = pivotCandidate[1];
        pivotCandidate[1] = tmp;
    }
    if (pivotCandidate[0] < pivotCandidate[1])
    {
        int tmp = pivotCandidate[0];
        pivotCandidate[0] = pivotCandidate[1];
        pivotCandidate[1] = tmp;
    }
    int pivot = pivotCandidate[1];
    
    int left = begin;
    int right = end - 1;

    while (left <= end - 1 && input[left] > pivot)
        left++;
    while (right >= begin && input[right] < pivot)
        right--;

    while (left < right)
    {
        int tmp = input[left];
        input[left] = input[right];
        input[right] = tmp;

        do
            left++;
        while (left <= end - 1 && input[left] > pivot);
        do
            right--;
        while (right >= begin && input[right] < pivot);
    }

    int split = left;
    sort(input, work, begin, split);
    sort(input, work, split, end);
}