import java.util.Scanner;

public class remainder {
    public static void rem() throws InterruptedException {
        @SuppressWarnings("resource")
        Scanner addput = new Scanner(System.in);

        System.out.printf("\nNUMBER [DIVIDEND]: ");
        int a = addput.nextInt();
            
        System.out.printf("NUMBER [DIVISOR]: ");
        int b = addput.nextInt();
        screen.clear();
        
        int whole = a / b;
        int remainder =  a % b;
        System.out.println("WHOLE: " + whole);
        System.out.println("REMAINDER: " + remainder);
    }
}
