# vars
BUILD_D = bin
CODE_D = src

# cmds
all: build

build: ./${CODE_D}/main.c
	gcc ${CODE_D}/main.c -o ${BUILD_D}/brick -lcurses

run: build
	./${BUILD_D}/brick

clean:
	rm -rf ./${BUILD_D}/*


# aliases
clr: clean
