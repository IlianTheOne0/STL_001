#include "train.h"

Train::Train(const string& number, const string& departureTime, const string& destinationStation)
    : _number(number), _departureTime("Unknown"), _destinationStation(destinationStation)
{ if (departureTime.size() == 5 && departureTime.at(2) == ':') { _departureTime = departureTime; } }

string Train::getNumber() const { return _number; }
string Train::getDepartureTime() const { return _departureTime; }
string Train::getDestinationStation() const { return _destinationStation; }