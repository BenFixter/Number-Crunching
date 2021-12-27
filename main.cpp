#include <iostream>
#include <iomanip>
using namespace std;

void temperatureConversion() {
	int celcius;

	cout << "What is the temperature?";
	cin >> celcius;

	cout << "\nCelcius:" << celcius;
	cout << "\nfahrenheit:" << (celcius * 9 / 5) + 32;
	cout << "\nKelvin" << celcius + 273.15 << "\n";

}

void excerciseSummary() {
	int metres, seconds;

	cout << "Metres: ";
	cin >> metres;

	cout << "Seconds: ";
	cin >> seconds;

	float miles = (5 * (metres / 1000.0)) / 8;
	float hours = (seconds / 60.0) / 60;
	float avgspeed = (miles / hours);
	float avgpace = (seconds / miles) / 60;
	int wholemins = avgpace;
	int wholesecs = (avgpace - wholemins) * 60;

	cout << "Distance: " << fixed << setprecision(1) << (5 * (metres / 1000.0) / 8) << " miles" << "\n";
	cout << "Average Speed: " << fixed << setprecision(1) << avgspeed << "mph" << "\n";
	cout << "Average Pace: " << wholemins << "mins " << wholesecs << "secs";


}

void numberManipulation() {
	int input;

	cout << "Please provide a 4 digit number";
	cin >> input;

	int dig1 = input / 1000 % 10;
	int dig2 = input / 100 % 10;
	int dig3 = input / 10 % 10;
	int dig4 = input % 10;

	float average = (dig1 + dig2 + dig3 + dig4) / 4.0;

	dig1 = dig1 + 5;
	dig2 = dig2 + 5;
	dig3 = dig3 + 5;
	dig4 = dig4 + 5;

	 input = ((((dig1 * 10) + dig2) * 10 + dig3) * 10 + dig4);

	cout << dig1 << "\n";
	cout << dig2 << "\n";
	cout << dig3 << "\n";
	cout << dig4 << "\n";
	cout << input << "\n";
	cout << average;
}

int main() {
	//temperatureConversion();
	//excerciseSummary();
	numberManipulation();

	system("pause");
	return 0;
}
