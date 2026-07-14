import java.util.Scanner;

public class percentage {
    public static void per() throws InterruptedException {
        @SuppressWarnings("resource")
        Scanner addput = new Scanner(System.in);

        System.out.printf("\nNUMBER [1]: ");
        double a = addput.nextInt();
            
        System.out.printf("NUMBER [OF]: ");
        double b = addput.nextInt();
        screen.clear();

        double percentage = (a / b) % 100;
        System.out.println(a + " IS " + percentage + "% OF " + b);
    }
}
