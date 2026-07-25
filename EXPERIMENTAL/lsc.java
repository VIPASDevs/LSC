import javax.swing.*;
import java.awt.*;

public class lsc {
	public static void main(String[] args) {
		JFrame frame = new JFrame("LIGHTWEIGHT SOURCE CALCULATOR - GUI ALPHA");
		
		JTextField choice = new JTextField(5);
		
		JTextField num1 = new JTextField(5);
		JTextField num2 = new JTextField(5);
		
		JButton calculateButton = new JButton("CALCULATE");
		
		JLabel result = new JLabel("RESULT: ");
		
		
		calculateButton.addActionListener(e -> {
			String operation = choice.getText();
			
			double cnum1 = Double.parseDouble(num1.getText());
			double cnum2 = Double.parseDouble(num2.getText());
			double total = 0;
			
			if (operation.equals("add")) {
				total = cnum1 + cnum2;
			}
			else if (operation.equals("sub")) {
				total = cnum1 - cnum2;
			}
			else if (operation.equals("tim")) {
				total = cnum1 * cnum2;
			}
			else if (operation.equals("div")) {
				total = cnum1 / cnum2;
			}
			
			result.setText("TOTAL: " + total);
		});
		
		frame.setLayout(new FlowLayout());
		
		frame.add(new JLabel("OPERATION: "));
		frame.add(choice);
		
		frame.add(new JLabel("NUMBER 1: "));
		frame.add(num1);
		
		frame.add(new JLabel("NUMBER 2: "));
		frame.add(num2);
		
		frame.add(calculateButton);
		frame.add(result);
		
		frame.setSize(500, 300);
		frame.setDefaultCloseOperation(JFrame.EXIT_ON_CLOSE);
		
		frame.setVisible(true);
	}
}
