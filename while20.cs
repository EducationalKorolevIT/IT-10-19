using System;

namespace while20
{
    class Program
    {
        static void Main(string[] args)
        {
            int n = 0;
            n = Convert.ToInt32(Console.ReadLine());
            while ((n > 0) & ((n % 10) != 2))
            {
                n++;
                {
                    n /= 10;
                    
                }
                if((n > 0) & ((n % 10) == 2))
                {
                    Console.WriteLine("TRUE");
                }

                else
                {
                    Console.WriteLine("FALSE");
                }
            }
        }
    }
}