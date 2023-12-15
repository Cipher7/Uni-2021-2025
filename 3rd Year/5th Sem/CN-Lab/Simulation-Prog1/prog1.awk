BEGIN {c=0;}
{
	if($1 == "d")
	{
		c++;
		printf("%s %s\n", $5, $11);
	}
}
END { printf("The number of packers dropped are = %d\n", c);}

