CC = gcc
CFLAGS = -Iinclude -Wall
LDFLAGS =
SRC_DIR = src
BUILD_DIR = builds
TEST_DIR = tests
SOURCES = $(wildcard $(SRC_DIR)/*.c)
OBJECTS = $(SOURCES:$(SRC_DIR)/%.c=$(BUILD_DIR)/%.o)
EXECUTABLE = $(BUILD_DIR)/a.out

# Default target
all: $(EXECUTABLE)

$(EXECUTABLE): $(OBJECTS)
	$(CC) $(LDFLAGS) $^ -o $@

$(BUILD_DIR)/%.o: $(SRC_DIR)/%.c
	$(CC) $(CFLAGS) -c $< -o $@

# For building tests
test: $(TEST_DIR)/test_main.c $(OBJECTS)
	$(CC) $(CFLAGS) $^ -o $(BUILD_DIR)/test

# Clean build directory
clean:
	rm -f $(BUILD_DIR)/*

.PHONY: all clean test
