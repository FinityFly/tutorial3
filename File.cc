
#include "File.h"
#include "Date.h"

File::File(string n, string c, Date& d){
    name = n;
    content = c;
    date.setDate(d);
}


bool File::lessthan(File& f){
    return date.lessThan(f.date);
}

void File::print(){
    cout<<"File: "<<name<<"\nDate added: "<<date.getMonthName()<<" "<<date.getDay()<<", "<<date.getYear()<<"\n";
}

void File::printContents(){
    cout<<"File: "<<name<<"\nDate added: "<<date.getMonthName()<<" "<<date.getDay()<<", "<<date.getYear()<<"\n"<<content<<"\n";
}