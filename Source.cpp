#include<iostream>
using namespace std;

int main()
{
	cout << "BMI\n";
	cout << "Underweight: less than 18.5\n";
	cout << "Normal: between 18.5 and 24.9\n";
	cout << "Overweight: between 25 and 29.9\n";
	cout << "Obese: 30 or greater\n\n";

	double weightInKilogram, heightInMeters;
	cout << "Enter your weight in kilograms\n";
	cin >> weightInKilogram;
	cout << "Enter your height in meters\n";
	cin >> heightInMeters;

	double totalBodyMass = weightInKilogram / heightInMeters * heightInMeters;

	cout << "Your Body Mass is = " << totalBodyMass << endl;
}