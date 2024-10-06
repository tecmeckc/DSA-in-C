
#include <iostream>
#include <string>
using namespace std;
class Event
{
public:
  string eventName;
  string location;
};
class Sports : public Event
{
public:
  string sport;
  string category;
  void getInfo()
  {
    cout << "EventName: " << eventName << endl;
    cout << "Location: " << location << endl;
    cout << "Sport: " << sport << endl;
    cout << "category: " << category << endl;
  }
};
class Dance : public Event
{
public:
  string songName;
  string danceStyle;
  void getInfo()
  {
    cout << "Event name: " << eventName << endl;
    cout << "Location: " << location << endl;
    cout << "Song name: " << songName << endl;
    cout << "dance Style: " << danceStyle << endl;
  }
};
int main()
{
  // Sports s1;
  // s1.eventName="Annual sports week";
  // s1.location="Indira Gandhi School";
  // s1.sport="Badminton";
  // s1.category="teenage";
  // Dance d1;
  // d1.eventName="Shree shree parva";
  // d1.location="Sandipani school";
  // d1.songName="Kanha soja zara";
  // d1.danceStyle="kathak";
  // s1.getInfo();
  // cout<<endl;
  // d1.getInfo();

  return 0;
}