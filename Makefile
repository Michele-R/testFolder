all:
	g++ -Igtest-1.7.0/include  -m64  gtest-1.7.0/lib/libgtest.la testmain.cc -o bin.bin
