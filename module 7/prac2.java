//prac and eita same...eita just main r bairer class e kora
package module7;
import java.awt.Color;
import java.awt.event.ActionEvent;
import java.awt.event.ActionListener;
import javax.swing.JButton;
import javax.swing.JFrame;
import javax.swing.JLabel;
import javax.swing.JTextField;

public class prac2 {
	public static void calc() {
		JFrame frame = new JFrame(); // Jframe extends kr enile ekhane class r obj create krlei hbe

//	frame.setSize(400, 300); //bounds dile r drkr nai
//	frame.setLocation(200, 200); //bounds dile r drkr nai
		frame.setBounds(200, 200, 500, 500); // size r location 1sathe deya jay
		frame.setTitle("konnichuwa");
		JLabel l1, l2;
		l1 = new JLabel("amare cincs: ");// new Jlabel uporeo l1 declare r smy kra jay thkn l1.settext()....mane method
											// r
											// mto title deya jto..ekhn jrkm l1.setbounds dc

		l1.setBounds(20, 20, 100, 30);

		l2 = new JLabel("ami sommanito dakat: ");
		l2.setBounds(250, 20, 170, 30);

		JTextField j1, j2, j3;
		j1 = new JTextField("1st num");
		j1.setBounds(80, 60, 70, 30);

		j2 = new JTextField("2nd num");
		j2.setBounds(160, 60, 70, 30);

		j3 = new JTextField("result");
		j3.setBounds(250, 60, 70, 30);

		JButton b1, b2;
		b1 = new JButton("clear");
		b1.setBounds(20, 100, 70, 30);
		b1.setBackground(Color.pink);

		b2 = new JButton("sum");
		b2.setBounds(100, 100, 70, 30);
		b2.setBackground(Color.yellow);

		// actionleanser add krbo button r sathe..cz button r chap dile kno 1ta kaj hbe
		b1.addActionListener(new ActionListener() {
			public void actionPerformed(ActionEvent e) {
				j1.setText("");
				j2.setText("");
				j3.setText("");
			}
		});

		b2.addActionListener(new ActionListener() {// jog hcce
			public void actionPerformed(ActionEvent e) {
				int a = Integer.parseInt(j1.getText()); // string theke int convert
				int b = Integer.parseInt(j2.getText());
				int value = a + b;
				j3.setText(value + ""); // int + string =string

			}
		});

		frame.add(l1);
		frame.add(l2);
		frame.add(j1);
		frame.add(j2);
		frame.add(j3);
		frame.add(b1);
		frame.add(b2);
		frame.setLayout(null);
		frame.setVisible(true); // eke shbr last e rakhbo
		frame.setDefaultCloseOperation(JFrame.EXIT_ON_CLOSE);

	}

	public static void main(String[] args) {
		calc();
	}

}
