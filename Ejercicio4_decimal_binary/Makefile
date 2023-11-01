CXX = g++    
CXXFLAGS = -std=c++17 -Wall   
LDFLAGS =    
all: decimal_to_binary 

decimal_to_binary: decimal_to_binary.o 
	$(CXX) $(CXXFLAG) -o $@ $^ $(LDFLAGS)
.PHONY: all clean
	$(CXX) $(CXXFLAGS) -c $<
clean :
	rm -f *.o decimal_to_binary doc
	rm -rf *~ basura b i
	rm -rf a.out
	find . -name '*~' -exec rm {} \;
	find . -name basura -exec rm {} \;
