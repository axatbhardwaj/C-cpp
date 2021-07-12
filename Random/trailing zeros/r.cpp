
int factorial(int n)
{
    if (n == 0)
    {
        return 1;
    }
    return n * factorial(n - 1);
}

int n = factorial(input1);

int trz()
{
    int x = 0;
    int q = 0;
    while (n != 0)
    {
        q = n % 10;
        if (q == 0)
        {
            x++;
        }
        else
        {
            return x;
            exit();
        }

        n = n / 10;
    }
}

int main()
{
    int y;
    std::cin >> y;
    int xx = factorial(y);

    trz(xx);
}