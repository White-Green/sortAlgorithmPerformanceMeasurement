void sort(int *input, int *work, int begin, int end)
{
    for (int i = begin; i < end - 1; i++)
    {
        for (int r = i + 1; r < end; r++)
        {
            if (input[i] < input[r])
            {
                int tmp = input[i];
                input[i] = input[r];
                input[r] = tmp;
            }
        }
    }
}