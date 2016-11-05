#pragma once
#include <vector>
using namespace std;

class Activation
{
public:


	double UnipolarSigmoid(double* input, double* weight, float lamda);
	double DrvUnipolarSigmoid(double* input, double* weight, float lamda);

	double BipolarSigmoid(double &input, double &weight, float lamda);
	double DrvBipolarSigmoid(double &input, double &weight, float lamda);
	int Signum(vector<double> input, vector<double> weight, float lamda);
	double Linear(vector<double> input, vector<double> weight, float lamda);


	float RandomFloat(float min, float max);

private:

};