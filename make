WHY MAKEFILES EXISTS ?

Makefiles are used to help decide which parts of a large program need to be
recompiled. In the vast majority of cases, C or C++ files are compiled. Other
languages typically have their own tools that serve a similar purpose as Make.
Make can also be used beyond compilation too, when you need a series of
instructions to run depending on what files have changed.

Popular C/C++ alternative build systems are SCons, CMake, Bazel, and Ninja.
Some code editors like Microsoft Visual Studio have their own built in build
tools. For Java, there's Ant, Maven, and Gradle. Other languages like Go, Rust,
and TypeScript have their own build tools.

Interpreted languages like Python, Ruby, and raw Javascript don't require an
analogue to Makefiles. The goal of Makefiles is to compile whatever files need
to be compiled, based on what files have changed. But when files in interpreted
languages change, nothing needs to get recompiled. When the program runs, the
most recent version of the file is used.


A makefile consists of a set of rules, A rule generally looks like below,
targets: prerequisites
    command
    command
    command


blah: blah.c
    cc blah.c -o blah

When we run make again, the following set of steps happens:

-> The first target is selected, because the first target is the default target.
-> This has a prerequisite of blah.c
-> Make decides if it should run the blah target. It will only run if
   blah doesn't exist, or blah.c is newer than blah


https://makefiletutorial.com/



















































































