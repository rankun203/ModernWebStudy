package org.rankun.test;

import org.junit.Test;

/**
 * Created by rankun203 on 2/1/15.
 */
public class CharStringTest {
    @Test
    public void singleTest() {
        echo(new StringRotator(15).rotate("金刚萨埵，又称执金刚菩萨、金刚勇猛心菩萨、金刚手秘密主、金刚上首、金刚藏、秘密主等。是佛教的大菩萨，以执金刚神的外型出现，通常身现一手持铃，一手持金刚杵之相，象征“坚固不坏之菩提心”。他与观世音菩萨、文殊菩萨，合称三族性尊，密宗以他为最初的起源。"));
    }

    public void echo(String str) {
        System.out.println(str);
        System.out.println();
    }
}
