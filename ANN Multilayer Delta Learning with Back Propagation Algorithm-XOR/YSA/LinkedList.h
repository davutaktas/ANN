#pragma once
#include<iostream>

class LinkedList
{
	// Struct inside the class LinkedList
	// This is one node which is not needed by the caller. It is just
	// for internal work.
	struct Node
	{
		double x;
		double y;
		double z;
		double classLabel;
		int *dist;
		Node *next;
	};

	struct fWeight
	{
		double w1;
		double w2;
		double w3;
		fWeight *fnext;
	};

	// public member
public:
	int patternCount = 0;
	int cNum = 0;
	// constructor
	LinkedList()
	{
		head = NULL;		// set head to NULL
		fhead = NULL;
	}
	

	// This prepends a new value at the beginning of the list
	void addValue(double valx, double valy, double valz, int d_size, int c_label)
	{
		patternCount++;
		cNum = d_size;

		Node *n = new Node();			// create new Node
		// set value
		n->x = valx;
		n->y = valy;
		n->z = valz;
		n->classLabel = c_label;
		n->dist = new int[d_size];

		for (int i = 0; i < d_size; i++)
			n->dist[i] = -1;
		n->dist[c_label] = 1;

		if (head == NULL)
		{
			n->next = n;
			head = n;
		}
		else
		{
			n->next = head->next;
			head->next = n;
		}
	}

	int** popDist()
	{
		Node *n = head;
		int *ret;
		ret = n->dist;
		return &ret;
	}

	double** noRemPopVal()
	{
		Node *n = head;
		head = head->next;
		double *ret[4];
		ret[0] = &n->x;
		ret[1] = &n->y;
		ret[2] = &n->z;
		ret[3] = &n->classLabel;
		return ret;
	}

	void addWeight(double w1, double w2, double w3)
	{
		fWeight *w = new fWeight();

		w->w1 = w1;
		w->w2 = w2;
		w->w3 = w3;

		w->fnext = fhead;

		fhead = w;

		/*if (fhead == NULL)       Circlarly linked list
		{
		w->fnext = w;
		fhead = w;
		}
		else
		{
		w->fnext = fhead->fnext;
		fhead->fnext = w;
		}*/
	}

	double* weightPop()
	{
		fWeight *w = fhead;
		double Wret[3];
		Wret[0] = w->w1;
		Wret[1] = w->w2;
		Wret[2] = w->w3;
		fhead = fhead->fnext;
		delete w;
		return Wret;
	}
	//void del()
	//{
	//	Node *n = head;
	//	if (n != NULL)
	//	{	
	//	head = head->next;
	//	delete n;
	//	}	
	//}


	int weightEmpty()
	{
		fWeight *w = fhead;
		if (w == NULL)
			return NULL;
		else
			return 1;
	}

private:
	Node *head;
	fWeight *fhead;

};