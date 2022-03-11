//                                         **** PRACTICAL -> 6 ****                     


// INSTRUCTIONS :-

// Create two classes DM and DB which store the value of distances. DM stores distances in metres and centimetres and 
// DB stores distance in feet and inches. Write a program that can read values for the class objects and add one object
// DM with another object of DB.


// Use a friend function to carry out the addition operation. The object that stores the results may be a DM object or DB
// object, depending on the units in which objects are required.

// The display should be in the form of feet and inches or metres and centimetres depending on the object on display.


#include<iostream>
#include<conio.h>
#include<stdio.h>
#include<math.h>
using namespace std;

class DM
{

public:
double metre,centimetre;

};

class DB
{

public:
double feet,inches;

friend void add(DM,DB);

};

void add(DM dm,DB db)
{

double d1,d2;

cout<<"\nEnter the distance in metres and centimetres : ";
cin>>dm.metre>>dm.centimetre;

cout<<"\nEnter the distance in feets and inches : ";
cin>>db.feet>>db.inches;

d1=dm.metre+(db.feet)/3.281;
d2=dm.centimetre+(db.inches)*2.54;

cout<<"\nMetre + Feet = "<<d1<<" metres";
cout<<"\nCentimetre + inches = "<<d2<<" cemtimetres";

}

int main()
{

DM dm;
DB db;

add(dm,db);

getch();
return 0;
}
