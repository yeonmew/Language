package ch1_4;

public class Shuffle1 {
    public static void main(String[] args) {
        System.out.println("Hello World!, yeonmew");
        int x = 3;
        while (x > 0) {
            if (x > 2) {
                System.out.print("a");
            }

            x = x - 1;
            System.out.print("-");

            if (x == 2) {
                System.out.print("b c");
            }

            if (x == 1) {
                System.out.print("d");
                x = x - 1;
            }
        }
    }
}
