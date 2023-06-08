#pragma once
#include <iostream>

//1. Notice that you can define macro variables from project settings/c++/preprocessor etc..
//2. These are pure copy paste
//3. use them wisely as everything, difficult to debug

//whenever you encounted WAIT replace it with std::... 
#define WAIT std::cin.get();


/*	This is one way of doing what we do below
#define SHOULD_LOG

#ifdef SHOULD_LOG
#define LOG(x) std::cout << x << std::endl;
#else
#define LOG(x)
#endif
*/

#define SHOULD_LOG 1 //notice that correct path is highlighted (im sure theres exceptions)

#if SHOULD_LOG == 1
#define LOG(x) std::cout << x << std::endl;
#elif SHOULD_LOG == 0
#define LOG(x)
#endif


// backslash is newline character for macro, probably not a good idea to define methods this way..in case your an idiot
// note, cannot have empty space after backslash
#define METHOD void meth()\
{\
	std::cout << "macromethod" << std::endl;\
}

METHOD

void run_macros() {
	//WAIT	//notice, you dont even neeed ; at the end, pure copy paste
	LOG("Im logging");
	meth();
}