
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
    cout<<name<<": "<<date.getYear()<<" "<<date.getMonthName()<<" "<<date.getDay()<<"\n";
}

void File::printContents(){
    cout<<content<<"\n";
}