BUILD := build

SOURCES := first3.c

CC     := gcc
CFLAGS := -Werror -std=gnu99 -g

OBJS :=	$(BUILD)/first3

all: $(OBJS)
	@:

real_all: $(OBJS)

$(BUILD)/first3: first3.c 
	@mkdir -p $(@D)
	$(CC) $(CFLAGS) -g -c first3.c -o $(BUILD)/first3.o
	$(CC) $(CFLAGS) $(BUILD)/first3.o -lm -o $(BUILD)/first3

clean-logs: always
	rm -f *.out

clean: always clean-logs
	rm -rf $(BUILD)

.PHONY: all always