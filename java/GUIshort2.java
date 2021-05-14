//import java.awt.*;
import java.awt.event.*;
import javax.swing.*;
class Listener extends WindowAdapter
{
	public void windowClosing(WindowEvent e)//Event class object(e)
	{
		System.exit(0);
	}
					
}
class FirstWindow
{
public JFrame fobj;
public FirstWindow()
{
		JFrame fobj=new JFrame("Marvellous");
		JButton bobj1=new JButton("Login");
		JButton bobj2=new JButton("Cancel");
		JLabel lobj=new JLabel("Marvellous Login Portel");
		JLabel username=new JLabel("Username");
		JLabel password=new JLabel("Password");
		JTextField ut=new JTextField("Enter your username");
		JTextField pt=new JTextField("Enter your password");
		lobj.setBounds(20,40,300,30);
		bobj1.setBounds(70,170,80,30);//x y w h
		bobj2.setBounds(160,170,80,30);
		username.setBounds(20,80,80,30);
		ut.setBounds(110,80,150,30);
		password.setBounds(20,120,80,30);
		pt.setBounds(110,120,150,30);
			fobj.add(bobj1);
		fobj.add(bobj2);
		fobj.add(lobj);
		fobj.setSize(300,250);
		fobj.setLayout(null);
		fobj.setVisible(true);
		fobj.add(username);
		fobj.add(password);
		fobj.add(ut);
		fobj.add(pt);
		fobj.addWindowListener(new Listener());	
}	
}
class GUIshort2
{
	public static void main (String[] args) {
		FirstWindow fobj=new FirstWindow();
		
}
}