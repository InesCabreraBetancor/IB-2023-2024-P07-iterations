CXX = g++    
CXXFLAGS = -std=c++17 -Wall   
LDFLAGS =    
all: leap_years 

leap_years: leap_years.o 
	$(CXX) $(CXXFLAG) -o $@ $^ $(LDFLAGS)
.PHONY: all clean
	$(CXX) $(CXXFLAGS) -c $<
clean :
	rm -f *.o leap_years doc
	rm -rf *~ basura b i
	rm -rf a.out
	find . -name '*~' -exec rm {} \;
	find . -name basura -exec rm {} \;
