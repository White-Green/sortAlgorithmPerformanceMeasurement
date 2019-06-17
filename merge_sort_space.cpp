void sort(int *input, int *work, int begin, int end)
{
    if (end - begin <= 1)
        return;
    int half = (begin + end) >> 1;
    
    sort(input, work, begin, half);
    sort(input, work, half, end);
    
    int workIndex = 0;
    int indexA = begin, indexB = half;

    while (indexA < half && indexB < end)
        work[workIndex++] = input[indexA] >= input[indexB] ? input[indexA++] : input[indexB++];
    while (indexA < half)
        work[workIndex++] = input[indexA++];
    while (indexB < end)
        work[workIndex++] = input[indexB++];
    
    for (int i = 0; i < end - begin; i++)
        input[begin + i] = work[i];
}