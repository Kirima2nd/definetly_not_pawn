#include <a_samp>
#include "no-pawn.inc"

decl::new<test = 1>

init::<> 
then
    print "Hello World"
    Call::HelloWorld<14>
end

static::HelloWorld<num> 
then
    decl::new<a = 4, b = 5>
    logprintf "Hello From init<>, will give %d and a = %d | b = %d, plus test will be %d", num, a, b, test
end

public::OnPlayerConnect<playerid> 
then
    SendClientMessage playerid, -1, "A player just joined in"

    decl::new<a = 12, b = 13, c = 14>

    if<a is b and c not 4> 
    then
        logprintf "this statement is correct"
    else
        logprintf "this statement is not correct!"
    end
end
