/*************************************************************************
	> File Name: Task.h
	> Author: huwq
	> Mail:huweiqing915@gmail.com 
	> Created Time: 2014年04月28日 星期一 23时32分33秒
 ************************************************************************/

#ifndef TASK_H_
#define TASK_H_

#include <string>

class Task {
public:
	Task(const std::string &express = ""):_express(express)
	{

	}

	void excute_task();
private:
	std::string _express;
};

#endif
