mod addition; //for addition
use addition::add; //to call addition
mod subtraction; //for subtraction
use subtraction::sub; //to call sub
mod multiplication; //to call multiplication
use multiplication::mul; //for multiplication
mod division; //to call division
use division::div; //for division
mod power;
use power::pow;
use std::io::{self, Write};

fn main() {
	clearscreen::clear().expect("FAILED TO CLEAR SCREEN.");
    println!("Lightweight Source Calculator - RUST VERS.");
    loop {
		println!("EXIT [.] | ADDITION [+] | SUBTRACTION [-] | MULTIPLICATION [*] | DIVISION [/] | POWER [^]");
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

        else if finput == '-' {
            sub();
        }

        else if finput == '*' {
			mul();
		}

		else if finput == '/' {
			div();
		}

		else if finput == '^' {
			pow();
		}

       else  if finput == '.' {
			clearscreen::clear().expect("FAILED TO CLEAR SCREEN.");
            println!("BYE.");
            break;
        }

        else {
			println!("INVALID.\n");
		}
    }
}
