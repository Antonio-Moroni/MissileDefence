build:
	@echo "building game"
	gcc -o game.exe ./src/main.c
	@echo "game build complete"

clean:
	rm *.exe
