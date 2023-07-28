#include <iostream>

using namespace std;

int main()
{
    //5 starts given for each point score 
    //3 points deducted for foul commited
    
    //PointScore > foul
    
    int PointScore;
    int Fouls;
    int StarRating;
    int TotalPlayers;
    int StarPlayer = 0;
    
    cin >> TotalPlayers;
   
    
    
    for(int i = 1; i <= TotalPlayers; i++) {
        
        cin >> PointScore;
        cin >>  Fouls;
        StarRating = (PointScore * 5) - (Fouls * 3);
        if(StarRating > 40) {
            StarPlayer++;
        }
    }

     if(StarPlayer == TotalPlayers) {
        cout << StarPlayer;
        cout << "+";
    } if(StarPlayer!= TotalPlayers) {
        cout << StarPlayer;
    }
    
    return 0;
}


