package currencyconverter;

public class currency {

	public void dollartoinr(double dollar)
	{
		double inr = dollar*82.3;
		System.out.println("\nINR = " + inr);
	}
	public void eurotoinr(double euro)
	{
		double inr = euro*87;
		System.out.println("\nINR = " + inr);
	}
	public void yentoinr(double yen)
	{
		double inr = yen*0.6;
		System.out.println("\nINR = " + inr);
	}
	public void inrtodollar(double inr)
	{
		double dollar = inr/82.3;
		System.out.println("\nDOLLAR = " + dollar);
	}
	public void inrtoeuro(double inr)
	{
		double euro = inr/87;
		System.out.println("\nEURO = " + euro);
	}
	public void inrtoyen(double inr)
	{
		double yen = inr/0.6;
		System.out.println("\nYEN = " + yen);
	}
}
