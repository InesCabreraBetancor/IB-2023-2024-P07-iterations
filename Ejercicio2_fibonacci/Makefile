CXX = g++    
CXXFLAGS = -std=c++17 -Wall   
LDFLAGS =    
all: fibonacci 

fibonacci: fibonacci.o 
	$(CXX) $(CXXFLAG) -o $@ $^ $(LDFLAGS)
.PHONY: all clean
	$(CXX) $(CXXFLAGS) -c $<
clean :
	rm -f *.o fibonacci doc
	rm -rf *~ basura b i
	rm -rf a.out
	find . -name '*~' -exec rm {} \;
	find . -name basura -exec rm {} \;
