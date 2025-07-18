#include <PR/ultratypes.h>
#include "sm64.h"
#include "types.h"

//Q. Why does this exist instead of just directly referencing VBs?
//A. Because gcc is dumb and will seg fault if you reference a VB by abstracting it through a bparam
//instead of directly refencing it, causing this horrible shit.
extern Vtx VB_bob_1_0xe6662f0[];
extern Vtx VB_castle_grounds_1_0xe67c620[];
extern Vtx VB_castle_grounds_1_0xe67cf20[];
extern Vtx VB_castle_grounds_1_0xe67cdd0[];
extern Vtx VB_castle_grounds_1_0xe67d0d0[];
extern Vtx VB_castle_grounds_1_0xe693b70[];
extern Vtx VB_castle_grounds_1_0xe68c880[];
extern Vtx VB_castle_grounds_1_0xe67bcf0[];
extern Vtx VB_castle_grounds_1_0xe67be10[];
extern Vtx VB_castle_grounds_1_0xe67ca70[];
extern Vtx VB_castle_grounds_1_0xe67c830[];
extern Vtx VB_castle_grounds_1_0xe67c9b0[];
extern Vtx VB_castle_grounds_1_0xe693ed0[];
extern Vtx VB_castle_grounds_1_0xe692af0[];
extern Vtx VB_castle_grounds_1_0xe67b870[];
extern Vtx VB_castle_grounds_1_0xe67c770[];
extern Vtx VB_castle_grounds_1_0xe67c650[];
extern Vtx VB_castle_grounds_1_0xe67bf90[];
extern Vtx VB_castle_grounds_1_0xe67b4e0[];
extern Vtx VB_castle_grounds_1_0xe67b090[];
extern Vtx VB_sa_1_0xe683750[];
extern Vtx VB_sa_1_0xe695630[];
extern Vtx VB_sa_1_0xe682850[];
Vtx *ScrollTargets[]={
 &VB_bob_1_0xe6662f0[255],
 &VB_castle_grounds_1_0xe67c620[255],
 &VB_castle_grounds_1_0xe67cf20[255],
 &VB_castle_grounds_1_0xe67cdd0[255],
 &VB_castle_grounds_1_0xe67d0d0[255],
 &VB_castle_grounds_1_0xe693b70[255],
 &VB_castle_grounds_1_0xe68c880[255],
 &VB_castle_grounds_1_0xe67bcf0[255],
 &VB_castle_grounds_1_0xe67be10[255],
 &VB_castle_grounds_1_0xe67ca70[255],
 &VB_castle_grounds_1_0xe67c830[255],
 &VB_castle_grounds_1_0xe67c9b0[255],
 &VB_castle_grounds_1_0xe693ed0[255],
 &VB_castle_grounds_1_0xe692af0[255],
 &VB_castle_grounds_1_0xe67b870[255],
 &VB_castle_grounds_1_0xe67c770[255],
 &VB_castle_grounds_1_0xe67c650[255],
 &VB_castle_grounds_1_0xe67bf90[255],
 &VB_castle_grounds_1_0xe67b4e0[255],
 &VB_castle_grounds_1_0xe67b090[255],
 &VB_sa_1_0xe683750[255],
 &VB_sa_1_0xe695630[255],
 &VB_sa_1_0xe682850[255],
};