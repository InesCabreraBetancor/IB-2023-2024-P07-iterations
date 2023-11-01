CXX = g++    
CXXFLAGS = -std=c++17 -Wall   
LDFLAGS =    
all: Ejercicio1_suma_digitos

Ejercicio1_suma_digitos: Ejercicio1_suma_digitos.o 
	$(CXX) $(CXXFLAG) -o $@ $^ $(LDFLAGS)
.PHONY: all clean
	$(CXX) $(CXXFLAGS) -c $<
clean :
	rm -f *.o Ejercicio1_suma_digitos doc
	rm -rf *~ basura b i
	rm -rf a.out
	find . -name '*~' -exec rm {} \;
	find . -name basura -exec rm {} \;
