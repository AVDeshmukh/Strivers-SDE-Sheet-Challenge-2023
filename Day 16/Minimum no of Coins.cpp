#include <bits/stdc++.h> 
int findMinimumCoins(int amt) 
{
    int count=0;
    int coins[] = {1, 2, 5, 10, 20, 50, 100, 500, 1000};
    int n = 9;
    for (int i = n - 1; i >= 0; i--)
    {
        while (amt >= coins[i])
        {
            amt -= coins[i];
            count++;
        }
    }
    return count;
}
