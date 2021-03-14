# AlexOxi (Contestant)

**Final Standing:** 2nd

# Solutions

## Problem A - Simple Maths (Accepted)

```cs
using System;

namespace Competition
{
    class Program
    {
        int a = 20;
        int b = 22;
        int c = 7;
        int d = 4;
        int e = 8;
        int f = (a + b) / ((e - d) * d) - c;

        Console.WriteLine(f);
    }
}
```

## Problem B - Counting Students (Accepted)

```cs
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

```

## Problem C - Voting (Failed, Output: "FIRST")

```cs
using System;

namespace Competition
{
    class Program
    {
        static void Main(string[] args)
        {
            int n = 5;
            int[] vote1 = { 1, 1, 0, };
            int[] vote2 = { 0, 1, 0 };
            int[] vote3 = { 0, 0, 0 };
            int[] vote4 = { 1, 1, 1 };
            int[] vote5 = { 1, 0, 0 };
            int sum1 = 0;
            int sum2 = 0;

            foreach (int a in vote1)
            {
                if (a == 1)
                {
                    sum1++;
                }
            }

            for (int i = 0; i < 1; i++)
            {
                if (sum1 == 2)
                {
                    Console.WriteLine("FIRST");
                }
                else if (sum1 == 1)
                {
                    Console.WriteLine("ZERO");
                }

            }
            foreach (int a in vote2)
            {
                if (a == 1)
                {
                    sum2++;
                }
            }
        }
    }
}
```

## Problem D, E (Not Submitted)
