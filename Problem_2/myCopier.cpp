// Chris Jordan
// Homework 7 Problem 2
// This Program is used to copy the contents from one file to another
// This Program accepts 2 command line arguments:
// - The first argument is the file to read
// - The second argument is the file to write
// Example invocation
// - ./myCopier read.txt write.txt

#include <iostream>
#include<fstream>
#include<string>
using namespace std;

int main(int argc, char* argv[]) {
  string InputFile = argv[1];
  string OutputFile = argv[2];

  ifstream inputFile(InputFile);
  ofstream outputFile(OutputFile);

  string line;
  while (getline(inputFile, line)) {
    outputFile << line << endl;
  }
 inputFile.close();
 outputFile.close();

 return 0;
}
