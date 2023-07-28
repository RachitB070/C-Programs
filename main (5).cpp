
#include <iostream>

using namespace std;

int main()
{
    char avalibility;
    int NumOfPeopleAttending;
    char Avalibility[2] = {'Y', '.'};
    char PeopleComingDay1;
    char PeopleComingDay2;
    char PeopleComingDay3;
    char PeopleComingDay4;
    char PeopleComingDay5;
     int peopleComingDay1 =0;
    int peopleComingDay2 =0;
    int peopleComingDay3 =0;
    int peopleComingDay4 =0;
    int peopleComingDay5 =0;
    
    cin >> NumOfPeopleAttending;
    
   for(int i = 1; i<=NumOfPeopleAttending; i++) {
       
            cin >> PeopleComingDay1;
          cin >> PeopleComingDay2;
          cin >> PeopleComingDay3;
          cin >> PeopleComingDay4;
          cin >> PeopleComingDay5;
   
       
       cout << endl;
       
       if(PeopleComingDay1 == Avalibility[0]) {
           peopleComingDay1++;
       } else if(PeopleComingDay2 == Avalibility[0]) {
           peopleComingDay2++;
       } else if(PeopleComingDay3 == Avalibility[0]) {
           peopleComingDay3++;
       }else if(PeopleComingDay4 == Avalibility[0]) {
           peopleComingDay4++;
       }else if(PeopleComingDay5 == Avalibility[0]) {
           peopleComingDay5++;
       }
   }
          cout << peopleComingDay1;
         cout << PeopleComingDay2;
         cout << PeopleComingDay3;
        cout << PeopleComingDay4;
     cout << PeopleComingDay5;
   
   

    return 0;
}
