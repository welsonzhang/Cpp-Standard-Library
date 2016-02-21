.PHONY:all
all:sharedptr1 sharedptr2 sharedptr3
sharedptr1: sharedptr1.cpp
	g++ sharedptr1.cpp -o sharedptr1 -std=c++11
sharedptr2: sharedptr2.cpp
	g++ sharedptr2.cpp -o sharedptr2 -std=c++11
sharedptr3: sharedptr3.cpp
	g++ sharedptr3.cpp -o sharedptr3 -std=c++11 -lrt 

.PHONY:clean
clean:
	rm -rf sharedptr1 sharedptr2 sharedptr3
