import java.util.Scanner;

public class addition {
    public static void add() throws InterruptedException {
        int total;
        @SuppressWarnings("resource")
        Scanner addput = new Scanner(System.in);

        System.out.printf("\nNUMBER [1]: ");
        int a = addput.nextInt();
            
        System.out.printf("NUMBER [2]: ");
        int b = addput.nextInt();
        screen.clear();
        
        total = a + b;
        System.out.println("TOTAL: " + total);
    }
}
