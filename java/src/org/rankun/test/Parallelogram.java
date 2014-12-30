package org.rankun.test;

/**
 * Created by rankun203 on 12/25/14.
 * Print a Parallelogram figure.
 */
public class Parallelogram {
    public static void main(String[] args) {
        int length = 10;
        int height = 5;

        for (int i = 0; i < height; i++) {
            printPattern(false, i, 0, 1, " ", false);
            if (i == 0 || i == height - 1) {
                printPattern(true, 0, length, 1, "*", false);
            } else {
                System.out.print("*");
                printPattern(true, 0, length - 2, 1, " ", false);
                System.out.print("*");
            }
            System.out.println();
        }
    }

    /**
     * Print a batch of pattern with given params.
     * @param ascending
     * @param start
     * @param end
     * @param step
     * @param pattern
     * @param putBreak
     */
    private static void printPattern(boolean ascending, int start, int end, int step, String pattern, boolean putBreak) {
        if (ascending) {
            for (int i = start; i < end; i = i + step) {
                System.out.print(pattern);
            }
        } else {
            for (int i = start; i > end; i = i - step) {
                System.out.print(pattern);
            }
        }
        if (putBreak) {
            System.out.println();
        }
    }
}
