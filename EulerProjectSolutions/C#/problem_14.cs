using System;

class Program {
    static void Main() {
        int longestChain = 0;
        int startingNumber = 0;

        for (int i = 2; i <= 1000000; i++) {
            long n = i;
            int chainLength = 0;

            while (n != 1) {
                if (n % 2 == 0) n /= 2;
                else n = 3 * n + 1;

                chainLength++;
            }

            if (chainLength > longestChain) {
                longestChain = chainLength;
                startingNumber = i;
            }
        }

        Console.WriteLine($"The starting number with the longest chain is: {startingNumber}");
    }
}
