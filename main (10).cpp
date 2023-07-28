
#include <iostream>

using namespace std;

int main()
{
  int NumOfPeople;
  int AmountBidded;
  
  string peopleName;
  
  cin >> NumOfPeople;
  
  for(int i = 1; i <= NumOfPeople; i++) {
      cin >> peopleName;
      cin >> AmountBidded;
  }

    return 0;
}
