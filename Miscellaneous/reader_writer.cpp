#include <iostream>
#include <thread>
#include <mutex>
#include <condition_variable>

using namespace std;
// here i'm using semaphores like mutex,read_count,ready and cv
//and i'm are using threading to simulate a premptive environment.
mutex mtx;
condition_variable cv;
int read_count = 0;
bool ready = false;

void reader() {
  while (true) {
    unique_lock<mutex> lock(mtx);
    cv.wait(lock, []{return ready;});
    ++read_count;
    cout << "Reading starts. Reader count: " << read_count << endl;
    lock.unlock();
    this_thread::sleep_for(chrono::seconds(1));
    lock.lock();
    --read_count;
    cout << "Reading ends. Reader count: " << read_count << endl;
    lock.unlock();
  }
}

void writer() {
  while (true) {
    unique_lock<mutex> lock(mtx);
    ready = true;
    cv.notify_all();
    cout << "Writing starts." << endl;
    lock.unlock();
    this_thread::sleep_for(chrono::seconds(1));
    lock.lock();
    ready = false;
    cout << "Writing ends." << endl;
    lock.unlock();
  }
}

int main() {
  thread r1(reader);
  thread r2(reader);
  thread w1(writer);
  r1.join();
  r2.join();
  w1.join();
  return 0;
}