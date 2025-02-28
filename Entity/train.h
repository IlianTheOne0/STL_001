#ifndef TRAIN_H
#define TRAIN_H

#include "../lib.h"

class Train
{
private:
    string _number;
    string _departureTime;
    string _destinationStation;
public:
    Train() = default;
    Train(const string& number, const string& departureTime, const string& destinationStation);
    virtual ~Train() = default;

    virtual string getNumber() const;
    virtual string getDepartureTime() const;
    virtual string getDestinationStation() const;
};

#endif