#ifndef TRAIN_USECASE_H
#define TRAIN_USECASE_H

#include "../lib.h"
#include "../Entity/train.h"

class TrainUseCase
{
private:
	vector<Train> _arr;
public:
	TrainUseCase() = default;
	virtual ~TrainUseCase() = default;

	virtual void insertTrain(const string& number, const string& departureTime, const string& destinationStation);
	virtual string getFullInfo();
	virtual string getInfoById(const size_t& id);
	virtual Train getInfoById(const size_t& id, bool indicator);
};

#endif