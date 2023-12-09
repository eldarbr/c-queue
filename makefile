.PHONY = all build clean
BUILDER = clang-17
BUILDER_ARGS = -O0 -Wall -Werror -Wextra -std=c17


build: clean test-queue

test-queue.o: test-queue.c
	$(BUILDER) $(BUILDER_ARGS) -g -c -o .bin/test-queue.o test-queue.c

Queue.o: ./Queue/Queue.c
	$(BUILDER) $(BUILDER_ARGS) -g -c -o .bin/Queue.o ./Queue/Queue.c

test-queue: Queue.o test-queue.o
	$(BUILDER) $(BUILDER_ARGS) -g -o .bin/test-queue .bin/*.o

clean:
	rm -rf .bin/*.o
