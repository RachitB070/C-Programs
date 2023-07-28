#include <iostream>

using namespace std;

int main() {
	int NumOfPeppers;
	string tYpeOfPeppers;
	string typeOfPeppers[6] = { "Poblano", "Mirasol", "Serrano", "Cayenne", "Thai", "Habanero" };
    
  
    
	int TotalHeat = 0;

	cin >> NumOfPeppers;

	for (int i = 1; i <= NumOfPeppers; i++) {
		cin >>tYpeOfPeppers;
		
		if (tYpeOfPeppers == "Poblano") {
			TotalHeat = TotalHeat + 1500;
		} if(tYpeOfPeppers == "Mirasol") {
		    TotalHeat = TotalHeat+6000;
		}if(tYpeOfPeppers == "Serrano") {
		    TotalHeat = TotalHeat+15500;
		}if(tYpeOfPeppers == "Cayenne") {
		    TotalHeat = TotalHeat+40000;
		}if(tYpeOfPeppers == "Thai") {
		    TotalHeat = TotalHeat+75000;
		}if(tYpeOfPeppers == "Habanero") {
		    TotalHeat = TotalHeat+125000;
		}


	}
	cout << TotalHeat;

}

