#include <iostream>
#include <chrono>

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

char8_t ifel(int index)
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
char8_t swtch(int index)
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
#ifdef CASE 50
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

char (*fp[ARR])() = {
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


int main()
{
	std::srand(std::time(NULL));
	int* rands = new int[LOOPSIZE];
	for (int i = 0; i < LOOPSIZE; ++i) { rands[i] = std::rand() % ARR; }
	std::cout << "Testing If Else timings.\nTimes: ";
	auto start = std::chrono::high_resolution_clock::now();
	for (int i = 0; i < LOOPSIZE; ++i)
	{
		//auto step_start = std::chrono::high_resolution_clock::now();
		ifel(rands[i]);
		//auto step_end = std::chrono::high_resolution_clock::now();
		//std::cout << std::chrono::duration_cast<TIMEFORMAT>(step_end - step_start).count() << ", ";
	}
	auto stop = std::chrono::high_resolution_clock::now();
	std::cout << "\nAvg: " << std::chrono::duration_cast<TIMEFORMAT>(stop - start).count() / LOOPSIZE << "\n\n";

	std::cout << "Testing Switch timings.\nTimes: ";
	start = std::chrono::high_resolution_clock::now();
	for (int i = 0; i < LOOPSIZE; ++i)
	{
		//auto step_start = std::chrono::high_resolution_clock::now();
		swtch(rands[i]);
		//auto step_end = std::chrono::high_resolution_clock::now();
		//std::cout << std::chrono::duration_cast<TIMEFORMAT>(step_end - step_start).count() << ", ";
	}
	stop = std::chrono::high_resolution_clock::now();
	std::cout << "\nAvg: " << std::chrono::duration_cast<TIMEFORMAT>(stop - start).count() / LOOPSIZE << "\n\n";

	std::cout << "Testing Function Pointer Array timings.\nTimes: ";
	start = std::chrono::high_resolution_clock::now();
	for (int i = 0; i < LOOPSIZE; ++i)
	{
		//auto step_start = std::chrono::high_resolution_clock::now();
		fp[rands[i]]();
		//auto step_end = std::chrono::high_resolution_clock::now();
		//std::cout << std::chrono::duration_cast<TIMEFORMAT>(step_end - step_start).count() << ", ";
	}
	stop = std::chrono::high_resolution_clock::now();
	std::cout << "\nAvg: " << std::chrono::duration_cast<TIMEFORMAT>(stop - start).count() / LOOPSIZE << "\n\n";
}
