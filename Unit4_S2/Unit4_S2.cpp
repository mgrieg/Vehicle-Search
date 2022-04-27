// Unit4_S2.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include<string>

using namespace std;

string lower(string word)
{
	for (int i = 0; i < word.size(); i++) 
	{
		if (word[i] >= 'A' && word[i] <= 'Z')
			word[i] += 32;
	}
	return word;
}

class Car
{
public:
	
	int wheels;
	string color;
	int speed;
	string type;
	string model; 
	float price; 

public:
	virtual void features() 
	{

	}

	void display_features()
	{
		cout << "Type: " << type << endl;
		cout << "Model: " << model << endl;
		cout << "Color: " << color << endl;
		cout << "Price: " << price << endl;
	}

};

class sedan : public Car {
public:

	sedan()
	{
		type = "Sedan";
		model = "Honda Civic";
		color = "Blue";
		price = 10000;

	}

	void features() 
	{
		cout << "Features of Sedan are:\n";
		display_features();
	}


};

class minivan : public Car {
public:
	
	minivan()
	{
		type = "Minivan";
		model = "Pacifica Hybrid";
		color = "Silver";
		price = 50000;

	}

	void features() 
	{
		cout << "Features of Minivan are:\n";
		display_features();
	}
};


class crossover : public Car
{
public:
	crossover()
	{
		type = "Crossover";
		model = "Hyndai Santa Fe Hybrid";
		color = "Red";
		price = 35000;

	}

	void features()
	{
		cout << "Features of Crossover are:\n";
		display_features();
	}
};


class coupe : public Car {

public:
	coupe()
	{
		type = "Coupe";
		model = "BMW 230";
		color = "White";
		price = 80000;

	}

	void features() 
	{
		cout << "Features of Coup are:\n";
		display_features();
	}
};

class convertible : public Car 
{
public:
	convertible()
	{
		type = "Convertable";
		model = "Camero";
		color = "Yellow";
		price = 65000;

	}

	void features() 
	{
		cout << "Features of Convertible are:\n";
		display_features();
	}
};


int main()
{
	string type;

	cout << "Enter what type of car you are looking for: ";
	cin >> type; 
	cout << "\nFeatures of " << lower(type) << " car is listed below:\n";

	Car* cr; 

	if (lower(type) == "minivan")
	{
		minivan mv; 
		cr = &mv; 
		cr->features();
	}
	else if (lower(type) == "sedan")
	{
		sedan sd; 
		cr = &sd; 
		cr->features();
	}

	else if (lower(type) == "coupe")
	{
		coupe cp; 
		cr = &cp; 
		cr->features();
	}

	else if (lower(type) == "crossover")
	{
		crossover cross; 
		cr = &cross; 
		cr->features();
	}
	else if (lower(type) == "convertible")
	{
		convertible cv; 
		cr = &cv; 
		cr->features();
	}
	else
	{
		cout << "Invalid input";
	}

	return 0;
}