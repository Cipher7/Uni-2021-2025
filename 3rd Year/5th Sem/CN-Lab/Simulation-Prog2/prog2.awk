BEGIN {drop=0;}
{
	if($1 == "d")
	{
		drop++;
	}
}
END { printf("The number of packers dropped are = %d\n", drop);}

