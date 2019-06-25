void sort(int *input, int *work, int begin, int end)
{
    for (int i = begin; i < end; i++)
    {
        int j = i;
        while (j > begin && input[j] > input[j - 1])
        {
            int tmp = input[j];
            input[j] = input[j - 1];
            input[j - 1] = tmp;
            j--;
        }
    }
}