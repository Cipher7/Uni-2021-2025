package Program12;

import java.awt.event.*;
import javax.swing.*;
import java.awt.*;

public class Calculator extends JFrame implements ActionListener{

	static JFrame f;
	static JTextField l;
	String s0, s1, s2;
	
	Calculator()
	{
		s0 = s1 = s2 = "";
	}
	
	public static void main(String[] args) {
		
		f = new JFrame("Calculator");
		Calculator c = new Calculator();
		
		l = new JTextField(16);
		
		JButton b0, b1, b2, b3, b4, b5, b6, b7, b8, b9, ba, bs, bd, be, bm, beql, beq;
		
		b0 = new JButton("0");
		b1 = new JButton("1");
		b2 = new JButton("2");
		b3 = new JButton("3");
		b4 = new JButton("4");
		b5 = new JButton("5");
		b6 = new JButton("6");
		b7 = new JButton("7");
		b8 = new JButton("8");
		b9 = new JButton("9");
		
		beql = new JButton("=");
		ba = new JButton("+");
		bs = new JButton("-");
		bd = new JButton("/");
		bm = new JButton("*");
		beq = new JButton("C");
		
		be = new JButton(".");
		
		JPanel p = new JPanel();
		
		beql.addActionListener(c);
		be.addActionListener(c);
		beq.addActionListener(c);
		ba.addActionListener(c);
		bs.addActionListener(c);
		bd.addActionListener(c);
		bm.addActionListener(c);
		b0.addActionListener(c);
		b1.addActionListener(c);
		b2.addActionListener(c);
		b3.addActionListener(c);
		b4.addActionListener(c);
		b5.addActionListener(c);
		b6.addActionListener(c);
		b7.addActionListener(c);
		b8.addActionListener(c);
		b9.addActionListener(c);
		
		p.add(l);
		p.add(beql);
		p.add(beq);
		p.add(be);
		p.add(ba);
		p.add(bs);
		p.add(bd);
		p.add(bm);
		p.add(b0);
		p.add(b1);
		p.add(b2);
		p.add(b3);
		p.add(b4);
		p.add(b5);
		p.add(b6);
		p.add(b7);
		p.add(b8);
		p.add(b9);
		
		p.setBackground(Color.blue);
		
		f.add(p);
		f.setSize(200, 220);
		f.show();
	}
	public void actionPerformed(ActionEvent e)
	{
		String s = e.getActionCommand();
		System.out.println(s);
		
		if((s.charAt(0) >= '0' && s.charAt(0) <= '9') || s.charAt(0) == '.')
		{
			if(!s1.equals(""))
				s2 += s;
			else
				s0 += s;
			
			l.setText(s0 + s1 + s2);
		}
		
		else if(s.charAt(0) == 'C')
		{
			s0 = s1 = s2 = "";
			l.setText(s0 + s1 + s2);
		}
		
		else if(s.charAt(0) == '=')
		{
			double te = 0;
			if(s1.equals("+"))
				te = (Double.parseDouble(s0) + Double.parseDouble(s2));
			else if (s1.equals("-"))
				te = (Double.parseDouble(s0) - Double.parseDouble(s2));
			else if (s1.equals("*"))
				te = (Double.parseDouble(s0) * Double.parseDouble(s2));
			else if (s1.equals("/"))
				te = (Double.parseDouble(s0) / Double.parseDouble(s2));
			
			l.setText(s0 + s1 + s2 + " = " + te);
		
			s0 = Double.toString(te);
			s1 = s2 = "";
		}
		else
		{
			if(s1.equals("") || s2.equals(""))
			{
				s1 = s;
			}
			else
			{
				double te = 0;
				if(s1.equals("+"))
					te = (Double.parseDouble(s0) + Double.parseDouble(s2));
				else if (s1.equals("-"))
					te = (Double.parseDouble(s0) - Double.parseDouble(s2));
				else if (s1.equals("*"))
					te = (Double.parseDouble(s0) * Double.parseDouble(s2));
				else if (s1.equals("/"))
					te = (Double.parseDouble(s0) / Double.parseDouble(s2));
				
				s0 = Double.toString(te);
				s1 = s;
				s2 = "";
			}
		}
	}	
}
