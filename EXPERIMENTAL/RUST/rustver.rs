use std::io::{self, Write};

fn main() {
    let mut total;

    println!("RUST CALCULATOR");
    println!("EXIT [.], ADDITION [+], SUBTRACTION [-]");
    loop {
        print!("INPUT: ");
        io::stdout().flush().unwrap();

        let mut finput = String::new();
        io::stdin()
            .read_line(&mut finput)
            .expect("FAILED TO READ");

        let finput: char = finput
            .trim()
            .parse()
            .expect("FAILED TO CONVERT");

        if finput == '+' {
            print!("\n\nNUMBER: ");
            io::stdout().flush().unwrap();

            let mut num1 = String::new();
            io::stdin()
                .read_line(&mut num1)
                .expect("FAILED TO READ");

            let num1: i32 = num1
                .trim()
                .parse()
                .expect("FAILED TO CONVERT");


            print!("NUMBER: ");
            io::stdout().flush().unwrap();

            let mut num2 = String::new();
            io::stdin()
                .read_line(&mut num2)
                .expect("FAILED TO READ");

            let num2: i32 = num2
                .trim()
                .parse()
                .expect("FAILED TO CONVERT");

            total = num1 + num2;
            println!("\nTOTAL: {}\n", total);
        }

        if finput == '-' {
            print!("\n\nNUMBER: ");
            io::stdout().flush().unwrap();

            let mut num1 = String::new();
            io::stdin()
                .read_line(&mut num1)
                .expect("FAILED TO READ");

            let num1: i32 = num1
                .trim()
                .parse()
                .expect("FAILED TO CONVERT");


            print!("NUMBER: ");
            io::stdout().flush().unwrap();

            let mut num2 = String::new();
            io::stdin()
                .read_line(&mut num2)
                .expect("FAILED TO READ");

            let num2: i32 = num2
                .trim()
                .parse()
                .expect("FAILED TO CONVERT");

            total = num1 - num2;
            println!("\nTOTAL: {}\n", total);
        }

        if finput == '.' {
            println!("BYE.");
            break;
        }
    }
}
