//by hy 2015.7.21

#include "klee/Expr.h"
#include "Event.h"
#include "Trace.h"
#include <vector>
#include <map>
#include <string>

namespace klee {

class DealWithSymbolicExpr {

private:

	void resolveSymbolicExpr(ref<Expr> value);
	void resolveGlobalVarName(ref<Expr> value);



public:
	void filterUseless(Trace* trace);
	std::string getVarName(ref<Expr> value);
	std::string getFullName(ref<Expr> value);
	void getGlobalFirstOrderRelated(Trace* trace);
	void getUsefulGlobalVar(Trace * trace, std::string);
	void getBaseUsefulExpr(Trace* trace, std::string);
	void getGlobalVarRelatedLock(Trace* trace);
	void getUsefulLockPair(Trace* trace);
	void copyCollectedDataOfTrace(Trace* trace);
	void getPathCondition(Trace* trace);

};

}
