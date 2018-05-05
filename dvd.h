#include<iostream>
using namespace std;
class dvd
{
public:
dvd()      //constructors
{
  string name ="";
  float cost=0;
};
dvd(string name , float cost)
{
  this->name = name;
  this->cost = cost;
};
dvd (dvd & clone)
{
  this->name=clone.name;
  this->cost=clone.cost;
};
void setname(string name)  //setters
{
  this->name=name;
};
void setcost(float cost)
{
  this->cost=cost;
};
string getname()   //getters
{
  return this->name;
};
float getcost()
{
  return this->cost;
};
void display()
{
  cout<<"Name of DVD :"<< this->name << endl << "PRICE :" << this->cost << endl;

};

private:
string name;
float cost;
};

ostream& operator <<(ostream& o , dvd& S) //ostream
{
  return o <<"Name :"<< S.getname() <<endl << "DvD cost :"<< S.getcost() << endl;
};