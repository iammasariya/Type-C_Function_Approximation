
#include<Hermit.h>
#include<stdio.h>



using namespace std;


double phi(int n,vector<double> featureVector)
{


	int length = featureVector.size();
	double phiValue = 1;

	if(n=1)
	{
		//		for(auto i= featureVector.begin();i!=featureVector.end();i++)
		//		{
		//
		//			phiValue = phiValue * hermit_imp(0,i);
		//		}
		phiValue=1;
	}



	else if(n<=length+1)
	{
		int counter=1;
//		for(auto i= featureVector.begin();i!=featureVector.end();i++)
//		{
//
//			if()
//			phiValue = phiValue * hermit_imp(0,i);
//			counter++;
//		}
		phiValue = hermit_imp(1,featureVector[n-2]);
	}


	else if(n<=2*length)
	{
		phiValue = hermit_imp(1,featureVector[0])*hermit_imp(1,featureVector[n-length-1]);
	}

	return phiValue;
}


