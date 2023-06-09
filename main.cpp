#include <iostream>
#include <chrono>
//#include <vector>
#include <random>

#define LOOPSIZE 10000000
#define TIMEFORMAT std::chrono::nanoseconds
#define CASE5 1
#define CASE25 2
#define CASE50 3
#ifdef CASE50
#define ARR 50
#elif CASE25
#define ARR 25
#else 
#define ARR 5
#endif // CASE_SIZE

char ifel(int index)
{
	if (index == 0)
		return ' ';
	else if (index == 1)
		return 'a';
	else if (index == 2)
		return 'b';
	else if (index == 3)
		return 'c';
	else if (index == 4)
		return 'd';
#ifdef CASE25
	else if (index == 5)
		return 'e';
	else if (index == 6)
		return 'f';
	else if (index == 7)
		return 'g';
	else if (index == 8)
		return 'h';
	else if (index == 9)
		return 'i';
	else if (index == 10)
		return 'j';
	else if (index == 11)
		return 'k';
	else if (index == 12)
		return 'l';
	else if (index == 13)
		return 'm';
	else if (index == 14)
		return 'n';
	else if (index == 15)
		return 'o';
	else if (index == 16)
		return 'p';
	else if (index == 17)
		return 'q';
	else if (index == 18)
		return 'r';
	else if (index == 19)
		return 's';
	else if (index == 20)
		return 't';
	else if (index == 21)
		return 'u';
	else if (index == 22)
		return 'v';
	else if (index == 23)
		return 'w';
	else if (index == 24)
		return 'x';
#ifdef CASE50
	else if (index == 25)
		return 'y';
	else if (index == 26)
		return 'z';
	else if (index == 27)
		return 'A';
	else if (index == 28)
		return 'B';
	else if (index == 29)
		return 'C';
	else if (index == 30)
		return 'D';
	else if (index == 31)
		return 'E';
	else if (index == 32)
		return 'F';
	else if (index == 33)
		return 'G';
	else if (index == 34)
		return 'H';
	else if (index == 35)
		return 'I';
	else if (index == 36)
		return 'J';
	else if (index == 37)
		return 'K';
	else if (index == 38)
		return 'L';
	else if (index == 39)
		return 'M';
	else if (index == 40)
		return 'N';
	else if (index == 41)
		return 'O';
	else if (index == 42)
		return 'P';
	else if (index == 43)
		return 'Q';
	else if (index == 44)
		return 'R';
	else if (index == 45)
		return 'S';
	else if (index == 46)
		return 'T';
	else if (index == 47)
		return 'U';
	else if (index == 48)
		return 'V';
	else if (index == 49)
		return 'W';
#endif // CASE50
#endif // CASE25
}
char swtch(int index)
{
	switch(index)
	{
	case 0:
		return ' ';
	case 1:
		return 'a';
	case 2:
		return 'b';
	case 3:
		return 'c';
	case 4:
		return 'd';
#ifdef CASE25
	case 5:
		return 'e';
	case 6:
		return 'f';
	case 7:
		return 'g';
	case 8:
		return 'h';
	case 9:
		return 'i';
	case 10:
		return 'j';
	case 11:
		return 'k';
	case 12:
		return 'l';
	case 13:
		return 'm';
	case 14:
		return 'n';
	case 15:
		return 'o';
	case 16:
		return 'p';
	case 17:
		return 'q';
	case 18:
		return 'r';
	case 19:
		return 's';
	case 20:
		return 't';
	case 21:
		return 'u';
	case 22:
		return 'v';
	case 23:
		return 'w';
	case 24:
		return 'x';
#ifdef CASE50
	case 25:
		return 'y';
	case 26:
		return 'z';
	case 27:
		return 'A';
	case 28:
		return 'B';
	case 29:
		return 'C';
	case 30:
		return 'D';
	case 31:
		return 'E';
	case 32:
		return 'F';
	case 33:
		return 'G';
	case 34:
		return 'H';
	case 35:
		return 'I';
	case 36:
		return 'J';
	case 37:
		return 'K';
	case 38:
		return 'L';
	case 39:
		return 'M';
	case 40:
		return 'N';
	case 41:
		return 'O';
	case 42:
		return 'P';
	case 43:
		return 'Q';
	case 44:
		return 'R';
	case 45:
		return 'S';
	case 46:
		return 'T';
	case 47:
		return 'U';
	case 48:
		return 'V';
	case 49:
		return 'W';
#endif // CASE50
#endif // CASE25
	default:
		break;
	}
}

char (*lfp[ARR])() = {
[]() { return ' '; },
[]() { return 'a'; },
[]() { return 'b'; },
[]() { return 'c'; },
[]() { return 'd'; }
#ifdef CASE25
	,
	[]() { return 'e'; },
	[]() { return 'f'; },
	[]() { return 'g'; },
	[]() { return 'h'; },
	[]() { return 'i'; },
	[]() { return 'j'; },
	[]() { return 'k'; },
	[]() { return 'l'; },
	[]() { return 'm'; },
	[]() { return 'n'; },
	[]() { return 'o'; },
	[]() { return 'p'; },
	[]() { return 'q'; },
	[]() { return 'r'; },
	[]() { return 's'; },
	[]() { return 't'; },
	[]() { return 'u'; },
	[]() { return 'v'; },
	[]() { return 'w'; },
	[]() { return 'x'; }
#ifdef CASE50
	,
	[]() { return 'y'; },
	[]() { return 'z'; },
	[]() { return 'A'; },
	[]() { return 'B'; },
	[]() { return 'C'; },
	[]() { return 'D'; },
	[]() { return 'E'; },
	[]() { return 'F'; },
	[]() { return 'G'; },
	[]() { return 'H'; },
	[]() { return 'I'; },
	[]() { return 'J'; },
	[]() { return 'K'; },
	[]() { return 'L'; },
	[]() { return 'M'; },
	[]() { return 'N'; },
	[]() { return 'O'; },
	[]() { return 'P'; },
	[]() { return 'Q'; },
	[]() { return 'R'; },
	[]() { return 'S'; },
	[]() { return 'T'; },
	[]() { return 'U'; },
	[]() { return 'V'; },
	[]() { return 'W'; }
#endif // CASE50
#endif // CASE 25
};
#pragma region straight functions
char getChar() { return ' '; }
char getChara() { return 'a'; }
char getCharb() { return 'b'; }
char getCharc() { return 'c'; }
char getChard() { return 'd'; }
char getChare() { return 'e'; }
char getCharf() { return 'f'; }
char getCharg() { return 'g'; }
char getCharh() { return 'h'; }
char getChari() { return 'i'; }
char getCharj() { return 'j'; }
char getChark() { return 'k'; }
char getCharl() { return 'l'; }
char getCharm() { return 'm'; }
char getCharn() { return 'n'; }
char getCharo() { return 'o'; }
char getCharp() { return 'p'; }
char getCharq() { return 'q'; }
char getCharr() { return 'r'; }
char getChars() { return 's'; }
char getChart() { return 't'; }
char getCharu() { return 'u'; }
char getCharv() { return 'v'; }
char getCharw() { return 'w'; }
char getCharx() { return 'x'; }
char getChary() { return 'y'; }
char getCharz() { return 'z'; }
char getCharA() { return 'A'; }
char getCharB() { return 'B'; }
char getCharC() { return 'C'; }
char getCharD() { return 'D'; }
char getCharE() { return 'E'; }
char getCharF() { return 'F'; }
char getCharG() { return 'G'; }
char getCharH() { return 'H'; }
char getCharI() { return 'I'; }
char getCharJ() { return 'J'; }
char getCharK() { return 'K'; }
char getCharL() { return 'L'; }
char getCharM() { return 'M'; }
char getCharN() { return 'N'; }
char getCharO() { return 'O'; }
char getCharP() { return 'P'; }
char getCharQ() { return 'Q'; }
char getCharR() { return 'R'; }
char getCharS() { return 'S'; }
char getCharT() { return 'T'; }
char getCharU() { return 'U'; }
char getCharV() { return 'V'; }
char getCharW() { return 'W'; }
#pragma endregion
char (*fp[ARR])() = {
	getChar,
	getChara,
	getCharb,
	getCharc,
	getChard,
	getChare,
	getCharf,
	getCharg,
	getCharh,
	getChari,
	getCharj,
	getChark,
	getCharl,
	getCharm,
	getCharn,
	getCharo,
	getCharp,
	getCharq,
	getCharr,
	getChars,
	getChart,
	getCharu,
	getCharv,
	getCharw,
	getCharx,
	getChary,
	getCharz,
	getCharA,
	getCharB,
	getCharC,
	getCharD,
	getCharE,
	getCharF,
	getCharG,
	getCharH,
	getCharI,
	getCharJ,
	getCharK,
	getCharL,
	getCharM,
	getCharN,
	getCharO,
	getCharP,
	getCharQ,
	getCharR,
	getCharS,
	getCharT,
	getCharU,
	getCharV,
	getCharW
};

int main()
{
	long long unsigned int noEscape = 0;
	std::srand(std::time(NULL));
	std::vector<int> rands;
	std::default_random_engine rng{ std::random_device{}() };
	std::uniform_int_distribution<int> dist{ 0, ARR - 1 };
	for (int i = 0; i < LOOPSIZE; ++i) rands.push_back(dist(rng));
	std::cout << "Testing If Else timings.\nTimes: ";
	auto start = std::chrono::high_resolution_clock::now();
	for (int i = 0; i < LOOPSIZE; ++i)
	{
		noEscape += ifel(rands[i]);
	}
	auto stop = std::chrono::high_resolution_clock::now();
	std::cout << "\nAvg: " << (double)(std::chrono::duration_cast<TIMEFORMAT>(stop - start).count()) / LOOPSIZE << "\n\n";

	std::cout << "Testing Switch timings.\nTimes: ";
	start = std::chrono::high_resolution_clock::now();
	for (int i = 0; i < LOOPSIZE; ++i)
	{
		noEscape += swtch(rands[i]);
	}
	stop = std::chrono::high_resolution_clock::now();
	std::cout << "\nAvg: " << (double)(std::chrono::duration_cast<TIMEFORMAT>(stop - start).count()) / LOOPSIZE << "\n\n";

	std::cout << "Testing Lambda Function Pointer Array timings.\nTimes: ";
	start = std::chrono::high_resolution_clock::now();
	for (int i = 0; i < LOOPSIZE; ++i)
	{
		noEscape += lfp[rands[i]]();
	}
	stop = std::chrono::high_resolution_clock::now();
	std::cout << "\nAvg: " << (double)(std::chrono::duration_cast<TIMEFORMAT>(stop - start).count()) / LOOPSIZE << "\n\n";

	std::cout << "Testing Pure Function Pointer Array timings.\nTimes: ";
	start = std::chrono::high_resolution_clock::now();
	for (int i = 0; i < LOOPSIZE; ++i)
	{
		noEscape += fp[rands[i]]();
	}
	stop = std::chrono::high_resolution_clock::now();
	std::cout << "\nAvg: " << (double)(std::chrono::duration_cast<TIMEFORMAT>(stop - start).count()) / LOOPSIZE << "\n\n";
	std::cout << "\n" << noEscape;
}
