#include"Basis.h"
#include<Hermit.h>
#include<stdio.h>



using namespace std;


vector<double> phi(vector<double> featureVector)
{


	int length = featureVector.size();
//	double phiValue = 1;
//
//	if(n=1)
//	{
//		phiValue=1;
//	}
//
//
//
//	else if(n>1 && n<=length+1) //  1st order N element
//	{
//		phiValue = hermit_imp(1,featureVector[n-2]);
//	}
//
//
//	else if(n>length+1 && n<=2*length) // n-1 element
//	{
//		phiValue = hermit_imp(1,featureVector[0])*hermit_imp(1,featureVector[n-length-1]);
//	}
//
//	else if(n>2*length && n<= 3*length-1) // 2nd -1st // n-2 elements
//	{
//		phiValue = hermit_imp(1,featureVector[1])*hermit_imp(1,featureVector[2*n-length-1]);
//	}
//
//	int div = n/length;
//	else if(div)
//	{
//
//	}
//
//	phiValue = hermit_imp(1,featureVector[div-1])*hermit_imp(1,featureVector[n%length]);


	vector<double> phiValue;

	phiValue.push_back(0);


	return phiValue;
}


int main()
{

	vector<double> featureVector;

	featureVector.push_back(0);

	phi(featureVector);
}

