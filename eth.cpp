#include <iostream>
using namespace std;

void display(string, string, int, int, int, bool, bool, bool);
int main()
{
    string cName, capitalC;
    int popSize, numRegion, gdp;
    bool landLocked, calendar, script;
    cout << "Country Name: ";
    cin >> cName;
    cout << "Capital City: ";
    cin >> capitalC;
    cout << "Population size: ";
    cin >> popSize;
    cout << "Number Of Regions: ";
    cin >> numRegion;
    cout << "GDP in Billions: ";
    cin >> gdp;
    cout << "Is it landlocked? ";
    cin >> landLocked;
    cout << "Does it have its own Calendar? ";
    cin >> calendar;
    cout << "Does it have its own Script? ";
    cin >> script;
	
    display(cName, capitalC, popSize, numRegion, gdp, landLocked, calendar, script);
    return 0;
}

void display(string name, string cCity, int popsize, int region, int gdp, bool landLocked, bool calendar, bool script)
{
    cout << "Country Name = " << name << "\nCapital City = " << cCity;
    cout << "\nPopulation size = " << popsize << "\nNumber Of Regions = " << region;
    cout << "\nGDP in Billions = " << gdp << "\nIs it landlocked? = " << landLocked;
    cout << "\nDoes it have its own Calendar? = " << calendar;
     cout << "\nDoes it have its own Script? = " << script;
}