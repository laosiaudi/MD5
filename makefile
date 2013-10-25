objects = test.o md5.o
all : ${objects}
	g++ -g -o main ${objects}
test.o : md5.o
	g++ -c test.cpp

md5.o : md5.cpp 
	g++ -c md5.cpp

