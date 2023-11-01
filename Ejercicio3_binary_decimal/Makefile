CXX = g++    
CXXFLAGS = -std=c++17 -Wall   
LDFLAGS =    
all: binary_to_decimal

binary_to_decimal: binary_to_decimal.o 
	$(CXX) $(CXXFLAG) -o $@ $^ $(LDFLAGS)
.PHONY: all clean
	$(CXX) $(CXXFLAGS) -c $<
clean :
	rm -f *.o binary_to_decimal doc
	rm -rf *~ basura b i
	rm -rf a.out
	find . -name '*~' -exec rm {} \;
	find . -name basura -exec rm {} \;
