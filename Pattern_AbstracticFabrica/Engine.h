#pragma once


class Engine // ����������� ������
{

public:
	string name;
	double power;
	void ShowEngine()
	{
		cout << "Engine: " << endl;
		cout << "name: " << this->name << endl;
		cout << "power: " << this->power << endl;
		cout << "_________________________________" << endl;
	}
	virtual ~Engine()
	{

	}

};