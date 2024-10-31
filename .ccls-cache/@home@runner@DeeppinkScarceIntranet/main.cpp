#include <iostream>
using namespace std;

int main()
{
  float pesha,gjatesia,gjatesia_m;
  double BMI;
  string emri,mbiemri;
  cout<<"Jepni emrin:";cin>>emri;
  cout<<"Jepni mbiemrin:";cin>>mbiemri;

  cout<<"Jepni peshen:";cin>>pesha;
  cout<<"Jepni gjatesine:";cin>>gjatesia;
  gjatesia_m=gjatesia/100;
  BMI=pesha/(gjatesia_m*gjatesia_m);

  cout<<"Miresevini "<<mbiemri<< " "<<emri<< " pesha juaj eshte :"<<pesha<<"kg"<< " Gjatesia juaj eshte:"<<gjatesia<< "cm ," << "dhe BMI indexi juaj eshte:"<<BMI;

return 0;

  
}