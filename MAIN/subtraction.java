import java.util.Scanner;

public class subtraction {
    public static void sub() throws InterruptedException {
        int total;
        @SuppressWarnings("resource")
        Scanner subput = new Scanner(System.in);

        System.out.printf("\nNUMBER [1]: ");
        int a = subput.nextInt();
            
        System.out.printf("NUMBER [2]: ");
        int b = subput.nextInt();

        total = a - b;
        System.out.println("TOTAL: " + total);
    }
}
