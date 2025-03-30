
.PHONY: build run
CC = clang
BIN_DIR = ./bin
SRC = ./src/main.c
OUT = $(BIN_DIR)/main

build:
	@echo "Building..."
	@mkdir -p $(BIN_DIR)
	@start=$$(date +%s%N | sed 's/[^0-9]//g'); $(CC) -o $(OUT) $(SRC); \
	end=$$(date +%s%N | sed 's/[^0-9]//g'); \
	elapsed_ns=$$(expr $$end - $$start); \
	elapsed_ms=$$(expr $$elapsed_ns / 1000000); \
	echo "Build time: $$elapsed_ms ms ($$elapsed_ns ns)"

run: build
	@echo "Running..."
	@{ time $(OUT); } 2>&1 | tee /dev/stderr | awk '/real/ {print "Run time: " $$2}'
