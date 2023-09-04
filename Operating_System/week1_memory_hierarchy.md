# Memory Hierarchy

## Multi core processor
Multi-core processor has more than one core, which processes the program by itself. One core can run a single program. Every core has a register and L1, L2 cache for itself.
But L2 cache is usually last level cache so it is shared by cores.

## Memory Hierarchy
Memory Hierarchy is an enhancement to organize the memory such that it can `minimize the access time`. The Memory Hierarchy was developed based on a program behavior known as `locality` of references.

![Memory Hierarchy](/X/Screenshot%20from%202023-09-05%2000-24-47.png)

### Cache
Small fast memory inside CPU to decrease loading time when extracting data from main memory.

- L1 cache: Fastest cache inside Core
- L2 cache: Unified cache managing multiple L1 cache
- L3 cache: Slowest cache outside the Core, shared by cores. 

### Caching
Memory caching (often simply referred to as caching) is a technique in which computer applications temporarily store data from lower memory hierarchy into higher hierarchy with locality to enable fast retrievals of that data.