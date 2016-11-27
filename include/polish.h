/* Solution polishing based on assuming the active set */
#ifndef POLISH_H
#define POLISH_H

#include "lin_sys.h"
#include "aux.h"
#include "kkt.h"
#include "osqp.h"

// Solution polishing: Solve equality constrained QP with assumed active constr.
c_int polish(Work *work);

#endif
