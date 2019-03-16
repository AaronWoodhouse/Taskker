#ifndef __tasks_h__
#define __tasks_h__

#include <iostream>
#include <string>
#include <vector>
#include <fstream>

using namespace std;

struct Task {
  string _info = "";
  string _date = "";
  bool _complete = 0;
  int _priority = 0;
};

class TaskSet {
protected:
  vector<Task> tasks;
  string _name = "";

public:
  TaskSet(string name);
  TaskSet();
  ~TaskSet();

  void addTask();
  void addTask(bool complete, string info, string date, int priority);
  void removeTask();

  void toggleComplete();
  void changeInfo();
  void changeDate();
  void setPriority();

  void displayTasks();

  void load();
  void save();

  void changeName();
  string getName();

  void removeAll();
  void removeThese();
  void completeThese();

  void getTask();

};

#endif
