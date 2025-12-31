#include <PR/ultratypes.h>
#include "sm64.h"
#include "types.h"

//Q. Why does this exist instead of just directly referencing VBs?
//A. Because gcc is dumb and will seg fault if you reference a VB by abstracting it through a bparam
//instead of directly refencing it, causing this horrible shit.
extern Vtx VB_ending_1_0xe027190[];
extern Vtx VB_pss_2_0xe000820[];
Vtx *ScrollTargets[]={
 &VB_ending_1_0xe027190[0],
 &VB_pss_2_0xe000820[1],
};