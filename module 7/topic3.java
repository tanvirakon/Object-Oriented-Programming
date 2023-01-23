package module7;

import javax.swing.*;
import java.awt.*;
import java.awt.event.*;

public class topic3 {
	public static void converter() {

		JFrame f = new JFrame("CONVERTER");

		JLabel l1, l2;

		JTextField t1, t2;

		JButton b1, b2, b3;
		l1 = new JLabel("Taka:");
		l1.setBounds(20, 40, 60, 30);
		l2 = new JLabel("Dollars:");
		l2.setBounds(170, 40, 60, 30);

		t1 = new JTextField("0");
		t1.setBounds(80, 40, 50, 30);
		t2 = new JTextField("0");
		t2.setBounds(240, 40, 50, 30);
		b1 = new JButton("taka");
		b1.setBounds(50, 80, 90, 20);
		b2 = new JButton("Dollar");
		b2.setBounds(190, 80, 95, 20);
		b3 = new JButton("clear");
		b3.setBounds(150, 150, 80, 35);
		
		b1.addActionListener(new ActionListener() {
			public void actionPerformed(ActionEvent e) {
				double d = Double.parseDouble(t1.getText());
				double d1 = (d / 80);
				//String str1 = String.valueOf(d1);
				t2.setText(d1 + " ");
			}
		});
		b2.addActionListener(new ActionListener() {
			public void actionPerformed(ActionEvent e) {
				double d2 = Double.parseDouble(t2.getText());
				double d3 = (d2 * 80);
			//	String str2 = String.valueOf(d3);
				t1.setText(d3 +" ");
			}
		});
		b3.addActionListener(new ActionListener() {
			public void actionPerformed(ActionEvent e) {
			t1.setText("");
			t2.setText("");
			}
		});
		
		f.add(l1);
		f.add(t1);
		f.add(l2);
		f.add(t2);
		f.add(b1);
		f.add(b2);
		f.add(b3);
		f.setLayout(null);
		f.setSize(400, 300);
		f.setVisible(true);
		f.setDefaultCloseOperation(f.EXIT_ON_CLOSE);
	}

	public static void main(String args[]) {
		converter();
	}
};
