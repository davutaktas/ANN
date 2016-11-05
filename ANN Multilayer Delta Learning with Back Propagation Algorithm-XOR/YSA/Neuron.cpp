#include "Neuron.h"

double* Neuron::UpdateWeight(double* weights, double* inputs, double S, float momentum)
{
	for (int i = 0; i < 3; i++)
		weights[i] += momentum*S*inputs[i];

	return weights;
}