#include <iostream>
#include <vector>
#include <MyMath.h>
#include <NeuralNetwork.h>
#include <app.h>


void Predict_Student_Mark(void)
{
	std::vector<uint32_t> LayerCount = {2, 3, 1};

	std::vector<std::vector<double>> Input = {
		{3.00, 5.00},
		{5.00, 1.00},
		{10.00, 2.00}
	};

	NN::NeuralNet ann(LayerCount);

	ann.FeedForward(Input);
}