#include<iostream>
#include<string>
#include "DVD.h"
using namespace std;
int i;
class dvdcollection
{
  public:
  dvdcollection()   //constructor
  {
    this->Totalcost=0;
    this->index=0;
    this->size=5;
    list = new dvd [5];
  };

  dvdcollection(float totalcost , dvd *list)   //constructor
  {
    this->Totalcost=totalcost;
    this->list=list;
  };
  dvdcollection(dvdcollection & clone)  //constructor
  {
    this->Totalcost=clone.Totalcost;
    this->index=clone.index;
    this->list=clone.list;
    this->size=clone.size;
  };
  void setTotalcost(float cost)  //setter
  {
    this->Totalcost=cost;
  };
  void setindex(int index)   //setter
  {
    this->index=index;
  };
  void setlist(dvd *list)   //setter
  {
    this->list=list;
  };
  float gettotalcost()   //getter
  {
    return this->Totalcost;
  };
  int getindex()  //getter
  {
    return this->index;
  };

  void add(dvd &d) //For adding dvds in collection
  {
    if(index < size )
    {
      list[index] = d;
      index++;
    }
    else
    {
      incsize(d);
    }
    this->Totalcost += d.getcost();
  };
  void display()  //display function
  {
    
    cout<< "        MY COLLECTION    "<<endl;
    for(i=0;i<index;i++)
    {
      cout << this->list[i] <<endl;
    }
    cout<<"Total Cost :" <<this->Totalcost<<endl;
  };
int search(string  name)  //Searching by name
  {
    dvd d1;
    int temp=0;
    for(i = 1 ; i <= index ; i++)
    {
       d1 = this->list[i-1];
      if(name == d1.getname())
      {
        temp=i;
        break;
      }
    }
      return temp;
  };
  float search(float cost)  //Searching by price
  {
    dvd d1;
    int temp=0;
    for(i = 1 ; i <= index ; i++)
    {
       d1 = this->list[i];
      if(cost == d1.getcost())
      {
        temp=i;
        break;
      }
    }
      return temp;
  };
void Delete(string name)  //For deleting collection
{
  int temp = search(name) ;
  if(temp > 0)
  { 
    for(i=temp-1 ; i < index-1 ; i++)
    {
      this->list[i] = this->list[i+1]; 
    }
    index--;
  }
  else
  {
    cout<<"Not found!!"<<endl;
  }
};
  
  protected:     //private function only accessable within a class
  void incsize(dvd &d)  //increase the size of an array
  {
    size = size * 2;
    dvd *newlist = new dvd[size];
    for(i=0 ; i < (size/2) ; i++)
    {
      newlist[i] = list[i]  ;
    }
    delete [] list;
    list = newlist ;
    list[index] = d;
    index++;
  };


  private:
  float Totalcost;
  dvd *list;
  int size;
  int index;
};