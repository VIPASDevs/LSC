use std::io::{self, Write};

pub fn div() {
	print!("\n\nN1: ");
	io::stdout().flush().unwrap();

		let mut num1 = String::new();
	io::stdin()
		.read_line(&mut num1)
		.expect("FAILED TO PARSE N1.");

	let num1: i32 = num1
		.trim()
		.parse()
		.expect("CONVERSION FOR N1 FAILED.");


	print!("N2: ");
	io::stdout().flush().unwrap();

	let mut num2 = String::new();
	io::stdin()
		.read_line(&mut num2)
		.expect("FAILED TO PARSE N2.");

	let num2: i32 = num2
		.trim()
		.parse()
		.expect("CONVERSION FOR N2 FAILED.");

	let total = num1 / num2; //hey I guessed this line right!
	//but the compiler said it does not need mutable... Why? [RESEARCH REQUIRED]
	clearscreen::clear().expect("FAILED TO CLEAR SCREEN.");
	println!("TOTAL: {}\n", total);
}
