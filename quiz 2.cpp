// quiz 2.cpp : This file contains the 'main' function. Program execution begins and ends there.
//Ali lashkari

#include <iostream>
#include<string>
using namespace std;

class student{       
  public:             
    int Num_student;
    string name;
    string last_name;
    int Num;
    
};
int main() {
    double sum, average;
    student studentObj1;
    studentObj1.Num_student = 99884456;
    studentObj1.name = "mahan";
    studentObj1.last_name = "jaberi";
    studentObj1.Num = 15;
    
    student studentObj2;
    studentObj2.Num_student = 99884454;
    studentObj2.name = "sara";
    studentObj2.last_name = "haha";
    studentObj2.Num = 20;

    student studentObj3;
    studentObj3.Num_student = 99884433;
    studentObj3.name = "mamad";
    studentObj3.last_name = "asdadwa";
    studentObj3.Num = 10;

    sum = studentObj3.Num + studentObj2.Num + studentObj1.Num;
    average = sum / 3;
    cout << average;
    return 0;
}//Ali lashkari