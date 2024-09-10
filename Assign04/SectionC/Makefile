
Target= Assign04Q3

Comp=gcc

$(Target).out: $(Target).o
	$(Comp) $(Target).o -o $(Target).out

$(Target).o: $(Target).c
	$(Comp) -c $(Target).c

run:
	./$(Target).out

clean:
	rm $(Target).o $(Target).out



.phony: run clean



