import javax.swing.*;
import java.awt.*;

public class lsc {
	public static void main(String[] args) {
		JFrame frame = new JFrame("LIGHTWEIGHT SOURCE CALCULATOR - GUI ALPHA");
		
		JTextField choice = new JTextField(1);
		
		JTextField num1 = new JTextField(1);
		JTextField num2 = new JTextField(1);
		
		JButton calculateButton = new JButton("CALCULATE");
		JButton helpButton = new JButton("HELP");
		
		JLabel result = new JLabel("RESULT: ");
		
		JLabel options = new JLabel("ADDITION [+], SUBTRACTION [-], TIMES [*], DIVISION [/]");
		
		
		calculateButton.addActionListener(e -> {
			String operation = choice.getText();
			
			double cnum1 = Double.parseDouble(num1.getText());
			double cnum2 = Double.parseDouble(num2.getText());
			double total = 0;
			
			if (operation.equals("+")) {
				total = cnum1 + cnum2;
				result.setText("TOTAL: " + total);
			}
			else if (operation.equals("-")) {
				total = cnum1 - cnum2;
				result.setText("TOTAL: " + total);
			}
			else if (operation.equals("*")) {
				total = cnum1 * cnum2;
				result.setText("TOTAL: " + total);
			}
			else if (operation.equals("/")) {
				total = cnum1 / cnum2;
				result.setText("TOTAL: " + total);
			}
			else {
				result.setText("ERROR: INVALID");
			}
		});
		
		frame.setLayout(new GridLayout(6, 1)); //this does top-down not left-right and does 6 rolls, one column
		
		
		frame.add(new JLabel("OPERATION: "));
		frame.add(choice);
		
		frame.add(new JLabel("NUMBER 1: "));
		frame.add(num1);
		
		frame.add(new JLabel("NUMBER 2: "));
		frame.add(num2);
		
		frame.add(calculateButton);
		frame.add(result);
		
		frame.setSize(500, 500);
		frame.setDefaultCloseOperation(JFrame.EXIT_ON_CLOSE);
		
		frame.setVisible(true);
	}
}
