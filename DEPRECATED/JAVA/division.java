import java.util.Scanner;

public class division {
    public static void div() {
        int total;
        @SuppressWarnings("resource")
        Scanner divput = new Scanner(System.in);

        System.out.printf("\nNUMBER [1]: ");
        int a = divput.nextInt();
            
        System.out.printf("NUMBER [2]: ");
        int b = divput.nextInt();
        screen.clear();
        
        total = a / b;
        System.out.println("TOTAL: " + total);
    }
    
}
