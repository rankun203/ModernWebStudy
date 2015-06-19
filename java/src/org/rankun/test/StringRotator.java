package org.rankun.test;

/**
 * Created by rankun203 on 2/5/15.
 *
 * todo: 支持分段
 *
 * <p/>
 * 初步支持英文符号！http://bbs.csdn.net/topics/230081892
 * <p/>
 * 你说什么呢？我不知道什么你说的什么
 * <p/>
 * <pre>
 * 么你知呢你
 * 　说道？说
 * 　的什我什
 * 　什么不么
 * </pre>
 * <pre>
 * 3*6-3 3*5-3 3*4-3 3*3-3 3*2-3 3*1-3
 * 3*6-2 3*5-2 3*4-2 3*3-2 3*2-2 3*1-2
 *       3*5-1 3*4-1 3*3-1 3*2-1 3*1-1
 * </pre>
 * <pre>
 * 15 12 9  6 3 0
 * 16 13 10 7 4 1
 *    14 11 8 5 2
 * </pre>
 */
public class StringRotator {
    private int blockHeight = 5;

    public StringRotator() {
    }

    public StringRotator(int blockHeight) {
        this.blockHeight = blockHeight;
    }

    public StringRotator setBlockHeight(int blockHeight) {
        this.blockHeight = blockHeight;
        return this;
    }

    /**
     * 旋转字符串
     */
    public String rotate(String str) {
        str = ToSBC(
                str.replace("\n", " ")
        );
        int strLength = str.length();

        int complementNum = (strLength % blockHeight);
        complementNum = complementNum == 0 ? complementNum : blockHeight - complementNum;

        int blockWidth = strLength / blockHeight;
        blockWidth = complementNum == 0 ? blockWidth : blockWidth + 1;

        char[] charArray = str.toCharArray();

        StringBuilder sb = new StringBuilder(str.length() + complementNum);

        for (int hPos = blockHeight; hPos > 0; hPos--) {
            for (int wPos = blockWidth; wPos > 0; wPos--) {
                if (hPos <= complementNum && wPos == blockWidth) {
                    sb.append('　');
                } else {
                    char _char = charArray[blockHeight * wPos - hPos];
                    sb.append(_char);
                }
            }
            sb.append("\r\n");
        }

        return sb.toString();
    }

    /**
     * 半角(DBC case)转全角(SBC case)的函数
     * <p/>
     * 任意字符串 -> 全角字符串
     * <p/>
     * 全角空格为12288,半角空格为32
     * <p/>
     * 其他字符半角(33-126)与全角(65281-65374)的对应关系是：均相差65248
     */
    public String ToSBC(String input) { //半角转全角：
        char[] c = input.toCharArray();
        for (int i = 0; i < c.length; i++) {
            if (c[i] < 127) {
                c[i] = (char) (c[i] + 65248);
                continue;
            }
            switch (c[i]) {
                case '“':
                    c[i] = '「';
                    break;
                case '”':
                    c[i] = '」';
                    break;
                case ' ':
                    c[i] = '　';
                    break;
            }
            //12300/12301
        }
        return new String(c);
    }

}
