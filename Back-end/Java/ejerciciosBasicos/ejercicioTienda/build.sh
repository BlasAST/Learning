#!/bin/bash

javac -d out src/*.java src/*/*.java
java -cp out App
rm -rf out