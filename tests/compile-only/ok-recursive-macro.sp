#define TEST TEST

#define A BBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBB
#define BBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBB 10

#define A2(%1,%2) BBBBBBBBBBBBBBBBBBBBBBBBBBBBBBB2(%1,%2)
#define BBBBBBBBBBBBBBBBBBBBBBBBBBBBBBB2(%1,%2) ((%1)+(%2))

public TEST() {
	int x = A + A;
	x = A2(100,100) + A2(100,100);
}
