package org.rankun.beforeTest;

import java.util.LinkedList;
import java.util.List;

/**
 * Created on 7/1/15.
 *
 * @author rankun203
 */
public class PrimeNumberJava8 {
    public static void main(String... args) {
        int max = 100_000;

        List<Integer> intList = new LinkedList<>();
        for (int i = 2; i < max / 2; i++) {
            intList.add(i);
        }

        long start = System.currentTimeMillis();

        intList.parallelStream().forEach(n -> {
            boolean isPrime = true;
            for (int test = 2; test < n; test++) {
                // 只要发现 n % test == 0 (一旦被整除), 说明不是素数, isPrime 置为 false
                isPrime &= !(n % test == 0);
                if (isPrime) break;
            }

            if (isPrime)
                System.out.println(n + " is a prime number");
        });

        System.out.println("Costs: " + (System.currentTimeMillis() - start) + "ms");
    }
}
