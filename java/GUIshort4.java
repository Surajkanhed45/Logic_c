import java.awt.*;
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
public Frame fobj;
public FirstWindow()
{
		Frame fobj=new Frame("Marvellous");
		Button bobj1=new Button("Login");
		Button bobj2=new Button("Cancel");
		Label lobj=new Label("Marvellous Login Portel");
		Label username=new Label("Username");
		Label password=new Label("Password");
		TextField ut=new TextField();
		JPasswordField pt=new JPasswordField();
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
		fobj.setSize(500,500);
		fobj.setLayout(null);
		fobj.setVisible(true);
		fobj.add(username);
		fobj.add(password);
		fobj.add(ut);
		fobj.add(pt);
		//bobj1.addActionListener(new MarvellousActionListener());
		bobj1.addActionListener(new ActionListener(){
			public void actionPerformed(ActionEvent e)
			{
				String username=ut.getText();
				String password=pt.getText();
				if((username.equals("Piyush")) && (password.equals("Piyush1845@")))
				{
					System.out.println ("WelCome Piyush");
				}
				else{
					System.out.println ("Invalide user");
				}
			}
		});
		fobj.addWindowListener(new Listener());	
}	
}

class GUIshort4
{
	public static void main (String[] args)
	 {
		FirstWindow fobj=new FirstWindow();
		
}
}