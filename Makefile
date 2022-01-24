app: src/main.c
	mkdir -p dist
	gcc -o dist/app.exe src/main.c
	dist/app.exe