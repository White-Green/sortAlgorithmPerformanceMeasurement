void sort(int *input, int *work, int begin, int end)
{
    for (int i = begin; i < end - 1; i++)
    {
        for (int r = end - 1; r > i; r--)
        {
            if (input[r - 1] < input[r])
            {
                int tmp = input[r];
                input[r] = input[r - 1];
                input[r - 1] = tmp;
            }
        }
    }
}