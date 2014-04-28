MAIN:=main.exe
OBJS:=main.cpp Thread.cpp WorkThread.cpp Task.cpp ThreadPool.cpp
$(MAIN):$(OBJS) MutexLock.h Condition.h Thread.h WorkThread.h Task.h ThreadPool.h
	g++ -g -o $@ $(OBJS) -lpthread
