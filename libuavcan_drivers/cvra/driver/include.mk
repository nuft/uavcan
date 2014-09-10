
LIBUAVCAN_CVRA_DIR := $(dir $(lastword $(MAKEFILE_LIST)))

LIBUAVCAN_CVRA_SRC := $(shell find $(LIBUAVCAN_CVRA_DIR)/src -type f -name '*.cpp')

LIBUAVCAN_CVRA_INC := $(LIBUAVCAN_CVRA_DIR)/include/
