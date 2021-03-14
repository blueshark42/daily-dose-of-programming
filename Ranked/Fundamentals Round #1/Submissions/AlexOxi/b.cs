using System;

namespace Competition
{
    class Program
    {
		int n = 20;
        int[] arr = { 7, 7, 5, 7, 5, 5, 5, 7, 5, 7, 7, 5, 7, 5, 5, 7, 7, 7, 5, 5 };
        int girls = 0;
        int boys = 0;

        for (int i = 0; i < n; i++)
        {

            if (arr[i] == 7)
            {
                boys++;
            }
            else girls++;

        }
        Console.WriteLine(boys);
        Console.WriteLine(girls);
    }
}