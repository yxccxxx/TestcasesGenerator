/*
 * Author: Yixin Chen
 * Can generate test cases
 */

#include <istream>
#include <fstream>
#include <iostream>
#include <string>


int main(int argc, char* argv[]){

  std::ifstream infile;
  infile.open("nonascii");

  std::ofstream outfile;
  outfile.open("nonascii2");

  int i = 0;
  while(1){
    std::string a;
    getline(infile, a);
    
    if(i = 66){
      for(int i = 0; i < 100000; i++){
        outfile << a;
      }
    }else{
      for(int i = 0; i < 100; i++){
        outfile << a;
      }
    }
    if(infile.eof()){
      break;
    }
    i++;
  }


  return 0;
}
