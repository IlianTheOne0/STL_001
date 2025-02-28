#include "UseCase/trainUseCase.h"

int main()
{
	TrainUseCase obj;
	
	obj.insertTrain("0UVJT", "20:31", "Tokyo");
	obj.insertTrain("1JTUV", "14:53", "Vinnytsia");
	obj.insertTrain("2ABCD", "08:15", "New York");
	obj.insertTrain("3EFGH", "12:45", "London");
	obj.insertTrain("4IJKL", "16:30", "Paris");
	obj.insertTrain("5MNOP", "19:00", "Berlin");
	obj.insertTrain("5MNOP", "1900", "Berlin");
	obj.insertTrain("6QRST", "22:10", "Sydney");
	
	cout << obj.getFullInfo() << endl << endl;
	cout << obj.getInfoById(5) << endl << endl;

	cout << obj.getInfoById(10) << endl << endl;
	cout << obj.getInfoById(5, true).getDestinationStation() << endl << endl;

	return 0;
}