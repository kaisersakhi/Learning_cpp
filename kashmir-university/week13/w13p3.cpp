/*
    Author : KaiserSakhi
    Date : 01-05-2021
    Environment : WSL KaliLinux

*/

// define a class with appropriate data members and member functions which opens an input and output file,
//cheks each one for being open and then reads name, age, salary of a person from the input file and
//stores the information in an object increases the salary by a bojnus of 10% and then writes the person 
//object to the output file. it continues until the input stream is no loget good.

#include<iostream>
#include<fstream>
#include<ios>

struct Person{
    std::string name;
    int age;
    double salary;
    bool isNull;
};

class Record{
    Person person;
    std::ofstream fout;
    std::ifstream fin;
public:
    Record(){
        openStreams();
    }

    Person &getRecord(){
        if (!fin.eof()){
            fin>>person.name;
            fin>>person.age;
            fin>>person.salary;
            person.isNull = false;
            return person;
        }
        person.isNull = true;
        return person;
    }
    bool writeRecord(Person &person){
        if (fout.is_open() && !person.isNull){
            fout<<person.name<<" "<<person.age<<" "<<person.salary<<"\n";
            return true; // record has been written to the stream
        }
        return false; // unable to write record to the stream
    }

    bool areStreamsOpen(){
        if (fout.is_open() && fin.is_open())
            return true;
        return false;
    }

    ~Record(){
        closeStreams();
    }

private:
    void openStreams(){
        fout.open("output.txt", std::ios::app);
        fin.open("input.txt");
    }
    void closeStreams(){
        if (fout.is_open())
            fout.close();
        if (fin.is_open())
            fin.close();
        std::cout<<"Streams Have been closed!\n";
    }
    
};

int main(){
    Person person;
    Record record;
    if (record.areStreamsOpen()){
        std::cout<<"Both Streams Are Open!\n\n\n";
    }else{
        std::cout<<"Both Streams Are Not Open!\n";
        return 1; // shut the program
    }
    person = record.getRecord();
    while(!person.isNull && record.areStreamsOpen()){
        person.salary = person.salary+(person.salary * 0.10);
        std::cout<<person.name<<" "<<person.age<<" "<<person.salary<<"\n";
        record.writeRecord(person);
        person = record.getRecord();
    }
    return 0;
}