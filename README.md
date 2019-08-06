# HG-Git-Tool
A simple tool to make committing and pushing a git repository easier.

# Syntax

Start the program in the repository with the commit message as the first parameter. You will be showen git status and then be asked to procede. Proceding will commit with your message and push the new commit.

./HG-Git-Tool "Your example commit message"

# Building

There is a makefile included. It is using g++, you might have to change it for you system. 
When working on a Unix-like system you can also enter 'sudo make install' to add the tool to you command line, you can then call it anywhere with 'HG-Git-Tool "Commit message"'.
Use 'make clean' to remove the executables. Currently it's impossible for the makefile to remove the executable in the /usr/local/bin so you have to remove it by yourself.

Fun fact: this repository was pushed by the code provided.
