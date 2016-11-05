#pragma once

#include "Activation.h"

class Neuron 
{
public:
	
	Activation activation;
	double *NeuronInputs;
	double *NeuronWeight;
	double *NeuronDist;
	double S;
	double n_fnet;
	double n_drvfnet;
	

	double* UpdateWeight(double *Weight, double *NeuronInput, double S, float momentum);

	
private:

};