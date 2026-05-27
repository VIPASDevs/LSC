import java.util.Scanner;

public class v1 {
    static int total;

    public static void main(String[] args) throws InterruptedException {        
        Scanner input = new Scanner(System.in);

        System.out.println("\nLightweight Source Calculator [LSC]");
        Thread.sleep(1000);
        System.out.println("Version BETA");
        Thread.sleep(1000);
        System.out.println("Child of Py-Calculator and Community Calculator");
        Thread.sleep(1000);
        System.out.println("Type 'I' for Informations");
    
        for (;;) {
            System.out.println("\nOPTIONS: E [Exit] | + [Addition] | - [Subtraction] | X [Multiplications] | / [Division] | * [To The Power] | % [Percent Of], > [Remainder]");
            System.out.printf("INPUT: ");
            char choice = Character.toUpperCase(input.next().charAt(0));

            if (choice == 'I') {
                Thread.sleep(1000);
                System.out.println("This is a refactoring from the ground up of Text Interface Calculator [TIC] in the language JAVA. TIC itself is based off Community Calculator. Community Calculator itself is based off of Py-Calculator.");
            }

            if (choice == 'E') {
                Thread.sleep(1000);
                System.out.println("EXITING!");
                System.out.println("...");
                break;
            }

            if (choice == '+') {
                addition.add();
            }

            if (choice == '-') {
                subtraction.sub();
            }

            if (choice == 'X') {
                multiplication.multi();
            }

            if (choice == '/') {
                division.div();
            }

            if (choice == '*') {
                power.pow();
            }

            if (choice == '%') {
                percentage.per();
            }

            if (choice == '>') {
                remainder.rem();
            }
        }
        input.close();
    }
}
