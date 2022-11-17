package Staff_Program4;
public class Demo_Staff {

	public static void main(String[] args) 
	{
		Technical emp_tech[] = new Technical[3];
		Teaching emp_teach[] = new Teaching[3];
		Contract emp_contract[] = new Contract[3];
		
		System.out.println("\nTeaching Staff : ");
		for(int i=0;i<3;i++)
		{
			emp_teach[i] = new Teaching();
			emp_teach[i].readData();
		}
		
		System.out.println("\nTechnical Staff : ");
		for(int i=0;i<3;i++)
		{
			emp_tech[i] = new Technical();
			emp_tech[i].readData();
		}
		
		System.out.println("\nContract Staff : ");
		for(int i=0;i<3;i++)
		{
			emp_contract[i] = new Contract();
			emp_contract[i].readData();
		}
		
		System.out.println("\nEmployee Details : ");
		
		for(int i=0;i<3;i++)
		{
			emp_teach[i] = new Teaching();
			emp_teach[i].displayData();
		}
		for(int i=0;i<3;i++)
		{
			emp_tech[i] = new Technical();
			emp_tech[i].displayData();
		}
		for(int i=0;i<3;i++)
		{
			emp_contract[i] = new Contract();
			emp_contract[i].displayData();
		}
	}
}
