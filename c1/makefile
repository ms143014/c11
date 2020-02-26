CC := g++
CFLAGS := -o0 -g3 -std=c++11 -lpthread

sources := $(wildcard src/*.cpp src/db/*.cpp)
#输出到Debug目录
output_object := $(addprefix Debug/, $(patsubst %.cpp, %.o, $(sources)))

#link
main: clean $(output_object)
	$(CC) $(output_object) -o Debug/c1

clean:
	rm -rf Debug/*

#make Debug/src/math_min.o 就会编译src/math_min.c
Debug/%.o: %.cpp
#文件夹不存在就创建
	if [ ! -e $(dir $@) ]; then mkdir -p $(dir $@); fi; 
	$(CC) $(CFLAGS) -c $? -o $@