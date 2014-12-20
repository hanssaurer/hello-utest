default: bin/hello

bin/hello: obj/hello.o obj/main.o
	g++ -o bin/hello obj/hello.o obj/main.o

obj/hello.o: src/hello.cpp inc/hello.h
	g++ -I ./inc -c src/hello.cpp -o obj/hello.o

obj/main.o: src/main.cpp inc/hello.h
	g++ -I ./inc -c src/main.cpp -o obj/main.o

.PHONY: clean cleanall

clean:
	rm -f obj/*.o

cleanall: clean
	rm -f bin/hello