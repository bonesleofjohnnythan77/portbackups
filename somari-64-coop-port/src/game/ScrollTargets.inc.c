#include <PR/ultratypes.h>
#include "sm64.h"
#include "types.h"

//Q. Why does this exist instead of just directly referencing VBs?
//A. Because gcc is dumb and will seg fault if you reference a VB by abstracting it through a bparam
//instead of directly refencing it, causing this horrible shit.
extern Vtx VB_ccm_1_0xe032010[];
extern Vtx VB_bob_1_0xe064000[];
extern Vtx VB_bob_1_0xe057850[];
extern Vtx VB_bob_1_0xe057850[];
extern Vtx VB_wf_1_0xe03d100[];
extern Vtx VB_wf_1_0xe03d6a0[];
extern Vtx VB_wf_1_0xe03d2e0[];
extern Vtx VB_wf_1_0xe03d010[];
Vtx *ScrollTargets[]={
 &VB_ccm_1_0xe032010[0],
 &VB_bob_1_0xe064000[6],
 &VB_bob_1_0xe057850[12],
 &VB_bob_1_0xe057850[0],
 &VB_wf_1_0xe03d100[9],
 &VB_wf_1_0xe03d6a0[6],
 &VB_wf_1_0xe03d2e0[6],
 &VB_wf_1_0xe03d010[0],
};