

//////////////////////////////////////
// function name:division
// input: integer,integer
// output:integer
// descrciption:division of two number
// date:24/02/2021
// Author:suraj rajkumar kanhed
///////////////////////////////////////

int Divide(int iNo1,int iNo2)
{
	int iAns=0;
	if (iNo2==0)
	{
		return -1;
		
	}
	iAns=iNo1/iNo2;
	return iAns;
	
}