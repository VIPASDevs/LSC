import java.util.Scanner;

public class multiplication {
    public static void multi() throws InterruptedException {
        int total;
        @SuppressWarnings("resource")
        Scanner mulput = new Scanner(System.in);

        System.out.printf("NUMBER [1]: ");
        int a = mulput.nextInt();

        System.out.printf("NUMBER [2]: ");
        int b = mulput.nextInt();

        total = a * b;
        System.out.println("\nTOTAL: " + total);
    }
}
