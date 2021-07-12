void arrange(int arr[], int n)
{
    int i = 0, j = n - 1;
    int num = 1;
    while (i < j)
    {
        arr[i] = num;
        num++;
        i++;
        arr[j] = num;
        num++;
        j--;
    }
    if (i == j)
    {
        arr[i] = num;
    }
}