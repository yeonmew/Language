package ch3_6;

import java.util.Scanner;

public class PlanetWeight {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        while(true) {
            System.out.print("Please enter any planet: ");
            String planet = sc.next();
            System.out.print("please enter its weight: ");
            float weight = sc.nextFloat();

            System.out.println();
            System.out.println("Your weight on " + planet + " is " + weight);
            System.out.println();

            System.out.print("Countinue (Y/N)?: ");
            char yn = sc.next().charAt(0);
            System.out.println();

            if (yn == 'N' || yn == 'n') {
                System.out.println("Thank you for working!");
                break;
            }
        }
    }
}
