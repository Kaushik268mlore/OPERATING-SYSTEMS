#include <iostream>
#include <vector>

using namespace std;

struct MemoryBlock {
  int start;  // start address of the block
  int size;  // size of the block
  bool used;  // whether the block is currently in use
};

int main() {
  vector<MemoryBlock> memory;  // vector representing the memory blocks

  // create some free blocks of memory
  MemoryBlock m1 = {0, 100, false};
  memory.push_back(m1);
  MemoryBlock m2 = {200, 50, false};
  memory.push_back(m2);
  MemoryBlock m3 = {300, 25, false};
  memory.push_back(m3);

  // allocate some memory blocks
  int size = 50;  // size of the block to allocate
  bool allocated = false;  // whether the block was successfully allocated
  for (int i = 0; i < memory.size(); i++) {
    if (!memory[i].used && memory[i].size >= size) {
      // found a free block that is large enough, so allocate it
      memory[i].used = true;
      allocated = true;
      cout << "Allocated block of size " << size << " at address " << memory[i].start << endl;
      break;
    }
  }
  if (!allocated) {
    cout << "Could not allocate block of size " << size << endl;
  }

  return 0;
}
