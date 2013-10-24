all : md5.o
	g++ -g -o main test.cpp

md5.o : 
	g++ -c md5.cpp

