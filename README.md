# HG-Git-Tool
A simple tool to make committing and pushing a git repository easier.

# Syntax

Start the program in the repository with the commit message as the first parameter. You will be showen your branch and git status and then be asked to procede. Proceding will commit with your message and push the new commit.

./HG-Git-Tool "Your example commit message"


When writing "history" as the first flag the program will show you your git log. Example:

./HG-Git-Tool history


# Building

There is a makefile included. It is using g++, you might have to change it for you system. 
When working on a Unix-like system you can also enter 'sudo make install' to add the tool to you command line, you can then call it anywhere with 'HG-Git-Tool "Commit message"'.
Use 'make clean' to remove the executables. 

Fun fact: this repository was pushed by the code provided.
