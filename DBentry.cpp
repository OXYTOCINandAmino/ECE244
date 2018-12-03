#include "DBentry.h"
#include <iostream>
#include <string>
using namespace std;

	// the default constructor
	DBentry::DBentry(){ 
        //cout <<"DBentry created"<< endl;
        }

    DBentry::DBentry(string _name, unsigned int _IPaddress, bool _active){
        name = _name;
	    IPaddress = _IPaddress;
        active = _active;
        //cout <<"DBentry created: "<<name<<" "<<IPaddress<<" "<<active<< endl;
    }

	// the destructor
 	DBentry::~DBentry(){ 
        //cout <<"DBentry destroyed"<<endl;
        }	

	// sets the domain name, which we will use as a key.
	void DBentry::setName(string _name){
        name = _name;
        //cout <<"name set to "<< name << endl;
    }

	// sets the IPaddress data.
	void DBentry::setIPaddress(unsigned int _IPaddress){
        IPaddress = _IPaddress;
        //cout <<"IPaddress set to "<< IPaddress << endl;
    }
    
        // sets whether or not this entry is active.
    void DBentry::setActive (bool _active){
        active = _active;
        //cout <<"active set to "<< active << endl;
    }

        // returns the name.
	string DBentry::getName() const{
        return name;
    }

	// returns the IPaddress data.
	unsigned int DBentry::getIPaddress() const{
        return IPaddress;
    }

        // returns whether or not this entry is active.
    bool DBentry::getActive() const{
        return active;
    }

	// prints the entry in the format 
        // name : IPaddress : active  followed by newline
        // active is printed as a string (active or inactive)
    ostream& operator<< (ostream& out, const DBentry& rhs){
        string Active;
        if(rhs.active == 1){ Active = "active";}
        else{ Active = "inactive";}
        
        out << rhs.name <<" : "<< rhs.IPaddress << " : " << Active << endl;
        return out;
    }