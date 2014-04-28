/*************************************************************************
	> File Name: main.cpp
	> Author: huwq
	> Mail:huweiqing915@gmail.com 
	> Created Time: 2014年04月28日 星期一 14时42分11秒
 ************************************************************************/

#include "ThreadPool.h"
#include <iostream>
using namespace std;

int main()
{
	ThreadPool tp;
	tp.start_thread_pool();
	string str;
	while(cin >> str)
	{
		Task task(str);
		tp.add_task(task);
	}
	return 0;
}
