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
