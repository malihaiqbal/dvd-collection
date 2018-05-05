#include<iostream>
#include "DvDCollection.h"
using namespace std;
int main()
{
  dvdcollection d1;
  d1.add(*(new dvd("Windows XP",150)));
  d1.add(*(new dvd("Windows 10",170)));
  d1.add(*(new dvd("GTA VC",100)));
  d1.add(*(new dvd("IGI",120)));
  d1.add(*(new dvd("NEED FOR SPEED",150)));
  d1.add(*(new dvd("CALL OF DUTY",170)));
  d1.add(*(new dvd("CRICKET 2011",100)));
  d1.display();
  dvdcollection d2;
  d2.add(*(new dvd("dasc ",150)));
  d2.add(*(new dvd("Wacdadc",170)));
  d2.add(*(new dvd("GTA VC",100)));
  d2.add(*(new dvd("IGI",120)));
  d2.add(*(new dvd("NEED FOR SPEED",150)));
  d2.add(*(new dvd("CALL OF DUTY",170)));
  d2.add(*(new dvd("CRIadcdacdcdc",100)));
  d2.display();
  cout << endl <<"Index :"<<d1.search(100)<<endl;
  d1.Delete("CRICKET 2011");
  d1.display();
  system("pause");

};
