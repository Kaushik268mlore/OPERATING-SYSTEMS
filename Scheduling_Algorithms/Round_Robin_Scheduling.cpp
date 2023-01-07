#include <iostream>
#include <queue>

const int QUANTUM = 10;  // time slice for each process

struct Process {
  int id;
  int burstTime;
  int remainingTime;
  int waitingTime;
};

int main() {
  std::queue<Process> readyQueue;  // queue of processes waiting to be executed

  // create some processes and add them to the ready queue
  Process p1 = {1, 25, 25, 0};
  readyQueue.push(p1);
  Process p2 = {2, 15, 15, 0};
  readyQueue.push(p2);
  Process p3 = {3, 30, 30, 0};
  readyQueue.push(p3);
  Process p4 = {4, 20, 20, 0};
  readyQueue.push(p4);

  int currentTime = 0;  // current time in the scheduler

  // keep executing processes until the ready queue is empty
  while (!readyQueue.empty()) {
    Process p = readyQueue.front();
    readyQueue.pop();

    // execute the process for a time quantum
    std::cout << "Executing process " << p.id << " for " << QUANTUM << " time units" << std::endl;
    p.remainingTime -= QUANTUM;
    currentTime += QUANTUM;
    p.waitingTime = currentTime - p.burstTime;

    // if the process has not finished, put it back in the ready queue
    if (p.remainingTime > 0) {
      readyQueue.push(p);
    }
  }

  return 0;
}
