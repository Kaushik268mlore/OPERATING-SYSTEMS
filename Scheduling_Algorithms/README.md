# Scheduling algorithms: These algorithms are used to determine which tasks should be executed by the CPU and in what order. Examples include round-robin scheduling, priority scheduling, and multi-level feedback queue scheduling.
<br>
<<<<<<< HEAD
1) <h5>Round Robin Scheduling</h5>
<p> In the above example, the scheduler maintains a queue of processes that are waiting to be executed (the readyQueue). At each time step, it selects the process at the front of the queue and executes it for a fixed time quantum (in this case, 10 time units). If the process has not finished after the time quantum, it is placed back in the queue. This continues until all of the processes in the ready queue have completed.</p>
2)<h5>Priority Scheduling</h5>
<p>In the above example, the scheduler maintains a priority queue of processes that are waiting to be executed (the readyQueue). At each time step, it selects the process at the top of the queue (the one with the highest priority) and executes it. This continues until all of the processes in the ready queue have completed.

The priority queue is implemented using the std::priority_queue class in the C++ Standard Template Library (STL). The ComparePriority struct is used to specify a comparison function that determines the order of the elements in the queue. In this case, the comparison function compares the priorities of the processes, so that processes with higher priority values are given higher priority in the queue.</p>
3)<h5>Multi Level Feedback Scheduling</h5>
=======
<h5>1) Round Robin Scheduling</h5>
<p> In the above example, the scheduler maintains a queue of processes that are waiting to be executed (the readyQueue). At each time step, it selects the process at the front of the queue and executes it for a fixed time quantum (in this case, 10 time units). If the process has not finished after the time quantum, it is placed back in the queue. This continues until all of the processes in the ready queue have completed.</p>
<h5>2) Priority Scheduling</h5>
<p>In the above example, the scheduler maintains a priority queue of processes that are waiting to be executed (the readyQueue). At each time step, it selects the process at the top of the queue (the one with the highest priority) and executes it. This continues until all of the processes in the ready queue have completed.

The priority queue is implemented using the std::priority_queue class in the C++ Standard Template Library (STL). The ComparePriority struct is used to specify a comparison function that determines the order of the elements in the queue. In this case, the comparison function compares the priorities of the processes, so that processes with higher priority values are given higher priority in the queue.</p>
<h5>3) Multi Level Feedback Scheduling</h5>
>>>>>>> ad3cdf9 (updating all changes)
<p>In this example, the scheduler maintains a number of queues of processes that are waiting to be executed (the queues array). Each queue has a different priority, with the highest priority queue having index 0 and the lowest priority queue having index NUM_QUEUES - 1. At each time step, the scheduler selects the first process from the highest priority queue that has a process waiting and executes it for a fixed time quantum (in this case, 10 time units). If the process has not finished after the time quantum, it is placed in the next lower priority queue. This continues until all of the queues are empty.</p>

<h4>Do fork this repository for more optimisation related codes..</h4>