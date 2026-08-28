mod addition; //for addition
use addition::add; //to call addition
mod subtraction; //for subtraction
use subtraction::sub; //to call sub
use std::io::{self, Write};

fn main() {
	clearscreen::clear().expect("FAILED TO CLEAR SCREEN.");
    println!("Lightweight Source Calculator - RUST VERS.");
    loop {
		println!("EXIT [.] | ADDITION [+] | SUBTRACTION [-]");
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
            add();
        }

        if finput == '-' {
            sub();
        }

        if finput == '.' {
			clearscreen::clear().expect("FAILED TO CLEAR SCREEN.");
            println!("BYE.");
            break;
        }
    }
}
