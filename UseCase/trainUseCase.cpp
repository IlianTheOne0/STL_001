#include "trainUseCase.h"

void TrainUseCase::insertTrain(const string& number, const string& departureTime, const string& destinationStation) { _arr.emplace_back(Train(number, departureTime, destinationStation)); }
string TrainUseCase::getFullInfo() { string result; for (size_t i = 0; i < _arr.size(); i++) { result += getInfoById(i); } return result; }

string TrainUseCase::getInfoById(const size_t& id)
{
    if (id >= _arr.size()) { return "Invalid index!"; }

    Train currentItem = _arr.at(id);

    ostringstream stream;
    stream
        << "Train " << currentItem.getNumber()
        << endl << "  " << "  Departure Time: " << currentItem.getDepartureTime()
        << endl << "  " << "  Destination Station: " << currentItem.getDestinationStation()
        << endl;

    return stream.str();
}
Train TrainUseCase::getInfoById(const size_t& id, bool indicator) { if (id >= _arr.size()) { return Train(); } return _arr.at(id); }