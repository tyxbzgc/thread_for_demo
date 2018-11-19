#include <iostream>

#include "ThreadDemo.h"

void thread_test()
{
    ThreadDemo temp;
    temp.demo_thread_create();
}
int main() {
    std::cout << "Hello, World!" << std::endl;
    thread_test();
    return 0;
}