#include <PR/ultratypes.h>
#include "sm64.h"
#include "types.h"

//Q. Why does this exist instead of just directly referencing VBs?
//A. Because gcc is dumb and will seg fault if you reference a VB by abstracting it through a bparam
//instead of directly refencing it, causing this horrible shit.
extern Vtx VB_bob_1_0xe02c960[];
extern Vtx VB_sa_1_0xe022460[];
extern Vtx VB_sa_1_0xe023bd0[];
extern Vtx VB_castle_courtyard_1_0xe024f60[];
extern Vtx VB_bowser_1_1_0xe004430[];
Vtx *ScrollTargets[]={
 &VB_bob_1_0xe02c960[3],
 &VB_sa_1_0xe022460[3],
 &VB_sa_1_0xe023bd0[9],
 &VB_castle_courtyard_1_0xe024f60[0],
 &VB_bowser_1_1_0xe004430[6],
};