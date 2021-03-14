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