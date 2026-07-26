import javax.swing.*;
import java.awt.*;

public class лскру {
	public static void main(String[] args) {
		JFrame frame = new JFrame("ЛСК — Альфа-версия графического интерфейса пользователя");
		
		JTextField choice = new JTextField(1);
		
		JTextField num1 = new JTextField(1);
		JTextField num2 = new JTextField(1);
		
		JButton calculateButton = new JButton("РАССЧИТАТЬ");
		
		JLabel result = new JLabel("РЕЗУЛЬТАТ: ");
		
		JLabel options = new JLabel("СЛОЖЕНИЕ [+], ВЫЧИТАНИЕ [-], УМНОЖЕНИЕ [*], ДЕЛЕНИЕ [/]");
		
		
		calculateButton.addActionListener(e -> {
			String operation = choice.getText();
			
			double cnum1 = Double.parseDouble(num1.getText());
			double cnum2 = Double.parseDouble(num2.getText());
			double total = 0;
			
			if (operation.equals("+")) {
				total = cnum1 + cnum2;
				result.setText("ОБЩИЙ: " + total);
			}
			else if (operation.equals("-")) {
				total = cnum1 - cnum2;
				result.setText("ОБЩИЙ: " + total);
			}
			else if (operation.equals("*")) {
				total = cnum1 * cnum2;
				result.setText("ОБЩИЙ: " + total);
			}
			else if (operation.equals("/")) {
				total = cnum1 / cnum2;
				result.setText("ОБЩИЙ: " + total);
			}
			else {
				result.setText("ОШИБКА: НЕПРАВИЛЬНЫЙ");
			}
		});
		
		frame.setLayout(new GridLayout(6, 1)); //this does top-down not left-right and does 6 rolls, one column
		
		
		frame.add(new JLabel("ОПЕРАЦИЯ: "));
		frame.add(choice);
		
		frame.add(new JLabel("ЧИСЛО 1: "));
		frame.add(num1);
		
		frame.add(new JLabel("ЧИСЛО 2: "));
		frame.add(num2);
		
		frame.add(calculateButton);
		frame.add(result);
		
		frame.setSize(500, 500);
		frame.setDefaultCloseOperation(JFrame.EXIT_ON_CLOSE);
		
		frame.setVisible(true);
	}
}
