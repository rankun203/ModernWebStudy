package org.rankun.test;

import org.junit.Test;

import java.util.*;
import java.util.function.Consumer;
import java.util.stream.Collectors;
import java.util.stream.Stream;

/**
 * Created by rankun203 on 4/13/15.
 */
public class StreamTest {

    @Test
    public void streamTest() {
        List<String> books = Arrays.asList(
                "The Holy Cow: The Bovine Testament",
                "True Hip Hop",
                "Pregnancy For Dummies", // New book at index 2
                "The Big Book of Green Design"
        );

        Stream.concat(
                Stream.concat(
                        books.stream().limit(2),
                        Stream.of("Pregnancy For Dummies")
                ),
                books.stream().skip(3)
        ).collect(Collectors.toList());

        List<String> bookList = new ArrayList<>();
        for (String book : books) {
            bookList.add(book);
        }

        List<String> bookList1 = books.stream().collect(Collectors.toList());


        System.out.println(books);
        System.out.println(bookList);
        System.out.println(bookList1);
    }

    /**
     * Thread
     */
    @Test
    public void lambdaTest() {
        new Thread(
                new Runnable() {
                    @Override
                    public void run() {
                        for (int i = 0; i < 10; i++) {
                            System.out.println("run: " + i);
                            sleep(1000);
                        }
                    }
                }
        ).start();

        new Thread(() -> {
            for (int i = 0; i < 10; i++) {
                System.out.println("lambda: " + i);
                sleep(1000);
            }
        }).start();

        for (int i = 0; i < 10; i++) {
            System.out.println("main: " + i);
            sleep(1000);
        }
    }


    @Test
    public void lambdaListTest1() {
        List<Integer> ints = Arrays.asList(
                1, 2, 4, 3, 6, 4, 4, 5, 8, 9, 65, 3, 4, 6, 7, 8, 9, 0, 12
        );

        Collections.sort(ints, (x, y) -> x - y);

        Collections.sort(ints, new Comparator<Integer>() {
            @Override
            public int compare(Integer o1, Integer o2) {
                return 0;
            }
        });
        StringBuilder sb = new StringBuilder();
        ints.forEach(sb::append); // TODO
        System.out.println(sb);

        StringBuilder sf = new StringBuilder();
        for (Integer tmp : ints) {
            sf.append(sf);
        }
        ints.forEach(new Consumer<Integer>() { // TODO
            @Override
            public void accept(Integer integer) {
                sf.append(integer);
            }
        });
        System.out.println(sf);
    }

    @Test
    public void testList3() {
        Arrays.asList("Zhou", "Jun", "Kun", "Aliza", "Lai")
                .stream()
                .sorted((a, b) -> a.charAt(0) - b.charAt(0))
                .forEach(System.out::println);

    }

    public void sleep(int mills) {
        try {
            Thread.sleep(mills);
        } catch (InterruptedException e) {
            e.printStackTrace();
        }
    }

    @Test
    public void fpTest1() {
        int numbers[] = {1, 2, 3, 4, 5};

        OptionalInt total = Arrays.stream(numbers).reduce((sum, n) -> sum + n);
        System.out.println(total.getAsInt());

        int[] doubled = Arrays.stream(numbers).map((n) -> n * 2).toArray();
        System.out.println(Arrays.toString(doubled));
    }

}
