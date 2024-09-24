
#ifndef FILE_H
#define FILE_H

#include <iostream>
#include <string>
#include <iomanip>
#include "Date.h"

using namespace std;

class File {
		
	public:
		//constructor
		File(string name, string content, Date& date);
		
		//setters
		
		//getters
		
		//other
        bool lessthan(File& f);
		void print();
        void printContents();
	
	private:
		//functions
	
		//variables
		string name;
        string content;
        Date date;
	
};
#endif
