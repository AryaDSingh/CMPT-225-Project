#include <iostream>
#include "List.h"
#include "Vector.h"
/*Arya Singh*/

double elapsed_time( clock_t start, clock_t finish){
   // returns elapsed time in milliseconds
   return (finish - start)/(double)(CLOCKS_PER_SEC/1000);
}


int main() {

  //number of elements to be tested
  int amount_ele = 1000000;
  //data types comment out ones not being used for compiler errors
  //int int_type = 1;
  //float float_type = 1.111;
  char char_type = 'a';
  

  //Vector time variables
  clock_t startVec_insert, finishVec_insert, startVec_visit, finishVec_visit ;// used for getting the time.
  
  //start time for insertion
  startVec_insert = clock();
  //for VECTOR insertion
  Vector<int> vect;
  for (int i = 0; i < amount_ele; i ++) {
    vect.push_back(char_type);
  }
  //stop time
  finishVec_insert = clock();
  
  //for VECTOR visiting
  startVec_visit = clock();
  vect.visitAll();
  
  //stop time
  finishVec_visit = clock();
  double time_taken_Vec = elapsed_time(startVec_insert,finishVec_insert);
  double time_taken_Vec_insert = elapsed_time(startVec_visit,finishVec_visit);
  
  std::cout<<"time taken for vector insertion "<<time_taken_Vec_insert<<"\n";
  std::cout<<"time taken for vector visiting "<<time_taken_Vec<<"\n";
  
  //list time variables
  clock_t startList_insert, finishList_insert, startList_visit, finishList_visit ;// used for getting the time.
  
  //start time for insertion
  startList_insert = clock();

  //for LIST insertion
  List<int> list;
  for (int y = 0; y < amount_ele; y ++) {
    list.push_back(char_type);
  }
  //stop time
  finishList_insert =clock();
  
  //for LIST visiting
  startList_visit = clock();
  list.visitAll();
  //stop time
  finishList_visit = clock();
  double time_taken_List_insert = elapsed_time(startList_insert, finishList_insert);
  double time_taken_List = elapsed_time(startList_visit, finishList_visit);
  
  std::cout<<"time taken for list insertion "<<time_taken_List_insert<<"\n";
  std::cout<<"time taken for list visiting "<<time_taken_List<<"\n";
}


