#include <folly/synchronization/Baton.h>
#include <folly/executors/CPUThreadPoolExecutor.h>
#include <folly/futures/Future.h>    
#include <thread>
#include <iostream>

void single_thread()
{
    folly::Baton<> baton;

    std::thread worker([&]
                       {
                           std::cout << "worker:start" << std::endl;
                           std::this_thread::sleep_for(std::chrono::seconds(2));
                           std::cout << "worker: end\n";
                           baton.post(); // 唤醒
                       });
    baton.wait();
    worker.join();
}

void cpu_thread_pool()
{
    folly::CPUThreadPoolExecutor pool(4); // 4 条工作线程

    for (int i = 0; i < 8; ++i)
    {
        pool.add([i]
                 { std::cout << "task " << i
                             << " on thread " << std::this_thread::get_id() << '\n'; });
    }

}

int main()
{
    single_thread();
    cpu_thread_pool();
    return 0;
}