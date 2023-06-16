CC=gcc
CCFLAGS=
LINKER_DEBUG=$(CC) $(CCFLAGS) -o
LINKER_RELEASE=$(CC) $(CCFLAGS) -O3 -o
TARGET=main
TARGET_DIR=target
TARGET_DEBUG=$(TARGET_DIR)/$(TARGET)_debug
TARGET_RELEASE=$(TARGET_DIR)/$(TARGET)_release
SRC_DIR=src
MAIN_FILE=$(SRC_DIR)/$(TARGET).c
LIB_DIR=$(SRC_DIR)/lib
LIB_FILES=$(wildcard $(LIB_DIR)/*.c)
SRC_FILES=$(MAIN_FILE) $(LIB_FILES)
.DEFAULT_GOAL:=debug
debug: $(TARGET_DEBUG)
$(TARGET_DIR):
	mkdir $@
$(TARGET_DEBUG): $(SRC_FILES) $(TARGET_DIR)
	$(LINKER_DEBUG) $@ $(SRC_FILES)
release: $(TARGET_RELEASE)
$(TARGET_RELEASE): $(SRC_FILES) $(TARGET_DIR)
	$(LINKER_RELEASE) $@ $(SRC_FILES)
clean:
	rm -r $(TARGET_DIR)/*
run: $(TARGET_DEBUG)
	./$<
r_run: $(TARGET_RELEASE)
	./$<
test: $(TARGET_DEBUG)
	echo "1 2 3 4 5 6" | ./$<
r_test: $(TARGET_RELEASE)
	echo "1 2 3 4 5 6" | ./$<
