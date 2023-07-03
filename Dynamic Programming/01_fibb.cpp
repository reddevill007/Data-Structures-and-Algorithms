int fibb(int n)
{
    int prev2 = 0;
    int prev = 1;

    if (n == 0)
    {
        return prev2;
    }

    if (n == 1)
    {
        return prev;
    }

    for (int i = 2; i <= n; i++)
    {
        int curri = prev + prev2;
        prev2 = prev;
        prev = curri;
    }

    return prev;
}