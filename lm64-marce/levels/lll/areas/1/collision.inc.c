// 0x0701ADE8 - 0x0701CE18
const Collision lll_seg7_area_1_collision[] = {
#ifdef VERSION_JP
    COL_INIT(),
    COL_VERTEX_INIT(4),
	COL_VERTEX(8192, 0, -8191),
	COL_VERTEX(-8191, 0, -8191),
	COL_VERTEX(-8191, 0, 8192),
	COL_VERTEX(8192, 0, 8192),
	COL_TRI_INIT(SURFACE_BURNING, 2),
	COL_TRI(0, 1, 2),
	COL_TRI(0, 2, 3),
	COL_TRI_STOP(),
    COL_SPECIAL_INIT(1),
    SPECIAL_OBJECT_WITH_YAW(/*preset*/ special_null_start, /*pos*/ -3839, 154, 6272, /*yaw*/ 64), // unused, probably an early way to set intial position
    COL_END(),
#else
    COL_INIT(),
        COL_VERTEX_INIT(4),
	COL_VERTEX(8192, 0, -8191),
	COL_VERTEX(-8191, 0, -8191),
	COL_VERTEX(-8191, 0, 8192),
	COL_VERTEX(8192, 0, 8192),
	COL_TRI_INIT(SURFACE_BURNING, 2),
	COL_TRI(0, 1, 2),
	COL_TRI(0, 2, 3),
	COL_TRI_STOP(),
    COL_SPECIAL_INIT(1),
    SPECIAL_OBJECT_WITH_YAW(/*preset*/ special_null_start, /*pos*/ -3839, 154, 6272, /*yaw*/ 64), // unused, probably an early way to set intial position
    COL_END(),
#endif
};
