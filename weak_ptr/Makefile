.PHONY:all
all:weak_ptr1
sharedptr1: weak_ptr1.cpp
	g++ weak_ptr1.cpp -o weak_ptr1 -std=c++11 -Wl,--no-as-needed
#sharedptr2: sharedptr2.cpp
#	g++ sharedptr2.cpp -o sharedptr2 -std=c++11
#sharedptr3: sharedptr3.cpp
#	g++ sharedptr3.cpp -o sharedptr3 -std=c++11 -lrt 

.PHONY:clean
clean:
	rm -rf sharedptr1 sharedptr2 sharedptr3
