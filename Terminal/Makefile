CXX = g++
CXXFLAGS = -ggdb -Wall -static -static-libgcc -static-libstdc++ -pthread -std=c++20
CXXFLAGSCONIO = -ggdb -Wall -pthread -lstdc++ -std=c++17
SOURCE=main.cpp
GOAL=mind_sharp
##GOAL=$(SOURCE:.cpp=$*)
MODULES = main_menu_start.cpp timer.cpp
OBJMODULES = $(MODULES:.cpp=.o)

all: run 

run : $(GOAL)
	./$(GOAL)

.o:.cpp .h
	$(CXX) $(CXXFLAGS) -c $< $@ 


$(GOAL) : $(SOURCE) $(OBJMODULES)
	$(CXX) $(CXXFLAGS) $^ -o $@

clean : 
	rm -f *.o

