// target: list of dependencies
//        rules to build target from dependencies

hello: hello.c
        gcc hello.c -o hello

hello.class: hello.java
        javac hello.java
        
times_table: times_table.c times_table.h
        gcc times_table.c -o times_table