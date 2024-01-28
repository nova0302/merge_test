
T=App
SRCS=main.cpp

OBJS=$(SRCS:%.cpp=%.o)

$(T): $(OBJS)
	$(CXX) -o $@ $^
run:
	./$(T)
clean:
	rm -rf $(T)
