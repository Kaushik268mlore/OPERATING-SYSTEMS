#include <iostream>
#include <queue>

struct Process {
  int id;
  int burstTime;
  int priority;
};

// comparison function for the priority queue
struct ComparePriority {
  bool operator()(const Process& p1, const Process& p2) const {
    // higher priority values should have a higher priority in the queue
    return p1.priority < p2.priority;
  }
};

int main() {
  std::priority_queue<Process, std::vector<Process>, ComparePriority> readyQueue;  // priority queue of processes waiting to be executed

  // create some processes and add them to the ready queue
  Process p1 = {1, 25, 3};
  readyQueue.push(p1);
  Process p2 = {2, 15, 1};
  readyQueue.push(p2);
  Process p3 = {3, 30, 2};
  readyQueue.push(p3);
  Process p4 = {4, 20, 4};
  readyQueue.push(p4);

  // keep executing processes until the ready queue is empty
  while (!readyQueue.empty()) {
    Process p = readyQueue.top();
    readyQueue.pop();

    // execute the process
    std::cout << "Executing process " << p.id << " with priority " << p.priority << std::endl;
  }

  return 0;
}
