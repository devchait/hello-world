CC=g++
CFLAGS=-I./include -g -Wall

# the build target executable:
TARGET= main
SAMPLE= sample1
SRC=./src
LOGFILE=./logs/sample.log

all: $(TARGET)

$(TARGET): $(SRC)/$(TARGET).cpp
	$(CC) $(CFLAGS) -o $(TARGET) $(SRC)/$(TARGET).cpp $(SRC)/$(SAMPLE).cc

clean:
	$(RM) $(TARGET)
	$(RM) test-main

cleanlogs:
	$(RM) $(LOGFILE)

check:
	g++ tests/main.cpp -o test-main -I/usr/local/include/ -L/usr/local/lib -lUnitTest++
	./test-main
	#g++ tests/all_test_main.cpp -Wno-error=dangling-else -DGTEST_HAS_PTHREAD=0 -fexceptions -DGTEST_LINKED_AS_SHARED_LIBRARY=1 -o all-test-main -I/usr/local/include/ -L/usr/local/lib -L/usr/local/lib/googletest
	g++ -DGTEST_LINKED_AS_SHARED_LIBRARY=1 -isystem /usr/local/include/gtest -isystem /usr/src/googletest/googletest -L/usr/local/lib -L/usr/local/lib/googletest -Wall -Wshadow -Werror -Wno-error=dangling-else -DGTEST_HAS_PTHREAD=0 -fexceptions  -o all_test_main -c ./tests/all_test_main.cpp
	# Need to add the execution of the test using google test