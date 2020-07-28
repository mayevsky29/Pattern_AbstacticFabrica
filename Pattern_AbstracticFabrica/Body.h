#pragma once


class Body // абстрактний корпус
{

public:
	string color;
	string nameModel;
	void ShowBody()
	{
		cout << "Body: " << endl;
		cout << "name model: " << this->nameModel << endl;
		cout << "color body: " << this->color << endl;
		cout << "_________________________________" << endl;
	}
	virtual ~Body()
	{

	}
};