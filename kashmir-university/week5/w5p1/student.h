#include "vars.h"



int add(char* name, int rollNo){
    
    if (rollNo > TOTAL_ROLL || rollNo < 0)
        return 0;

    students[rollNo].name = name;
    students[rollNo].rollNo = rollNo;
    studentCount++;
    return 1;
}

struct Student getStudent(int rollNo){
    return students[rollNo];
}