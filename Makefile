SOURCE = simple01/main.c
CFLAGS = -Wall
BUILD_DIR = build
NETS = simple001

all: $(BUILD_DIR) compile

$(BUILD_DIR):
	mkdir -p $(BUILD_DIR)

compile: $(SOURCE)
	gcc $^ $(CFLAGS) -o $(BUILD_DIR)/simple01
