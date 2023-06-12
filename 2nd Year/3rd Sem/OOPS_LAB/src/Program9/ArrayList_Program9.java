package Program9;

import java.util.*;

public class ArrayList_Program9 {
	public static void main(String[] args) 
	{
		Scanner sc = new Scanner(System.in);
		ArrayList<String> obj = new ArrayList<String>();
		int op;
		String element;
		while(true)
		{
			System.out.println("1. Append element \n2. Insert Element at specific index \n3. Search operation \n4. List all elements starting with specific string \n5. Display the size \n6. Remove an element \n7. Sort the list \n8. Display \n9. Exit the program");
			System.out.print("Choose an option : ");
			op = sc.nextInt();
			switch(op)
			{
			case 1 : System.out.println("Enter the element to be appended : ");
					 element = sc.next();
					 obj.add(element);
					 System.out.println("ArrayList : " + obj);
					 break;
			
			case 2 : System.out.println("Enter the element to be inserted : ");
					 element = sc.next();
					 System.out.println("Enter the position : ");
					 int pos = sc.nextInt();
					 obj.add(pos, element);
					 System.out.println("ArrayList : " + obj);
					 break;
					 
			case 3 : System.out.println("Enter the element to be searched : ");
					 element = sc.next();
					 int res = obj.indexOf(element);
					 if(res == -1)
					 {
						 System.out.println("Element not Found !");
					 }
					 else
					 {
						 System.out.println("Element found at location " + (res+1));
					 }
					 break;
			
			case 4 : System.out.println("Enter the element : ");
					 element = sc.next();
					 System.out.println("Elements starting with the string are : ");
					 for(int i=0; i<obj.size(); i++)
					 {
						String str = obj.get(i);
					 	if(str.startsWith(element))
					 	{
					 		System.out.println(str);
					 	}
					 }
					 break;

			case 5 : int size = obj.size();
					 System.out.println("Size of ArrayList : " + size);
					 break;
					
			case 6 : System.out.println("Enter the index to be removed");
					 int index = sc.nextInt();
					 obj.remove(index-1);
					 System.out.println("ArrayList : " + obj);
					 break;
				
			case 7 : Collections.sort(obj);
					 System.out.println("Sorted List : " + obj);
					 break;

			case 8 : System.out.println("ArrayList : " + obj);
					 break;
					 
			case 9 : System.out.println("Exiting ...");
					 sc.close();
					 System.exit(0);

			default : System.out.println("Invalid Options Entered!\n");
			}
		}
	}
}
