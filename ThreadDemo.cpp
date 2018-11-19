//
// Created by zgc on 11/19/18.
//

#include "ThreadDemo.h"
#include <thread>
#include <iostream>



void thread_fun()
{
    std::cout << "thread fun" << std::endl;
}
void ThreadDemo::demo_thread_create() {
   std::thread thread_handle(thread_fun);

    thread_handle.join();
}
