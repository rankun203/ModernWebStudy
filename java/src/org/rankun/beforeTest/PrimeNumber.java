package org.rankun.beforeTest;

/**
 * Created on 7/1/15.
 *
 * @author rankun203
 */
public class PrimeNumber {
    public static void main(String... args) {
        int max = 100_000;

        long start = System.currentTimeMillis();

        for (int n = 2; n < max / 2; n++) {

            boolean isPrime = true;
            for (int test = 2; test < n; test++) {
                // 只要发现 n % test == 0 (一旦被整除), 说明不是素数, isPrime 置为 false
                isPrime &= !(n % test == 0);
                if (isPrime) break;
            }

            if (isPrime)
                System.out.println(n + " is a prime number");
        }

        System.out.println("Costs: " + (System.currentTimeMillis() - start) + "ms");
    }
}
