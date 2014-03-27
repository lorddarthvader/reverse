#include <iostream>
#include <fstream>

/***
 *ynnoD yb dedoC
 *)stsixe elif eht fi( elif a fo stnetnoc eht ro txet nevig eht sesreveR
 *tixe ot D+lrtC
 ***/

std::string reverse(std::string txt) 
{
  std::string reversed = "";
  for(int i = txt.length(); i >= 0; i--)
    reversed += txt[i];
  return reversed;
}

int main() 
{
  std::string str;
  while(std::getline(std::cin, str)) 
    {
      std::ifstream file_(str.c_str());
      if(file_.is_open()) 
	{
	  std::string token;
	  while(std::getline(file_, token))
	    std::cout << reverse(token) << std::endl;
	  file_.close();
	}else 
	{
	  std::cout << reverse(str) << std::endl;
	}
    }
}
