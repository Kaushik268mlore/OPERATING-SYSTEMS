#include <iostream>
#include <queue>

const int NUM_QUEUES = 3;  // number of queues in the scheduler
const int QUANTUM = 10;  // time slice for each process

struct Process {
  int id;
  int burstTime;
  int remainingTime;
  int waitingTime;
  int queue;  // which queue the process is in (0 = highest priority, NUM_QUEUES - 1 = lowest priority)
};

int main() {
  std::queue<Process> queues[NUM_QUEUES];  // queues of processes waiting to be executed

  // create some processes and add them to the appropriate queue
  Process p1 = {1, 25, 25, 0, 0};
  queues[0].push(p1);
  Process p2 = {2, 15, 15, 0, 1};
  queues[1].push(p2);
  Process p3 = {3, 30, 30, 0, 2};
  queues[2].push(p3);
  Process p4 = {4, 20, 20, 0, 1};
  queues[1].push(p4);

  int currentTime = 0;  // current time in the scheduler

  // keep executing processes until all queues are empty
  bool done = false;
  while (!done) {
    done = true;  // assume all queues are empty

    // check each queue for a process to execute
    for (int i = 0; i < NUM_QUEUES; i++) {
      if (!queues[i].empty()) {
        done = false;  // at least one queue is not empty, so we are not done yet

        Process p = queues[i].front();
        queues[i].pop();

        // execute the process for a time quantum
        std::cout << "Executing process " << p.id << " for " << QUANTUM << " time units" << std::endl;
        p.remainingTime -= QUANTUM;
        currentTime += QUANTUM;
        p.waitingTime = currentTime - p.burstTime;

        // if the process has not finished, put it in the next lower priority queue
        if (p.remainingTime > 0) {
          p.queue++;
          queues[p.queue].push(p);
        }
      }
    }
  }

  return 0;
}
