
#if defined _INC_No_Pawn_Included
    #endinput
#endif

#define _INC_No_Pawn_Included

#pragma semicolon 0
#if defined __PawnBuild
    #if __PawnBuild >= 4
        #pragma option -(-
    #endif
#endif

// function handler
#define forward::%0<%1> forward %0(%1)
#define public::%0<%1> public %0(%1)
#define stock::%0<%1> stock %0(%1)
#define static::%0<%1> static %0(%1)
#define callback::%0<%1> forward::%0<%1>; public::%0<%1>
#define init::<> main()

// Caller (has no meaning)
#define Call::%0<%1> %0(%1)

native no_pawn_print(const format[], {Float,_}:...) = printf;
#define logprintf%0\10;%9 no_pawn_print(#%0);

// Expressions
#define if<%0>%8\10;%9 if(%0)%8
#define elif<%0>%8\10;%9 }else if(%0){%8
#define then%8\10;%9 {%8
#define else%8\10;%9 }else{%8
#define end%8\10;%9 }%8

// Loops
#define for<%0>%8\10;%9 for(%0)%8
#define while<%0>%8\10;%9 while(%0)%8
#define do%8\10;%9 {%8
#define done%8\10;%9 }%8

// Operators
#define and &&
#define or ||
#define is ==
#define not !=

// Declaration
#define decl::%0<%1> %0 %1;
