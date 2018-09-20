#include "p1.h"


 void p1::print_usa() {
	// exercise1: print usa 
	std::cout << "XXX   XXX  XXXX X   XXX    " << std::endl;
	std::cout << " X     X  X    XX     X    " << std::endl;
	std::cout << " X     X  X     X    X X   " << std::endl;
	std::cout << " X     X  X          X X   " << std::endl;
	std::cout << " X     X   XXX      X   X  " << std::endl;
	std::cout << " X     X      XX    X   X  " << std::endl;
	std::cout << " X     X        X   XXXXX  " << std::endl;
	std::cout << " X     X  X     X  X     X " << std::endl;
	std::cout << " XX   XX  XX    X  X     X " << std::endl;
	std::cout << "   XXX    X XXXX  XXX   XXX" << std::endl;
    return;
}

void p1::print_n_n2_n3() {
	// exercise2: n n^2 n^3

	std::cout << "n" << setw(4) << "n^2" << setw(4) << "n^3" << std::endl;

    for (int a = 1; a <= 9; ++a) {
    	int result = a;
    	std::cout << result;

    	for (int b = 1; b < 3; b++){
    		result = result * a;
    		std::cout << setw(4) << result;
    	}
    	
    	std::cout << "\n";
    	
    }
    return;
}

void p1::a_power_b(){
	// exercise3: a^b

	std::cout << "a" << setw(4) << "b" << setw(10) << "a^b" <<std::endl;
	
	for (int a = 1; a <= 7; ++a) {

		int b = a + 1;
		int result = a;
		for (int b = 1; b <= a; b++){
			result = result * a;
		}
		std::cout << a << setw(4) << b << setw(10) << result << "\n";
		
		

	}
	
	return;
	
}

void p1::two_power_n(){
	// exercise4: 2^n
	int set_space = 12;
	std::cout << "n" << setw(set_space) << "2^n" <<std::endl;
	for (int n = 0; n <= 20; n++) {
		int result = 2;

		if(n == 0){
			std::cout << n << setw(set_space) << "1" << "\n";
		}
		else{
			for(int b = 1; b < n; ++b){
				
				result = result * 2;
			}
		std::cout << n << setw(set_space) << result << "\n";
		}

	}
	return;
}

void p1::a1(int start, int end) {
	// exercise5: a1(1,6)
    for (int a = start; a <= end; a++){
    	for (int b = start; b <= a; b++) {
        	std::cout << b;    
    	}
    	std::cout << "\n";
    }
	return;

}

void p1::a2(int start, int end) {
	// exercise6: a2(1,6)
	for (int a = start; a <= end; a++){
		for (int space = end-a; space > 0; space--){
			std::cout << " ";
		}
		for (int b = a; b >= start; b--){
			std::cout << b;
		}
		std::cout << "\n";
	}
	return;

}

void p1::a3(int start, int end) {
	// exercise7: a3(1,6)
	for (int a = end; a >= 1; a--){
    	for (int b = start; b <= a; b++) {
        	std::cout << b;    
    	}
    	std::cout << "\n";
    }
	return;

}

void p1::a4(int start, int end) {
	// exercise8: a4(1,6)
for (int a = end; a >= 1; a--){
		for (int space = end-a; space > 0; space--){
			std::cout << " ";
		}
		for (int b = start; b <= a; b++){
			std::cout << b;
		}
		std::cout << "\n";
	}
	return;

}

void p1::riceOnChessBoard(int board_num) {
	// exercise9: rice on chessboard

	long double sum = 0;
	// calculate width of the board
	int w = 1;
	while(w * w != board_num){
		w += 1;
	}
	
	for (int a = 0; a < board_num; a++) {
		long double result = 1;
		// calculate result
		for (int b = 0; b < a; b++){
			result = result * 2;
		}
		// print out result
		std::cout << " " << result;
		if((a+1) % w == 0){
			std::cout << "\n";
		}
		sum += result;
	}
	std::cout << " " << "\n";
	std::cout << "Total grains of rice:" << "\n";
	std::cout << sum << "\n";
	return;
}

