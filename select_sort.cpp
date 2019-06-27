void sort(int *input, int *work, int begin, int end)
{
    for (int i = begin; i < end - 1; i++)
    {
        int max = input[i];
        int maxIndex = i;
        for (int r = i + 1; r < end; r++)
        {
            if (max < input[r])
            {
                max = input[r];
                maxIndex = r;
            }
        }
        int tmp = input[i];
        input[i] = input[maxIndex];
        input[maxIndex] = tmp;
    }
}