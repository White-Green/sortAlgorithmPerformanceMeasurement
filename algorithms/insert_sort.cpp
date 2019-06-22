void sort(int *input, int *work, int begin, int end)
{
    for (int i = begin; i < end; i++)
    {
        int target = input[i];
        int index = begin;
        while (index < i && input[index] >= target)
            index++;
        for (int r = i - 1; r >= index; r--)
            input[r + 1] = input[r];
        input[index] = target;
    }
}