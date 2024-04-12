build: div_cal.o add_cal.o print_result.o main.o
	g++ div_cal.o add_cal.o print_result.o main.o -o cal 
main.o: main.cpp
	g++ -c main.cpp -o main.o -I.
add_cal.o: add_cal.cpp
	g++ -c add_cal.cpp -o add_cal.o -I.
div_cal.o: div_cal.cpp
	g++ -c div_cal.cpp -o div_cal.o -I.
print_result.o: print_result.cpp 
	g++ -c print_result.cpp -o print_result.o -I.
hello:
	@echo "Hello"
clean:
	rm *.o cal