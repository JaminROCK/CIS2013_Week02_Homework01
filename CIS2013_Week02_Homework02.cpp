#include <iostream>
using namespace std;
//A fork to further the value of your discoveries
int main(){int bottles = 99;while(bottles !=0){/*Bottle count of one will use the singular song verse*/if(bottles==1){cout << "\n" << bottles << " bottle of beer on the wall... \n";cout << bottles << " bottle of beer. \n";cout << "You take one down, and pass it around... \n";}else{/*multiple bottles will use plural verse.*/cout << bottles << " bottles of beer on the wall, \n";cout << bottles << " bottles of beer... \n";cout << "You take one down, and pass it around... \n";}/*Decrement the bottle value for next verse.  If none are left, line 19 if statement prompts the last verse.*/bottles--;if(bottles==0){cout << "No more bottles of beer on the wall! \n";}else{if (bottles ==1){cout << bottles << " bottle of beer on the wall. \n";}else{cout << bottles << " bottles of beer on the wall. \n" << "\n";}}}return 0;}
