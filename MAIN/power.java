import java.util.Scanner;

public class power {
    public static void pow() throws InterruptedException {
        double total;
        @SuppressWarnings("resource")
        Scanner addput = new Scanner(System.in);

        System.out.printf("\nNUMBER [1]: ");
        int a = addput.nextInt();
            
        System.out.printf("NUMBER [POWER]: ");
        int b = addput.nextInt();

        total = Math.pow(a, b);
        System.out.println("TOTAL: " + total);
    }
}
