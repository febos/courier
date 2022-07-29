.PHONY: all help

## all : compile courier
all : courier

## courier : compile courier executable
courier : courier.cpp
	g++ $< -o $@

## help : show this message.
help :
	@grep '^##' ./Makefile
