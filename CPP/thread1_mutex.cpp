#include <iostream>
#include <vector>
#include <thread>
#include <mutex>

#define THREAD_NUM 10
#define MUTEX_NUM 3
#define ITER_NUM 100000


void worker(int* counter, std::mutex* m) {
    for(int i = 0; i < ITER_NUM; i++) {
        m->lock();
        *counter += 1;
        m->unlock();
    }
}


int main (void) {
    int counter = 0;

    std::mutex m;
    std::vector<std::thread> workers;
    for(int i = 0; i<THREAD_NUM; i++) {
        workers.push_back(std::thread(worker, &counter, &m));
    }

    for(int i = 0; i<THREAD_NUM; i++) {
        workers[i].join();
    }

    std::cout << counter << std::endl;
}