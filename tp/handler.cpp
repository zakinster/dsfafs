#include <iostream>
#include <string>
#include <fstream>
#include <sstream>

#include <cstdlib>
#include <cstdio>

using namespace std;

int main(int argc, char** argv) 
{
	cout << "Content-Type: text/plain"<< endl << endl;

  fstream file;
  file.open(getenv("PATH_TRANSLATED"));

  if(file.is_open())
  {
    stringstream out;
    string line;
    while ( file.good() )
    {
      getline (file, line);
      out << line << endl;
    }
    string content = out.str();

    for(int i = 0 ; i < content.length() ; ++i) {
      if(content[i] == '$') cout << "Hello, World!";
      else cout << content[i];
    }
  }
  
  cout << endl << endl;
	return 0;
}
