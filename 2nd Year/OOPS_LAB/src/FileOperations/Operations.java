package FileOperations;

import java.io.*;
import javax.swing.JOptionPane;

public class Operations {

	public static void main(String[] args) {
		// TODO Auto-generated method stub
		String filename = JOptionPane.showInputDialog("Enter Filename : ");
		filename = "/home/cs151/Uni-2021-2025/2nd Year/OOPS_LAB/src/FileOperations/" + filename;
		File f = new File(filename);
		
		System.out.println("File exists : " + f.exists());
		System.out.println("File is readable : " + f.canRead());
		System.out.println("File is writeable : " + f.canWrite());
		System.out.println("Is a directory : " + f.isDirectory());
		System.out.println("Length of the file is " + f.length());
		
		try
		{
			char ch;
			StringBuffer buf = new StringBuffer("");
			FileInputStream fis = new FileInputStream(filename);
			
			while(fis.available() != 0)
			{
				ch = (char)fis.read();
				buf.append(ch);
			}
			
			System.out.println("Contents of File are : \n" + buf + "\n");
			fis.close();
		}
		catch (FileNotFoundException e) 
		{
			System.out.println("The file does not exist!");
		}
		catch(IOException i)
		{
			System.out.println("Cannot Read File!");
		}
	}

}
