classAddress: main.cpp, address.h, address.cpp
	g++ -g main.cpp address.cpp -o studentData


studentData:  main.cpp
      g++ -g main.cpp -o studentData

run: student
      ./studentData
