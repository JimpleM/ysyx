CC = gcc
CXX = g++

WORK_DIR = $(shell pwd)
DST_DIR = $(WORK_DIR)/build
$(shell mkdir -p $(DST_DIR)) # 确保构建目录存在
TARGET = BranchSim

INC_PATH = include
INCFLAGS += $(addprefix -I, $(INC_PATH))

# 定义编译器标志
CFLAGS = -Wall -Wextra -g $(INCFLAGS)
CXXFLAGS = -Wall -Wextra -g $(INCFLAGS)

# 定义源文件变量
SRCS_C = $(wildcard src/*.c)
SRCS_CPP = $(wildcard src/*.cpp)

# 编译C文件规则
$(DST_DIR)/%.o: src/%.c
	$(CC) -std=gnu11 $(CFLAGS) -c -o $@ $<

# 编译C++文件规则
$(DST_DIR)/%.o: src/%.cpp
	$(CXX) -std=c++17 $(CXXFLAGS) -c -o $@ $<

# 定义目标文件变量
OBJS_C = $(SRCS_C:src/%.c=$(DST_DIR)/%.o)
OBJS_CPP = $(SRCS_CPP:src/%.cpp=$(DST_DIR)/%.o)

# 合并所有目标文件
OBJS = $(OBJS_C) $(OBJS_CPP)

# 默认目标，依赖于所有目标文件
all: $(DST_DIR)/$(TARGET)

# 链接规则，将所有的.o文件链接成可执行文件
$(DST_DIR)/$(TARGET): $(OBJS)
	@echo "Linking objects to create target..."
	$(CXX) $^ -o $@ $(LDFLAGS)

# 运行可执行文件的规则
run: all
	@echo "Running the program..."
	$(DST_DIR)/$(TARGET)

# 清理规则，清理构建目录和可执行文件
clean:
	rm -rf $(DST_DIR)
	rm -f $(TARGET)

.PHONY: all clean run