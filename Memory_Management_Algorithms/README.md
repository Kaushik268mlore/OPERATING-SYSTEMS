
<h5>1) FIRST FIT </h5>
<p>In this example, the MemoryBlock struct represents a block of memory. It has three fields: the start address of the block, the size of the block, and a flag indicating whether the block is currently in use. The memory vector represents the blocks of memory that are available.

To allocate a block of memory using the first fit algorithm, the program searches through the memory vector and looks for the first free block that is large enough to satisfy the request. If it finds such a block, it marks it as used and prints out the start address and size of the block. If it does not find a suitable block, it prints an error message.</p>