#include<iostream>
#include<fstream>
using namespace std;

int main(){
    fstream myFile;
     
    //write
    //if the file does not exist, it will be created!
    //out mode will override what's already written in the file 
    myFile.open("sample3.txt", ios::out); //open will take two arguments--> name of file and mode(read,write,append)
    if(myFile.is_open()){
        myFile<<"Hello"<<endl;
        myFile<<"This is next line "<<endl;
        myFile.close();
    }

    myFile.open("sample3.txt", ios::app); //append(to not override)
     if(myFile.is_open()){
        myFile<<"Hello2"<<endl;
        myFile.close();
    }

    return 0;
}