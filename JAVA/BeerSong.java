package ch1_3;

public class BeerSong {
    public static void main(String[] args) {
        System.out.println("Hello World!, yeonmew");
        int beerNum = 99;
        String word = "bottles" ; //복수형
        while (beerNum > 0) {
            if (beerNum == 1) {
                word = "bottle" ; //단수형
            }
            System.out.println(beerNum + " " + word + " of beer on the wall" );
            System.out.println(beerNum + " " + word + " of beer" );
            System.out.println("Take one down.");
            System.out.println("Pass it around.");
            beerNum = beerNum - 1;

            if (beerNum > 0) {
                System.out.println(beerNum + " " + word + " of beer on the wall" );
            }
            else {
                System.out.println("No more bottles of beer on the wall");
            }
        }
    }
}
