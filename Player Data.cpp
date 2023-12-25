#include <iostream>
#include <string>
#include <cmath>
using namespace std;

int main() {
  //variables
  float score ;
  string value,player;//value is the name of the people filter ,player is player name
  
     //initialise
  int total = 0;
   int min=2147483647;
  int  max= -1;
   string max_name;
  string  min_name;
  bool ppl = false;
  
  //all
  cout<<"Enter name to filter. Enter \"all\" to process all records:" <<endl;
  cin>>value;
  cout<<"Enter data:" << endl;
  
  while(true){
    cin >> player;
    if (player == "done")
      break;
    cin >> score;
//natural number
  if(floor(score)==score &&score>=0 && !cin.fail()) {
    if (value == "all" || value == player){
      ppl = true;
    if(score>max){
      max=score;
      max_name=player;
    }
   
    if(score<min){
      min=score;
      min_name=player;
    }
  
    total=total+score;
   
    }
  }
  else {
    cin.clear();
    continue;
  }
  }

   cout << "-------" << endl << "Results" << endl << "-------\n";

  //no data found
   if(ppl == true){
    cout<<"Minimum: "<<min_name<<" "<<min<< endl;
   cout<<"Maximum: "<<max_name<<" "<<max<< endl;
  cout<<"Total: "<<total<<endl;
   }
     
  else if (ppl == false){
    cout<<"Minimum: (no data found)"<<endl;
    cout<<"Maximum: (no data found)"<<endl; 
    cout<<"Total: (no data found)"<<endl;
  }

  return 0;
}
  
