//Brian Mah, Chris Wang
#include <string>
#include <iostream>
#include "CPUTimer.h"
#include "dsexceptions.h"
#include "LinkedList.h"
#include "StackAr.h"
#include "CursorList.h"
#include "QueueAr.h"
#include "StackLi.h"
#include "vector.h"
#include "SkipList.h"

using namespace std;

int GetChoice();
string GetFileName();
void RunList(string filename);
void RunCursorList(string filename);
void RunStackAr(string filename);
void RunStackLi(string filename);
void RunQueueAr(string filename);
void RunSkipList(string filename);

int main()
{
  int choice;
  CPUTimer ct;


  string filename = GetFileName();
  do
  {
    choice = GetChoice();
    ct.reset();
    switch(choice)
    {
      case 1: RunList(filename); break;
      case 2: RunCursorList(filename); break;
      case 3: RunStackAr(filename); break;
      case 4: RunStackLi(filename); break;
      case 5: RunQueueAr(filename); break;
      case 6: RunSkipList(filename); break;
    }

    cout << "CPU time: " << ct.cur_CPUTime() << endl;
  } while(choice > 0);

  return 0;
}

string GetFileName()
{
  return "";
}

int GetChoice()
{

  return 0;
}

void RunList(string filename)
{

}

void RunCursorList(string filename)
{

}

void RunStackAr(string filename)
{

}

void RunStackLi(string filename)
{

}

void RunQueueAr(string filename)
{

}

void RunSkipList(string filename)
{

}
