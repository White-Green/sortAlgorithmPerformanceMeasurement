void sort(int *input, int *work, int begin, int end)
{
    if (end - begin <= 1)
        return;
    int half = (begin + end) >> 1;

    sort(input, work, begin, half);
    sort(input, work, half, end);

    int workIndex = 0;
    int indexA = begin, indexB = half;

    while (indexA < indexB && indexB < end)
    {
        if (input[indexB] > input[indexA])
        {
            int tmp = input[indexB];
            for (int i = indexB - 1; i >= indexA; i--)
            {
                input[i + 1] = input[i];
            }
            input[indexA] = tmp;
            indexB++;
        }
        indexA++;
    }
}