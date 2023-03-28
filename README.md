# Operating Systems concepts that excite me!
<h5>1) Scheduling Algorithms</h5>
<h5>2) Memory Management Algorithms</h5>
<h5>3) Miscellaneous Algorithms</h5>
<h5> Authors/Contributors </h5>

[Kaushik Kumar](https://github.com/Kaushik268mlore)

## Advanced Operating Systems Interview Questions - Process Scheduling, Deadlocks, Memory Management, and More<br>
What is a deadlock?<br>
<h5>Deadlock is basically unavailability of sufficient resources to concurrently run the processes. They normally occur because of Mutual Exclusion(its basically just a way of concurreny control that prevents race conditions in Operating Systems) , Premption(giving an external the resources of the ongoing process) ,Hold and Wait(where a process holds a resource and still waits for other resources to finish its job.) & Circular Wait(Two or resources wait for resources each have in a cyclic order) </h5>
How do you prevent a deadlock?<br>
<h5>Well, Deadlock Prevention is usually frowned upon though , due to its higher order of computation <br>
Well, there are a few ways Deadlock Avoidance  is possible - Banker's Algorithm <br>
Deadlock Prevention is done by elimination of any one of the causations of the deadlock.
Deadlock Negligence - Treating deadlock is highly expensive on the resources , So in most cases it is neglected and the process is killed ( more like the times when we kill a task using task manager while our browsers show high latency )
</h5>
What is synchronization?<br>
<h5> Its a way to concurrently run multiple processes that don't affect each others (in terms of resource allocation and writes)
</h5>
What is a semaphore?<br>
<h5>Semaphores are basically IPC mechanisms that ensure synchronisation of processes. Using semaphores is just one way of attaining sync.<br>
There are basically 2 types Mutex-lock(binary) and counting semaphores(can range depending on the number of processes).</h5>
What is a race condition?<br>
<h5>
A race condition is a situation that occurs when two or more threads or processes attempt to perform operations on shared data at the same time1. Because the thread scheduling algorithm can swap between threads at any time, you don’t know the order in which the threads will attempt to access the shared data1. This can result in unpredictable behavior and undesirable outcomes.

To prevent race conditions from occurring, you would typically put a lock around the shared data to ensure only one thread can access the data at a time.
</h5>
What are mutex locks?<br>
<h5>These are basially variables(entities) in programs that prevent multiple processes from accessing a shared resource at a time.<br>
<pre>
  std::mutex mtx; // mutex for critical section

void print_block(int n, char c) {
    // critical section (exclusive access to std::cout signaled by locking mtx):
    mtx.lock();
    for (int i = 0; i < n; ++i) { std::cout << c; }
    std::cout << '\n';
    mtx.unlock();
}

int main() {
    std::thread th1(print_block, 50, '*');
    std::thread th2(print_block, 50, '$');

    th1.join();
    th2.join();

    return 0;
} </pre>
</h5>
What is a process?<br>
<h5>Process is the most fundamental unit of Computation.</h5>
Difference between thread and process?<br>
<h5>A process is an instance of a program that is being executed. It contains the program code and its current activity. Each process has its own memory space and system resources.<br>
A thread, on the other hand, is a lightweight unit of execution within a process. Threads share the same memory space and system resources as their parent process.
Some notable differences are :
<br><li>A process is an instance of a program that is being executed, while a thread is a lightweight unit of execution within a process.<br><li>
Processes have their own memory space and system resources, while threads share the same memory space and system resources as their parent process.<br><li>
Processes are independent and do not share data with each other, while threads within the same process can share data with each other.<br><li>
Creating a new process takes more time and resources than creating a new thread.<br><li>
Context switching between processes takes more time than context switching between threads.</h5>
What is an orphan process?<br>
Why is the CPU known as a resource allocator?<br>
What is the role of the kernel in an OS?<br>
What is the difference between paging segmentation?<br>
What is thrashing?<br>
What is virtual memory?<br>
What is aging?<br>
What is context switching?<br>
Explain process synchronization?<br>
Mention any four scheduling algorithms and which is the best scheduling algorithm?<br>
What is spooling?<br>
What is the use of the trap bit?<br>
What is a bootstrap program?<br>
Can a system run without an OS?<br>
What sockets do hackers use?<br>
What are the types of semaphores?<br>
What is compaction?<br>
How can you increase the priority of a process?<br>
What is disk scheduling?<br>
What is Belady's anomaly?<br>
What is C-SCAN?<br>
What is interprocess communication?<br>
What are real-time systems?<br>
What is timestamp?<br>
What are the different cache mapping techniques?<br>
What is response and turnaround time?<br>
What are the different file accessing methods?<br>
What is memory management, and how is the OS responsible for it?<br>
Mention any two deadlock prevention algorithms.<br>
What is system software?<br>
What is a critical section in the context of process synchronization?<br>
What is a deadlock avoidance algorithm, and how does it work?<br>
What is the difference between preemptive and non-preemptive scheduling?<br>
Explain the concept of paging in virtual memory.
What is the purpose of a file system, and how does it work?<br>
What is a system call, and how is it different from a regular function call?<br>
What is a thread pool, and how does it improve performance in multi-threaded applications?<br>
Explain the concept of demand paging and how it improves the efficiency of virtual memory.<br>
What is a cache hit and a cache miss, and how do they affect system performance?<br>
What is the role of the memory manager in an operating system?<br>
What is the purpose of the process scheduler in an operating system, and how does it work?<br>
Explain the concept of a deadlock detection algorithm, and how is it used in practice?<br>
What is the difference between a kernel thread and a user-level thread?<br>
What is the difference between a semaphore and a mutex, and when would you use each one?<br>
How does virtual memory protect processes from interfering with each other?<br>
What is a context switch, and why is it an important operation in an operating system?<br>
How do you measure the performance of an operating system, and what metrics are used?<br>
What is a device driver, and what is its role in an operating system?<br>
How does the operating system manage input/output operations, and what challenges does it face?<br>
What is a trap, and how is it used in operating system design?<br>
