#include <iostream>
#include <vector>
#include <MyMath.h>
#include <NeuralNetwork.h>


NN::NeuralNet::NeuralNet(const std::vector<uint32_t> &layer) : Layer(layer)
{
	Z.resize(Layer.size()-1);
	A.resize(Layer.size());
	W.resize(Layer.size()-1);

	for (int i = 0; i < W.size(); i++)
	{
		W[i] = MyMath::Matrix(layer[i], layer[i+1]);

		/*< Need to set random values to the Weight array. */
		W[i].ResetTo(i+1);
	}
}

uint8_t NN::NeuralNet::FeedForward(std::vector<std::vector<double>> input)
{
	/*< Input value is stored in A[0] instead of storing in Z[0] */
	A[0] = input;

	for (uint16_t i = 0; i < A.size() - 1; i++)
	{
		Z[i] = (A[i] * W[i]);
		Z[i].Sigmoid(A[i + 1]);
	}

	std::cout << A[A.size()-1] << std::endl;

	return 1;
}

uint8_t NN::NeuralNet::BackPropagate(void)
{
	return 1;
}


