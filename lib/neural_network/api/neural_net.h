#ifndef __NEURAL_NET_H__
#define __NEURAL_NET_H__

namespace NN
{
	class NeuralNet
	{
	private:
		std::vector<uint32_t> Layer;
		std::vector<MyMath::Matrix> X; /*< 0th Matrix would be input values */
		std::vector<MyMath::Matrix> W;
		std::vector<MyMath::Matrix> Z;
		std::vector<MyMath::Matrix> A;

	public:
		NeuralNet(const std::vector<uint32_t> &layer);
		uint8_t FeedForward(std::vector<std::vector<double>>);
		uint8_t BackPropagate(void);
	};
}

#endif //__NEURAL_NETWORK_H__