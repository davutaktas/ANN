#include "Activation.h"



double Activation::UnipolarSigmoid(double* input, double* weight, float lamda)
{

	double fnet = 0;
	double net = 0;

	for (int i = 0; i < 3; i++)
		net += input[i] * weight[i];

	fnet = 1 / (1 + exp(-(lamda*net))); // uniporlar continious act. func.

	return fnet;
}
double Activation::DrvUnipolarSigmoid(double* input, double* weight, float lamda)
{


	double fnet = 0;
	double net = 0;

	for (int i = 0; i < 3; i++)
		net += input[i] * weight[i];

	fnet = 1 / (1 + exp(-(lamda*net))); // derivation to uniporlar continious act. func.

	return fnet*(1 - fnet);
}

double BipolarSigmoid(double *input, double *weight, float lamda)
{

	double fnet = 0, net = 0;
	for (int i = 0; i < 3; i++)
		net += input[i] * weight[i];

	// TO DO 
	//
	//
	//
	return 1;
}


float Activation::RandomFloat(float min, float max)
{
	float r = (float)rand() / (float)RAND_MAX;
	return min + r * (max - min);
}


