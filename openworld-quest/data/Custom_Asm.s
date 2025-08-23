#This file is provided only as a reference for manually recoding functions.

#This function is called from Behavior  bhvFishGroup
#It has virtual address 0x802A8CDC and rom address 0x63CDC
 bhv_fish_group_loop:
	addiu	$sp, $sp, -0x18
	sw	$ra, 0x14($sp)
	lui	$t6, 0x8036
	lh	$t6, 0x1250($t6)
	addiu	$at, $zero, 0xf
	beq	$t6, $at, 0x28
	nop	
	addiu	$at, $zero, 7
	bne	$t6, $at, 0x54
	nop	
	lui	$t7, 0x8033
	lw	$t7, -0x2a2c($t7)
	andi	$t8, $t7, 1
	beqz	$t8, 0x54
	nop	
	lui	$a0, 0x8036
	lui	$a2, 0x1300
	addiu	$a2, $a2, 0x46c
	lw	$a0, 0x1160($a0)
	jal	 spawn_object
	addiu	$a1, $zero, 0xa4
	b	0x5c
	nop	
	lw	$ra, 0x14($sp)
	addiu	$sp, $sp, 0x18
	jr	$ra
	nop	
#This function is called from Behavior  bhvTankFishGroup
#It has virtual address 0x802B9790 and rom address 0x74790
 bhv_tank_fish_group_loop:
	addiu	$sp, $sp, -0x40
	sw	$ra, 0x2c($sp)
	sw	$s0, 0x28($sp)
	lui	$t6, 0x8036
	lw	$t6, 0x1160($t6)
	lw	$s0, 0x14c($t6)
	beqz	$s0, 0x40
	nop	
	addiu	$at, $zero, 1
	beq	$s0, $at, 0xd8
	nop	
	addiu	$at, $zero, 2
	beq	$s0, $at, 0x114
	nop	
	b	0x128
	nop	
	lui	$t7, 0x8036
	lh	$t7, 0x1250($t7)
	addiu	$at, $zero, 0xf
	beq	$t7, $at, 0x60
	nop	
	addiu	$at, $zero, 7
	bne	$t7, $at, 0xd0
	nop	
	sw	$zero, 0x38($sp)
	lui	$t8, 0x8036
	lw	$t8, 0x1160($t8)
#This function is called from Behavior  bhvBooInCastle
#It has virtual address 0x802A4120 and rom address 0x5F120
 bhv_init_room:
	addiu	$sp, $sp, -0x20
	sw	$ra, 0x14($sp)
	lui	$a0, 0x8033
	lui	$a1, 0x8033
	addiu	$a1, $a1, 0x14
	jal	 is_item_in_array
	lh	$a0, -0x2208($a0)
	beqz	$v0, 0xc8
	nop	
	lui	$t6, 0x8036
	lw	$t6, 0x1160($t6)
	addiu	$a3, $sp, 0x1c
	lwc1	$f12, 0xa0($t6)
	lwc1	$f14, 0xa4($t6)
	jal	 find_floor
	lw	$a2, 0xa8($t6)
	swc1	$f0, 0x18($sp)
	lw	$t7, 0x1c($sp)
	beqz	$t7, 0xc0
	nop	
	lw	$t8, 0x1c($sp)
	lb	$t9, 5($t8)
	beqz	$t9, 0x78
	nop	
	lw	$t0, 0x1c($sp)
	lui	$t2, 0x8036
	lw	$t2, 0x1160($t2)
#This function is called from Behavior  bhvBooInCastle
#It has virtual address 0x802C5414 and rom address 0x80414
 bhv_boo_in_castle_loop:
	addiu	$sp, $sp, -0x20
	sw	$ra, 0x14($sp)
	lui	$at, 0x4000
	lui	$t6, 0x8036
	lw	$t6, 0x1160($t6)
	mtc1	$at, $f4
	nop	
	swc1	$f4, 0xf8($t6)
	lui	$t7, 0x8036
	lw	$t7, 0x1160($t7)
	lw	$t8, 0x14c($t7)
	bnez	$t8, 0x8c
	nop	
	jal	 cur_obj_hide
	nop	
	lui	$t9, 0x8034
	lh	$t9, -0x4d9c($t9)
	slti	$at, $t9, 0xc
	beqz	$at, 0x5c
	nop	
	lui	$a0, 0x8036
	jal	 obj_mark_for_deletion
	lw	$a0, 0x1160($a0)
	lui	$t0, 0x8036
	lh	$t0, 0x1250($t0)
	addiu	$at, $zero, 1
	bne	$t0, $at, 0x84
#This function is called from Behavior  bhvToadMessage
#It has virtual address 0x80276910 and rom address 0x31910
 bhv_toad_message_init:
	addiu	$sp, $sp, -0x38
	sw	$ra, 0x1c($sp)
	sw	$s0, 0x18($sp)
	jal	 save_file_get_flags
	nop	
	sw	$v0, 0x34($sp)
	lui	$a0, 0x8033
	lh	$a0, -0x220c($a0)
	move	$a1, $zero
	addiu	$a2, $zero, 0x18
	jal	 save_file_get_total_star_count
	addiu	$a0, $a0, -1
	sw	$v0, 0x30($sp)
	lui	$t6, 0x8036
	lw	$t6, 0x1160($t6)
	lw	$t7, 0x188($t6)
	sra	$t8, $t7, 0x18
	andi	$t9, $t8, 0xff
	sw	$t9, 0x2c($sp)
	addiu	$t0, $zero, 1
	sw	$t0, 0x28($sp)
	lw	$s0, 0x2c($sp)
	addiu	$at, $zero, 0x4c
	beq	$s0, $at, 0xb8
	nop	
	addiu	$at, $zero, 0x52
	beq	$s0, $at, 0x84
#This function is called from Behavior  bhvToadMessage
#It has virtual address 0x8027684C and rom address 0x3184C
 bhv_toad_message_loop:
	addiu	$sp, $sp, -0x18
	sw	$ra, 0x14($sp)
	lui	$t6, 0x8036
	lw	$t6, 0x1160($t6)
	lh	$t7, 2($t6)
	andi	$t8, $t7, 1
	beqz	$t8, 0xac
	nop	
	lui	$t9, 0x8036
	lw	$t9, 0x1160($t9)
	sw	$zero, 0x190($t9)
	lui	$t0, 0x8036
	lw	$t0, 0x1160($t0)
	lw	$t1, 0x110($t0)
	sltiu	$at, $t1, 5
	beqz	$at, 0xac
	nop	
	sll	$t1, $t1, 2
	lui	$at, 0x8033
	addu	$at, $at, $t1
	lw	$t1, 0x6f40($at)
	jr	$t1
	nop	
#This function is called from Behavior  bhvDoor
#It has virtual address 0x802ACC3C and rom address 0x67C3C
 bhv_door_init:
	addiu	$sp, $sp, -0x28
	sw	$ra, 0x14($sp)
	lui	$t6, 0x8036
	lw	$t6, 0x1160($t6)
	lwc1	$f4, 0xa0($t6)
	swc1	$f4, 0x24($sp)
	lui	$t7, 0x8036
	lw	$t7, 0x1160($t7)
	lwc1	$f6, 0xa8($t7)
	swc1	$f6, 0x20($sp)
	lui	$t8, 0x8036
	lw	$t8, 0x1160($t8)
	lwc1	$f12, 0x24($sp)
	lw	$a2, 0x20($sp)
	addiu	$a3, $sp, 0x1c
	jal	 find_floor
	lwc1	$f14, 0xa4($t8)
	lw	$t9, 0x1c($sp)
	beqz	$t9, 0x64
	nop	
	lw	$t0, 0x1c($sp)
	lui	$t2, 0x8036
	lw	$t2, 0x1160($t2)
#This function is called from Behavior  bhvDoor
#It has virtual address 0x802ACAC8 and rom address 0x67AC8
 bhv_door_loop:
	addiu	$sp, $sp, -0x20
	sw	$ra, 0x14($sp)
	sw	$zero, 0x1c($sp)
	lw	$t6, 0x1c($sp)
	lui	$t8, 0x8033
	addiu	$at, $zero, -1
	sll	$t7, $t6, 3
	addu	$t8, $t8, $t7
	lw	$t8, 0x260($t8)
	beq	$t8, $at, 0x98
	nop	
	lw	$t9, 0x1c($sp)
	lui	$a0, 0x8033
	sll	$t0, $t9, 3
	addu	$a0, $a0, $t0
	jal	 cur_obj_clear_interact_status_flag
	lw	$a0, 0x260($a0)
	beqz	$v0, 0x6c
	nop	
	jal	 set_door_camera_event
	nop	
	lw	$t1, 0x1c($sp)
	lui	$a0, 0x8033
#This function is called from Behavior  Bhv_Custom_0x13001c94
#It has virtual address 0x802BA608 and rom address 0x75608
 bhv_rotating_clock_arm_loop:
	addiu	$sp, $sp, -0x20
	sw	$ra, 0x14($sp)
	lui	$t6, 0x8036
	lw	$t6, 0x1160($t6)
	lw	$t7, 0xd8($t6)
	sh	$t7, 0x1a($sp)
	lui	$t8, 0x8036
	lw	$t8, 0x1158($t8)
	addiu	$a3, $sp, 0x1c
	lwc1	$f12, 0xa0($t8)
	lwc1	$f14, 0xa4($t8)
	jal	 find_floor
	lw	$a2, 0xa8($t8)
	lui	$t9, 0x8036
	lw	$t9, 0x1160($t9)
	swc1	$f0, 0xe8($t9)
	lui	$t0, 0x8036
	lw	$t0, 0x1160($t0)
	lw	$t1, 0x14c($t0)
	bnez	$t1, 0x98
	nop	
	lw	$t2, 0x1c($sp)
	lh	$t3, ($t2)
#This function is called from Behavior  bhv1Up
#It has virtual address 0x802F3D30 and rom address 0xAED30
 bhv_1up_init:
	addiu	$sp, $sp, -0x18
	sw	$ra, 0x14($sp)
	jal	 bhv_1up_common_init
	nop	
	lui	$t6, 0x8036
	lw	$t6, 0x1160($t6)
	addiu	$at, $zero, 1
	lw	$t7, 0x144($t6)
	bne	$t7, $at, 0x50
	nop	
	jal	 save_file_get_flags
	nop	
	andi	$t8, $v0, 0x50
	bnez	$t8, 0x48
	nop	
	lui	$t9, 0x8036
	lw	$t9, 0x1160($t9)
	sh	$zero, 0x74($t9)
	b	0x88
	nop	
	lui	$t0, 0x8036
	lw	$t0, 0x1160($t0)
	addiu	$at, $zero, 2
#This function is called from Behavior  bhv1Up
#It has virtual address 0x802F45B8 and rom address 0xAF5B8
 bhv_1up_loop:
	addiu	$sp, $sp, -0x18
	sw	$ra, 0x14($sp)
	jal	 bhv_1up_interact
	nop	
	lui	$a0, 0x8036
	lw	$a0, 0x1160($a0)
	jal	 set_object_visibility
	addiu	$a1, $zero, 0xbb8
	b	0x28
	nop	
	lw	$ra, 0x14($sp)
	addiu	$sp, $sp, 0x18
	jr	$ra
	nop	
#This function is called from Behavior  bhvHauntedChair
#It has virtual address 0x8030B658 and rom address 0xC6658
 bhv_haunted_chair_init:
	addiu	$sp, $sp, -0x20
	sw	$ra, 0x14($sp)
	lui	$a0, 0x1300
	addiu	$a0, $a0, 0x5024
	jal	 cur_obj_find_nearest_object_with_behavior
	addiu	$a1, $sp, 0x18
	sw	$v0, 0x1c($sp)
	lw	$t6, 0x1c($sp)
	beqz	$t6, 0x58
	nop	
	lui	$at, 0x4396
	mtc1	$at, $f6
	lwc1	$f4, 0x18($sp)
	c.lt.s	$f4, $f6
#This function is called from Behavior  bhvMadPiano
#It has virtual address 0x8030BFD0 and rom address 0xC6FD0
 bhv_mad_piano_update:
	addiu	$sp, $sp, -0x28
	sw	$ra, 0x1c($sp)
	sw	$s0, 0x18($sp)
	lui	$t6, 0x8036
	lw	$t6, 0x1160($t6)
	lh	$t7, 0x74($t6)
	andi	$t8, $t7, 8
	bnez	$t8, 0x80
	nop	
	lui	$t9, 0x8036
	lw	$t9, 0x1160($t9)
	lw	$t0, 0xc8($t9)
	addiu	$t1, $t0, -0x4000
	sw	$t1, 0xd4($t9)
#This function is called from Behavior  bhvRedCoin
#It has virtual address 0x802F2E6C and rom address 0xADE6C
 bhv_red_coin_init:
	addiu	$sp, $sp, -0x28
	sw	$ra, 0x14($sp)
	lui	$t6, 0x8036
	lw	$t6, 0x1160($t6)
	addiu	$a3, $sp, 0x24
	lwc1	$f12, 0xa0($t6)
	lwc1	$f14, 0xa4($t6)
	jal	 find_floor
	lw	$a2, 0xa8($t6)
	swc1	$f0, 0x20($sp)
	lui	$a0, 0x1300
	jal	 cur_obj_nearest_object_with_behavior
	addiu	$a0, $a0, 0x3e8c
	sw	$v0, 0x1c($sp)
#This function is called from Behavior  bhvRedCoin
#It has virtual address 0x802F2F2C and rom address 0xADF2C
 bhv_red_coin_loop:
	addiu	$sp, $sp, -0x18
	sw	$ra, 0x14($sp)
	lui	$t6, 0x8036
	lw	$t6, 0x1160($t6)
	lw	$t7, 0x134($t6)
	andi	$t8, $t7, 0x8000
	beqz	$t8, 0xd0
	nop	
	lui	$t9, 0x8036
	lw	$t9, 0x1160($t9)
	lw	$t0, 0x68($t9)
	beqz	$t0, 0xbc
	nop	
	lui	$t1, 0x8036
#This function is called from Behavior  bhvWarp
#It has virtual address 0x802AAA60 and rom address 0x65A60
 bhv_warp_loop:
	addiu	$sp, $sp, -8
	lui	$t6, 0x8036
	lw	$t6, 0x1160($t6)
	lw	$t7, 0x154($t6)
	bnez	$t7, 0xd8
	nop	
	lui	$t8, 0x8036
	lw	$t8, 0x1160($t8)
	lw	$t9, 0x188($t8)
	sra	$t0, $t9, 0x18
	andi	$t1, $t0, 0xff
	sh	$t1, 6($sp)
	lhu	$t2, 6($sp)
	bnez	$t2, 0x54
#This function is called from Behavior  bhvBowserCourseRedCoinStar
#It has virtual address 0x802F328C and rom address 0xAE28C
 bhv_bowser_course_red_coin_star_loop:
	addiu	$sp, $sp, -0x28
	sw	$ra, 0x1c($sp)
	sw	$s0, 0x18($sp)
	lui	$t6, 0x8036
	lw	$t6, 0x1160($t6)
	lui	$at, 0x8036
	lw	$t7, 0xf4($t6)
	sb	$t7, 0x13fe($at)
	lui	$t8, 0x8036
	lw	$t8, 0x1160($t8)
	lw	$s0, 0x14c($t8)
	beqz	$s0, 0x48
	nop	
	addiu	$at, $zero, 1
#This function is called from Behavior  bhvFadingWarp
#It has virtual address 0x802AAB54 and rom address 0x65B54
 bhv_fading_warp_loop:
	addiu	$sp, $sp, -8
	lui	$t6, 0x8036
	lw	$t6, 0x1160($t6)
	lw	$t7, 0x154($t6)
	bnez	$t7, 0xd8
	nop	
	lui	$t8, 0x8036
	lw	$t8, 0x1160($t8)
	lw	$t9, 0x188($t8)
	sra	$t0, $t9, 0x18
	andi	$t1, $t0, 0xff
	sh	$t1, 6($sp)
	lhu	$t2, 6($sp)
	bnez	$t2, 0x54
#This function is called from Behavior  bhvWarpPipe
#It has virtual address 0x803839CC and rom address 0x13E9CC
 load_object_collision_model:
	beq	$gp, $v1, 0x10e00
	bne	$a2, $a1, -0x1011c
	andi	$s5, $at, 0xf001
	beql	$zero, $s3, 0x7eb4
#This function is called from Behavior  bhvBbhTiltingTrapPlatform
#It has virtual address 0x802C5890 and rom address 0x80890
 bhv_bbh_tilting_trap_platform_loop:
	addiu	$sp, $sp, -0x20
	sw	$ra, 0x14($sp)
	lui	$t6, 0x8036
	lw	$t6, 0x1158($t6)
	lui	$t8, 0x8036
	lw	$t8, 0x1160($t8)
	lw	$t7, 0x214($t6)
	bne	$t7, $t8, 0x34
	nop	
	lui	$t9, 0x8036
	lw	$t9, 0x1160($t9)
	b	0x44
	sw	$zero, 0x14c($t9)
	lui	$t1, 0x8036
#This function is called from Behavior  bhvHauntedBookshelf
#It has virtual address 0x802C5A38 and rom address 0x80A38
 bhv_haunted_bookshelf_loop:
	addiu	$sp, $sp, -0x28
	sw	$ra, 0x1c($sp)
	sw	$s0, 0x18($sp)
	lui	$a0, 0x8036
	lui	$a1, 0x8036
	lw	$a1, 0x1158($a1)
	jal	 dist_between_objects
	lw	$a0, 0x1160($a0)
	lui	$t6, 0x8036
	lw	$t6, 0x1160($t6)
	swc1	$f0, 0x15c($t6)
	lui	$t7, 0x8036
	lw	$t7, 0x1160($t7)
	sw	$zero, 0xd4($t7)
#This function is called from Behavior  bhvMeshElevator
#It has virtual address 0x802ADDF8 and rom address 0x68DF8
 bhv_elevator_init:
	addiu	$sp, $sp, -0x20
	sw	$ra, 0x14($sp)
	lui	$t6, 0x8036
	lw	$t6, 0x1160($t6)
	lui	$t0, 0x8033
	lw	$t7, 0x144($t6)
	sll	$t8, $t7, 2
	subu	$t8, $t8, $t7
	sll	$t9, $t8, 1
	addu	$t0, $t0, $t9
	lh	$t0, 0x2f0($t0)
	sw	$t0, 0x1c($sp)
	lw	$t1, 0x1c($sp)
	bnez	$t1, 0xc0
#This function is called from Behavior  bhvMeshElevator
#It has virtual address 0x802ADF6C and rom address 0x68F6C
 bhv_elevator_loop:
	addiu	$sp, $sp, -0x18
	sw	$ra, 0x14($sp)
	lui	$a0, 0x8033
	jal	 cur_obj_call_action_function
	addiu	$a0, $a0, 0x318
	b	0x1c
	nop	
	lw	$ra, 0x14($sp)
	addiu	$sp, $sp, 0x18
	jr	$ra
	nop	
#This function is called from Behavior  bhvCoffinSpawner
#It has virtual address 0x80312248 and rom address 0xCD248
 bhv_coffin_spawner_loop:
	addiu	$sp, $sp, -0x38
	sw	$ra, 0x24($sp)
	lui	$t6, 0x8036
	lw	$t6, 0x1160($t6)
	lw	$t7, 0x14c($t6)
	bnez	$t7, 0xec
	nop	
	lui	$t8, 0x8036
	lw	$t8, 0x1160($t8)
	lh	$t9, 0x74($t8)
	andi	$t0, $t9, 8
#This function is called from Behavior  bhvMrI
#It has virtual address 0x802A6B7C and rom address 0x61B7C
 bhv_mr_i_loop:
	addiu	$sp, $sp, -0x18
	sw	$ra, 0x14($sp)
	lui	$a0, 0x8036
	lui	$a1, 0x8033
	addiu	$a1, $a1, 0x84
	jal	 obj_set_hitbox
	lw	$a0, 0x1160($a0)
	lui	$a0, 0x8033
	jal	 cur_obj_call_action_function
	addiu	$a0, $a0, 0x74
	lui	$t6, 0x8036
#This function is called from Behavior  bhvHiddenObject
#It has virtual address 0x802B1AE0 and rom address 0x6CAE0
 bhv_hidden_object_loop:
	addiu	$sp, $sp, -0x18
	sw	$ra, 0x14($sp)
	lui	$t6, 0x8036
	lw	$t6, 0x1160($t6)
	lw	$t7, 0x144($t6)
	bnez	$t7, 0x2c
	nop	
	jal	 hidden_breakable_box_actions
	nop	
	b	0x34
	nop	
#This function is called from Behavior  bhvStar
#It has virtual address 0x802F24F4 and rom address 0xAD4F4
 bhv_collect_star_init:
	addiu	$sp, $sp, -0x20
	sw	$ra, 0x14($sp)
	lui	$t6, 0x8036
	lw	$t6, 0x1160($t6)
	lw	$t7, 0x188($t6)
	sra	$t8, $t7, 0x18
	andi	$t9, $t8, 0xff
	sb	$t9, 0x1f($sp)
	lui	$a0, 0x8033
	lui	$a1, 0x8034
	lh	$a1, -0x453a($a1)
#This function is called from Behavior  bhvStar
#It has virtual address 0x802F25B0 and rom address 0xAD5B0
 bhv_collect_star_loop:
	addiu	$sp, $sp, -0x18
	sw	$ra, 0x14($sp)
	lui	$t6, 0x8036
	lw	$t6, 0x1160($t6)
	lw	$t7, 0xd4($t6)
	addiu	$t8, $t7, 0x800
	sw	$t8, 0xd4($t6)
	lui	$t9, 0x8036
	lw	$t9, 0x1160($t9)
	lw	$t0, 0x134($t9)
	andi	$t1, $t0, 0x8000
#This function is called from Behavior  Bhv_Custom_0x13002808
#It has virtual address 0x802C3440 and rom address 0x7E440
 bhv_boo_init:
	lui	$t6, 0x8036
	lw	$t6, 0x1160($t6)
	lw	$t7, 0xc8($t6)
	sw	$t7, 0x110($t6)
	jr	$ra
	nop	
#This function is called from Behavior  Bhv_Custom_0x13002808
#It has virtual address 0x802C4824 and rom address 0x7F824
 bhv_boo_loop:
	addiu	$sp, $sp, -0x18
	sw	$ra, 0x14($sp)
	jal	 cur_obj_update_floor_and_walls
	nop	
	lui	$a0, 0x8033
	jal	 cur_obj_call_action_function
#This function is called from Behavior  bhvEmitter_MOP
#It has virtual address 0x8030C4B0 and rom address 0xC74B0
 bhv_bookend_spawn_loop:
	addiu	$sp, $sp, -0x20
	sw	$ra, 0x14($sp)
	lui	$t6, 0x8036
	lw	$t6, 0x1160($t6)
	lh	$t7, 0x74($t6)
	andi	$t8, $t7, 8
#This function is called from Behavior  bhvHauntedBookshelfManager
#It has virtual address 0x8030C8EC and rom address 0xC78EC
 bhv_haunted_bookshelf_manager_loop:
	addiu	$sp, $sp, -0x18
	sw	$ra, 0x14($sp)
	lui	$t6, 0x8036
	lw	$t6, 0x1160($t6)
	lw	$t7, 0x14c($t6)
	sltiu	$at, $t7, 5
#This function is called from Behavior  bhvFlyingBookend
#It has virtual address 0x8030C364 and rom address 0xC7364
 bhv_flying_bookend_loop:
	addiu	$sp, $sp, -0x28
	sw	$ra, 0x1c($sp)
	sw	$s0, 0x18($sp)
	lui	$t6, 0x8036
	lw	$t6, 0x1160($t6)
	lh	$t7, 0x74($t6)
#This function is called from Behavior  bhvHiddenStar
#It has virtual address 0x802F3014 and rom address 0xAE014
 bhv_hidden_star_init:
	addiu	$sp, $sp, -0x38
	sw	$ra, 0x2c($sp)
	lui	$a0, 0x1300
	jal	 count_objects_with_behavior
	addiu	$a0, $a0, 0x3f1c
	sh	$v0, 0x36($sp)
#This function is called from Behavior  bhvHiddenStar
#It has virtual address 0x802F30F0 and rom address 0xAE0F0
 bhv_hidden_star_loop:
	addiu	$sp, $sp, -0x28
	sw	$ra, 0x1c($sp)
	sw	$s0, 0x18($sp)
	lui	$t6, 0x8036
	lw	$t6, 0x1160($t6)
	lw	$s0, 0x14c($t6)
#This function is called from Behavior  bhvHiddenRedCoinStar
#It has virtual address 0x802F2C84 and rom address 0xADC84
 bhv_hidden_red_coin_star_init:
	addiu	$sp, $sp, -0x38
	sw	$ra, 0x2c($sp)
	lui	$t6, 0x8034
	lh	$t6, -0x453a($t6)
	addiu	$at, $zero, 0
	beq	$t6, $at, 0x34
#This function is called from Behavior  bhvHiddenRedCoinStar
#It has virtual address 0x802F2D8C and rom address 0xADD8C
 bhv_hidden_red_coin_star_loop:
	addiu	$sp, $sp, -0x28
	sw	$ra, 0x1c($sp)
	sw	$s0, 0x18($sp)
	lui	$t6, 0x8036
	lw	$t6, 0x1160($t6)
	lui	$at, 0x8036
#This function is called from Behavior  Bhv_Custom_0x13001488
#It has virtual address 0x802B1278 and rom address 0x6C278
 bhv_purple_switch_loop:
	addiu	$sp, $sp, -0x20
	sw	$ra, 0x14($sp)
	lui	$t6, 0x8036
	lw	$t6, 0x1160($t6)
	lw	$t7, 0x14c($t6)
	sltiu	$at, $t7, 5
#This function is called from Behavior  bhvPlatformOnTrack
#It has virtual address 0x80305100 and rom address 0xC0100
 bhv_platform_on_track_init:
	addiu	$sp, $sp, -0x20
	sw	$ra, 0x14($sp)
	lui	$t6, 0x8036
	lw	$t6, 0x1160($t6)
	lh	$t7, 0x74($t6)
	andi	$t8, $t7, 8
#This function is called from Behavior  bhvPlatformOnTrack
#It has virtual address 0x80305A58 and rom address 0xC0A58
 bhv_platform_on_track_update:
	addiu	$sp, $sp, -0x18
	sw	$ra, 0x14($sp)
	lui	$t6, 0x8036
	lw	$t6, 0x1160($t6)
	lw	$t7, 0x14c($t6)
	sltiu	$at, $t7, 5
#This function is called from Behavior  bhvSmallPenguin
#It has virtual address 0x802BFA88 and rom address 0x7AA88
 bhv_small_penguin_loop:
	addiu	$sp, $sp, -0x28
	sw	$ra, 0x1c($sp)
	sw	$s0, 0x18($sp)
	lui	$t6, 0x8036
	lw	$t6, 0x1160($t6)
	lw	$s0, 0x124($t6)
#This function is called from Behavior  bhvCcmTouchedStarSpawn
#It has virtual address 0x802B2340 and rom address 0x6D340
 bhv_ccm_touched_star_spawn_loop:
	addiu	$sp, $sp, -0x18
	sw	$ra, 0x14($sp)
	lui	$t6, 0x8036
	lh	$t6, 0x125c($t6)
	andi	$t7, $t6, 1
	beqz	$t7, 0x88
#This function is called from Behavior  bhvTuxiesMother
#It has virtual address 0x802BF3C0 and rom address 0x7A3C0
 bhv_tuxies_mother_loop:
	addiu	$sp, $sp, -0x18
	sw	$ra, 0x14($sp)
	lui	$t6, 0x8036
	lw	$t6, 0x1160($t6)
	lh	$t7, 0x74($t6)
	ori	$t8, $t7, 0x400
#This function is called from Behavior  bhvPushableMetalBox
#It has virtual address 0x802B15E8 and rom address 0x6C5E8
 bhv_pushable_loop:
	addiu	$sp, $sp, -0x20
	sw	$ra, 0x14($sp)
	lui	$a0, 0x8036
	lui	$a1, 0x8033
	addiu	$a1, $a1, 0x3a0
	jal	 obj_set_hitbox
#This function is called from Behavior  bhvPoleGrabbing
#It has virtual address 0x802A6C20 and rom address 0x61C20
 bhv_pole_init:
	addiu	$sp, $sp, -8
	lui	$t6, 0x8036
	lw	$t6, 0x1160($t6)
	lw	$t7, 0x188($t6)
	sra	$t8, $t7, 0x10
	andi	$t9, $t8, 0xff
#This function is called from Behavior  bhvPoleGrabbing
#It has virtual address 0x802C63E8 and rom address 0x813E8
 bhv_pole_base_loop:
	addiu	$sp, $sp, -0x18
	sw	$ra, 0x14($sp)
	lui	$t6, 0x8036
	lw	$t6, 0x1160($t6)
	lui	$at, 0x4120
	mtc1	$at, $f6
#This function is called from Behavior  bhvOpenableGrill
#It has virtual address 0x802C26F8 and rom address 0x7D6F8
 bhv_openable_grill_loop:
	addiu	$sp, $sp, -0x40
	sw	$ra, 0x2c($sp)
	sw	$s0, 0x28($sp)
	lui	$t6, 0x8036
	lw	$t6, 0x1160($t6)
	lw	$s0, 0x14c($t6)
#This function is called from Behavior  bhvDorrie
#It has virtual address 0x8030B2F4 and rom address 0xC62F4
 bhv_dorrie_update:
	addiu	$sp, $sp, -0x38
	sw	$ra, 0x1c($sp)
	sw	$s0, 0x18($sp)
	lui	$t6, 0x8036
	lw	$t6, 0x1160($t6)
	lh	$t7, 0x74($t6)
#This function is called from Behavior  bhvBigBoulderGenerator
#It has virtual address 0x802F17F0 and rom address 0xAC7F0
 bhv_big_boulder_generator_loop:
	addiu	$sp, $sp, -0x20
	sw	$ra, 0x14($sp)
	lui	$t6, 0x8036
	lw	$t6, 0x1160($t6)
	lw	$t7, 0x154($t6)
	slti	$at, $t7, 0x100
#This function is called from Behavior  bhvFlamethrower
#It has virtual address 0x802AF1E8 and rom address 0x6A1E8
 bhv_flamethrower_loop:
	addiu	$sp, $sp, -0x40
	sw	$ra, 0x24($sp)
	lui	$t6, 0x8036
	lw	$t6, 0x1160($t6)
	lw	$t7, 0x14c($t6)
	bnez	$t7, 0x84
#This function is called from Behavior  bhvHiddenStarTrigger
#It has virtual address 0x802F31BC and rom address 0xAE1BC
 bhv_hidden_star_trigger_loop:
	addiu	$sp, $sp, -0x20
	sw	$ra, 0x14($sp)
	lui	$a0, 0x8036
	lui	$a1, 0x8036
	lw	$a1, 0x1158($a1)
	jal	 obj_check_if_collided_with_object
#This function is called from Behavior  bhvPyramidTop
#It has virtual address 0x802F0168 and rom address 0xAB168
 bhv_pyramid_top_init:
	addiu	$sp, $sp, -0x30
	sw	$ra, 0x2c($sp)
	lui	$a0, 0x8036
	lui	$a3, 0x1300
	addiu	$t6, $zero, 0x6fd
	addiu	$t7, $zero, 0x400
#This function is called from Behavior  bhvPyramidTop
#It has virtual address 0x802F05B4 and rom address 0xAB5B4
 bhv_pyramid_top_loop:
	addiu	$sp, $sp, -0x28
	sw	$ra, 0x1c($sp)
	sw	$s0, 0x18($sp)
	lui	$t6, 0x8036
	lw	$t6, 0x1160($t6)
	lw	$s0, 0x14c($t6)
#This function is called from Behavior  bhvToxBox
#It has virtual address 0x802BDD68 and rom address 0x78D68
 bhv_tox_box_loop:
	addiu	$sp, $sp, -0x18
	sw	$ra, 0x14($sp)
	lui	$a0, 0x8033
	jal	 cur_obj_call_action_function
	addiu	$a0, $a0, 0x8d8
	jal	 load_object_collision_model
#This function is called from Behavior  bhvTweester
#It has virtual address 0x802C329C and rom address 0x7E29C
 bhv_tweester_loop:
	addiu	$sp, $sp, -0x18
	sw	$ra, 0x14($sp)
	lui	$a0, 0x8036
	lui	$a1, 0x8033
	addiu	$a1, $a1, 0xc58
	jal	 obj_set_hitbox
#This function is called from Behavior  bhvKlepto
#It has virtual address 0x80310498 and rom address 0xCB498
 bhv_klepto_init:
	addiu	$sp, $sp, -0x18
	sw	$ra, 0x14($sp)
	lui	$t6, 0x8036
	lw	$t6, 0x1160($t6)
	lw	$t7, 0x144($t6)
	beqz	$t7, 0x30
#This function is called from Behavior  bhvKlepto
#It has virtual address 0x8031129C and rom address 0xCC29C
 bhv_klepto_update:
	addiu	$sp, $sp, -0x20
	sw	$ra, 0x14($sp)
	jal	 cur_obj_update_floor_and_walls
	nop	
	jal	 cur_obj_lateral_dist_to_home
	nop	
#This function is called from Behavior  bhvGrindel
#It has virtual address 0x802AD34C and rom address 0x6834C
 bhv_grindel_thwomp_loop:
	addiu	$sp, $sp, -0x18
	sw	$ra, 0x14($sp)
	lui	$a0, 0x8033
	jal	 cur_obj_call_action_function
	addiu	$a0, $a0, 0x298
	b	0x1c
#This function is called from Behavior  bhvHorizontalGrindel
#It has virtual address 0x8030E14C and rom address 0xC914C
 bhv_horizontal_grindel_init:
	lui	$t6, 0x8036
	lw	$t6, 0x1160($t6)
	lw	$t7, 0xc8($t6)
	sw	$t7, 0xf4($t6)
	jr	$ra
	nop	
#This function is called from Behavior  bhvHorizontalGrindel
#It has virtual address 0x802A2320 and rom address 0x5D320
 cur_obj_update_floor_and_walls:
	addiu	$sp, $sp, -0x18
	sw	$ra, 0x14($sp)
	jal	0x802a21d4
	addiu	$a0, $zero, 0x3c
	b	0x18
	nop	
#This function is called from Behavior  bhvHorizontalGrindel
#It has virtual address 0x8030E16C and rom address 0xC916C
 bhv_horizontal_grindel_update:
	addiu	$sp, $sp, -0x18
	sw	$ra, 0x14($sp)
	lui	$t6, 0x8036
	lw	$t6, 0x1160($t6)
	lw	$t7, 0xec($t6)
	andi	$t8, $t7, 3
#This function is called from Behavior  bhvSpindel
#It has virtual address 0x802EF820 and rom address 0xAA820
 bhv_spindel_init:
	lui	$t6, 0x8036
	lw	$t6, 0x1160($t6)
	lwc1	$f4, 0xa4($t6)
	swc1	$f4, 0x168($t6)
	lui	$t7, 0x8036
	lw	$t7, 0x1160($t7)
#This function is called from Behavior  bhvSpindel
#It has virtual address 0x802EF858 and rom address 0xAA858
 bhv_spindel_loop:
	addiu	$sp, $sp, -0x20
	sw	$ra, 0x14($sp)
	lui	$t6, 0x8036
	lw	$t6, 0x1160($t6)
	addiu	$at, $zero, -1
	lw	$t7, 0xf4($t6)
#This function is called from Behavior  bhvSslMovingPyramidWall
#It has virtual address 0x802EFCD0 and rom address 0xAACD0
 bhv_ssl_moving_pyramid_wall_init:
	addiu	$sp, $sp, -8
	lui	$t6, 0x8036
	lw	$t6, 0x1160($t6)
	lw	$a0, 0x144($t6)
	beqz	$a0, 0x38
	nop	
#This function is called from Behavior  bhvSslMovingPyramidWall
#It has virtual address 0x802EFD8C and rom address 0xAAD8C
 bhv_ssl_moving_pyramid_wall_loop:
	addiu	$sp, $sp, -8
	lui	$t6, 0x8036
	lw	$t6, 0x1160($t6)
	lw	$a0, 0x14c($t6)
	beqz	$a0, 0x2c
	nop	
#This function is called from Behavior  bhvPyramidElevator
#It has virtual address 0x802EFE64 and rom address 0xAAE64
 bhv_pyramid_elevator_init:
	addiu	$sp, $sp, -0x20
	sw	$ra, 0x14($sp)
	sw	$zero, 0x1c($sp)
	lui	$a0, 0x8036
	lui	$a2, 0x1300
	addiu	$a2, $a2, 0x3b98
#This function is called from Behavior  bhvPyramidElevator
#It has virtual address 0x802EFEF4 and rom address 0xAAEF4
 bhv_pyramid_elevator_loop:
	addiu	$sp, $sp, -8
	lui	$t6, 0x8036
	lw	$t6, 0x1160($t6)
	lw	$a0, 0x14c($t6)
	beqz	$a0, 0x44
	nop	
#This function is called from Behavior  bhvSandSoundLoop
#It has virtual address 0x802F09A4 and rom address 0xAB9A4
 bhv_sand_sound_loop:
	addiu	$sp, $sp, -0x18
	sw	$ra, 0x14($sp)
	lui	$t6, 0x8034
	lw	$t6, -0x3430($t6)
	addiu	$at, $zero, 3
	lbu	$t7, ($t6)
#This function is called from Behavior  bhvEyerokBoss
#It has virtual address 0x8030EA9C and rom address 0xC9A9C
 bhv_eyerok_boss_loop:
	addiu	$sp, $sp, -0x18
	sw	$ra, 0x14($sp)
	lui	$t6, 0x8036
	lw	$t6, 0x1160($t6)
	lw	$t7, 0x14c($t6)
	sltiu	$at, $t7, 5
#This function is called from Behavior  bhvChainChompGate
#It has virtual address 0x80301148 and rom address 0xBC148
 bhv_chain_chomp_gate_init:
	addiu	$sp, $sp, -0x18
	sw	$ra, 0x14($sp)
	lui	$a0, 0x1300
	jal	 cur_obj_nearest_object_with_behavior
	addiu	$a0, $a0, 0x478c
	lui	$t6, 0x8036
#This function is called from Behavior  bhvChainChompGate
#It has virtual address 0x80301180 and rom address 0xBC180
 bhv_chain_chomp_gate_update:
	addiu	$sp, $sp, -0x18
	sw	$ra, 0x14($sp)
	lui	$t6, 0x8036
	lw	$t6, 0x1160($t6)
	lw	$t7, 0x68($t6)
	lw	$t8, 0x1b0($t7)
#This function is called from Behavior  bhvSeesawPlatform
#It has virtual address 0x80305C14 and rom address 0xC0C14
 bhv_seesaw_platform_init:
	addiu	$sp, $sp, -0x18
	sw	$ra, 0x14($sp)
	lui	$t6, 0x8036
	lw	$t6, 0x1160($t6)
	lui	$a0, 0x8033
	lw	$t7, 0x144($t6)
#This function is called from Behavior  bhvSeesawPlatform
#It has virtual address 0x80305C90 and rom address 0xC0C90
 bhv_seesaw_platform_update:
	addiu	$sp, $sp, -0x30
	sw	$ra, 0x1c($sp)
	lui	$t6, 0x8036
	lw	$t6, 0x1160($t6)
	lw	$t7, 0xd0($t6)
	sw	$t7, 0x2c($sp)
#This function is called from Behavior  bhvCheckerboardElevatorGroup
#It has virtual address 0x802B98FC and rom address 0x748FC
 bhv_checkerboard_elevator_group_init:
	addiu	$sp, $sp, -0x40
	sw	$ra, 0x24($sp)
	lui	$t6, 0x8036
	lw	$t6, 0x1160($t6)
	lw	$t7, 0x144($t6)
	bnez	$t7, 0x2c
#This function is called from Behavior  bhvCheckerboardElevatorGroup
#It has virtual address 0x802B9BB4 and rom address 0x74BB4
 bhv_checkerboard_platform_init:
	lui	$t6, 0x8036
	lw	$t6, 0x1160($t6)
	lw	$t7, 0x68($t6)
	lw	$t8, 0x144($t7)
	sw	$t8, 0xfc($t6)
	jr	$ra
	nop	
#This function is called from Behavior  bhvCheckerboardElevatorGroup
#It has virtual address 0x802B9BD8 and rom address 0x74BD8
 bhv_checkerboard_platform_loop:
	addiu	$sp, $sp, -0x28
	sw	$ra, 0x1c($sp)
	sw	$s0, 0x18($sp)
	lui	$t6, 0x8036
	lw	$t6, 0x1160($t6)
	lwc1	$f4, 0x1ac($t6)
	swc1	$f4, 0x24($sp)
#This function is called from Behavior  bhvBobBowlingBallSpawner
#It has virtual address 0x802EEEB4 and rom address 0xA9EB4
 bhv_generic_bowling_ball_spawner_init:
	addiu	$sp, $sp, -8
	lui	$t6, 0x8036
	lw	$t6, 0x1160($t6)
	lw	$a0, 0x144($t6)
	beqz	$a0, 0x38
	nop	
	addiu	$at, $zero, 1
#This function is called from Behavior  bhvBobBowlingBallSpawner
#It has virtual address 0x802EEF9C and rom address 0xA9F9C
 bhv_generic_bowling_ball_spawner_loop:
	addiu	$sp, $sp, -0x28
	sw	$ra, 0x1c($sp)
	sdc1	$f20, 0x10($sp)
	lui	$t6, 0x8036
	lw	$t6, 0x1160($t6)
	addiu	$at, $zero, 0x100
	lw	$t7, 0x154($t6)
#This function is called from Behavior  bhvPitBowlingBall
#It has virtual address 0x802EF21C and rom address 0xAA21C
 bhv_bob_pit_bowling_ball_init:
	lui	$at, 0x4140
	lui	$t6, 0x8036
	lw	$t6, 0x1160($t6)
	mtc1	$at, $f4
	nop	
	swc1	$f4, 0xe4($t6)
	lui	$at, 0x3f80
#This function is called from Behavior  bhvPitBowlingBall
#It has virtual address 0x802EF274 and rom address 0xAA274
 bhv_bob_pit_bowling_ball_loop:
	addiu	$sp, $sp, -0x20
	sw	$ra, 0x14($sp)
	jal	 object_step
	nop	
	sh	$v0, 0x1a($sp)
	lui	$t6, 0x8036
	lw	$t6, 0x1160($t6)
#This function is called from Behavior  bhvBobombBuddy
#It has virtual address 0x802E76AC and rom address 0xA26AC
 bhv_bobomb_buddy_init:
	lui	$at, 0x4020
	lui	$t6, 0x8036
	lw	$t6, 0x1160($t6)
	mtc1	$at, $f4
	nop	
	swc1	$f4, 0xe4($t6)
	lui	$at, 0x8034
#This function is called from Behavior  bhvBobombBuddy
#It has virtual address 0x802E7C4C and rom address 0xA2C4C
 bhv_bobomb_buddy_loop:
	addiu	$sp, $sp, -0x18
	sw	$ra, 0x14($sp)
	jal	 bobomb_buddy_actions
	nop	
	lui	$a0, 0x8036
	lw	$a0, 0x1160($a0)
	jal	 curr_obj_random_blink
#This function is called from Behavior  bhvWaterBombCannon
#It has virtual address 0x8030A11C and rom address 0xC511C
 bhv_water_bomb_cannon_loop:
	addiu	$sp, $sp, -0x28
	sw	$ra, 0x1c($sp)
	sw	$s0, 0x18($sp)
	lui	$at, 0x435c
	mtc1	$at, $f12
	lui	$at, 0x4396
	mtc1	$at, $f14
#This function is called from Behavior  bhvCannonClosed
#It has virtual address 0x802E7C90 and rom address 0xA2C90
 bhv_cannon_closed_init:
	addiu	$sp, $sp, -0x20
	sw	$ra, 0x14($sp)
	jal	 save_file_is_cannon_unlocked
	nop	
	addiu	$at, $zero, 1
	bne	$v0, $at, 0xa4
	nop	
#This function is called from Behavior  bhvCannonClosed
#It has virtual address 0x802E7E54 and rom address 0xA2E54
 bhv_cannon_closed_loop:
	addiu	$sp, $sp, -0x28
	sw	$ra, 0x1c($sp)
	sw	$s0, 0x18($sp)
	lui	$t6, 0x8036
	lw	$t6, 0x1160($t6)
	lw	$s0, 0x14c($t6)
	beqz	$s0, 0x40
#This function is called from Behavior  bhvKoopa
#It has virtual address 0x802FBC4C and rom address 0xB6C4C
 bhv_koopa_init:
	addiu	$sp, $sp, -0x28
	sw	$ra, 0x1c($sp)
	sw	$s0, 0x18($sp)
	lui	$t6, 0x8036
	lw	$t6, 0x1160($t6)
	addiu	$at, $zero, 4
	lw	$s0, 0x144($t6)
#This function is called from Behavior  bhvKoopa
#It has virtual address 0x802FD7F8 and rom address 0xB87F8
 bhv_koopa_update:
	addiu	$sp, $sp, -0x28
	sw	$ra, 0x1c($sp)
	sw	$s0, 0x18($sp)
	lui	$t7, 0x8036
	lw	$t7, 0x1160($t7)
	lui	$t6, 0x5063
	ori	$t6, $t6, 0xb081
#This function is called from Behavior  bhvKingBobomb
#It has virtual address 0x802A8064 and rom address 0x63064
 bhv_king_bobomb_loop:
	addiu	$sp, $sp, -0x38
	sw	$ra, 0x1c($sp)
	sw	$s0, 0x18($sp)
	lui	$at, 0x41a0
	mtc1	$at, $f4
	nop	
	swc1	$f4, 0x34($sp)
#This function is called from Behavior  bhvSnowMoundSpawn
#It has virtual address 0x802F6448 and rom address 0xB1448
 bhv_snow_mound_spawn_loop:
	addiu	$sp, $sp, -0x20
	sw	$ra, 0x14($sp)
	lui	$t6, 0x8036
	lw	$t6, 0x1160($t6)
	addiu	$a3, $zero, 0x1770
	lwc1	$f12, 0xa0($t6)
	lwc1	$f14, 0xa4($t6)
#This function is called from Behavior  bhvExclamationBox
#It has virtual address 0x802C19C0 and rom address 0x7C9C0
 bhv_exclamation_box_loop:
	addiu	$sp, $sp, -0x18
	sw	$ra, 0x14($sp)
	lui	$at, 0x4000
	mtc1	$at, $f12
	jal	 cur_obj_scale
	nop	
	lui	$a0, 0x8033
#This function is called from Behavior  bhvWdwSquareFloatingPlatform
#It has virtual address 0x802F6984 and rom address 0xB1984
 bhv_floating_platform_loop:
	addiu	$sp, $sp, -0x28
	sw	$ra, 0x1c($sp)
	sw	$s0, 0x18($sp)
	jal	 floating_platform_find_home_y
	nop	
	lui	$t6, 0x8036
	lw	$t6, 0x1160($t6)
#This function is called from Behavior  bhvInitializeChangingWaterLevel
#It has virtual address 0x802C2930 and rom address 0x7D930
 bhv_init_changing_water_level_loop:
	lui	$t6, 0x8036
	lw	$t6, 0x1160($t6)
	lw	$t7, 0x14c($t6)
	bnez	$t7, 0x40
	nop	
	lui	$t8, 0x8036
	lw	$t8, 0x1184($t8)
#This function is called from Behavior  bhvWaterLevelDiamond
#It has virtual address 0x802C2A24 and rom address 0x7DA24
 bhv_water_level_diamond_loop:
	addiu	$sp, $sp, -0x28
	sw	$ra, 0x1c($sp)
	sw	$s0, 0x18($sp)
	lui	$t6, 0x8036
	lw	$t6, 0x1184($t6)
	beqz	$t6, 0x2a8
	nop	
#This function is called from Behavior  bhvWdwExpressElevator
#It has virtual address 0x802C08A8 and rom address 0x7B8A8
 bhv_wdw_express_elevator_loop:
	addiu	$sp, $sp, -0x18
	sw	$ra, 0x14($sp)
	lui	$t6, 0x8036
	lw	$t6, 0x1160($t6)
	mtc1	$zero, $f4
	nop	
	swc1	$f4, 0xb0($t6)
#This function is called from Behavior  bhvJetStream
#It has virtual address 0x802E82B0 and rom address 0xA32B0
 bhv_jet_stream_loop:
	addiu	$sp, $sp, -0x18
	sw	$ra, 0x14($sp)
	lui	$t6, 0x8036
	lw	$t6, 0x1160($t6)
	lui	$at, 0x8034
	lwc1	$f6, -0x7b04($at)
	lwc1	$f4, 0x15c($t6)
#This function is called from Behavior  bhvShipPart3
#It has virtual address 0x802C1CD4 and rom address 0x7CCD4
 bhv_ship_part_3_loop:
	addiu	$sp, $sp, -0x20
	sw	$ra, 0x14($sp)
	lui	$t6, 0x8036
	lw	$t6, 0x1160($t6)
	lw	$t7, 0xd0($t6)
	sh	$t7, 0x1e($sp)
	lui	$t8, 0x8036
#This function is called from Behavior  bhvFallingPillar
#It has virtual address 0x802F7348 and rom address 0xB2348
 bhv_falling_pillar_init:
	lui	$at, 0x3f00
	lui	$t6, 0x8036
	lw	$t6, 0x1160($t6)
	mtc1	$at, $f4
	nop	
	swc1	$f4, 0xe4($t6)
	lui	$at, 0x8034
#This function is called from Behavior  bhvFallingPillar
#It has virtual address 0x802F74DC and rom address 0xB24DC
 bhv_falling_pillar_loop:
	addiu	$sp, $sp, -0x28
	sw	$ra, 0x1c($sp)
	sw	$s0, 0x18($sp)
	lui	$t6, 0x8036
	lw	$t6, 0x1160($t6)
	lw	$s0, 0x14c($t6)
	beqz	$s0, 0x40
#This function is called from Behavior  bhvTreasureChestsShip
#It has virtual address 0x802F7FA0 and rom address 0xB2FA0
 bhv_treasure_chest_ship_init:
	addiu	$sp, $sp, -0x20
	sw	$ra, 0x1c($sp)
	addiu	$a0, $zero, 1
	addiu	$a1, $zero, 0x190
	addiu	$a2, $zero, -0x15e
	addiu	$a3, $zero, -0xa8c
	jal	 spawn_treasure_chest
#This function is called from Behavior  bhvTreasureChestsShip
#It has virtual address 0x802F8044 and rom address 0xB3044
 bhv_treasure_chest_ship_loop:
	addiu	$sp, $sp, -0x28
	sw	$ra, 0x1c($sp)
	sw	$s0, 0x18($sp)
	lui	$t6, 0x8036
	lw	$t6, 0x1160($t6)
	lw	$s0, 0x14c($t6)
	beqz	$s0, 0x34
#This function is called from Behavior  bhvGoomba
#It has virtual address 0x802FF408 and rom address 0xBA408
 bhv_goomba_init:
	addiu	$sp, $sp, -0x18
	sw	$ra, 0x14($sp)
	lui	$t6, 0x8036
	lw	$t6, 0x1160($t6)
	lw	$t7, 0x144($t6)
	andi	$t8, $t7, 3
	sw	$t8, 0xf4($t6)
#This function is called from Behavior  bhvGoomba
#It has virtual address 0x802FF96C and rom address 0xBA96C
 bhv_goomba_update:
	addiu	$sp, $sp, -0x28
	sw	$ra, 0x1c($sp)
	sw	$s0, 0x18($sp)
	lui	$t6, 0x8036
	lw	$t6, 0x1160($t6)
	jal	0x802fb87c
	lwc1	$f12, 0xf8($t6)
#This function is called from Behavior  bhvGoombaTripletSpawner
#It has virtual address 0x802FF214 and rom address 0xBA214
 bhv_goomba_triplet_spawner_update:
	addiu	$sp, $sp, -0x40
	sw	$ra, 0x24($sp)
	lui	$t6, 0x8036
	lw	$t6, 0x1160($t6)
	lw	$t7, 0x14c($t6)
	bnez	$t7, 0x1ac
	nop	
#This function is called from Behavior  bhvFirePiranhaPlant
#It has virtual address 0x8030CDDC and rom address 0xC7DDC
 bhv_fire_piranha_plant_init:
	addiu	$sp, $sp, -0x18
	sw	$ra, 0x14($sp)
	lui	$t6, 0x8036
	lw	$t6, 0x1160($t6)
	lui	$at, 0x8033
	lw	$t7, 0x188($t6)
	sra	$t8, $t7, 0x10
#This function is called from Behavior  bhvFirePiranhaPlant
#It has virtual address 0x8030D2F0 and rom address 0xC82F0
 bhv_fire_piranha_plant_update:
	addiu	$sp, $sp, -0x28
	sw	$ra, 0x1c($sp)
	sw	$s0, 0x18($sp)
	lui	$t6, 0x8036
	lw	$t6, 0x1160($t6)
	jal	 cur_obj_scale
	lwc1	$f12, 0xf8($t6)
#This function is called from Behavior  bhvThiBowlingBallSpawner
#It has virtual address 0x802EF0E8 and rom address 0xAA0E8
 bhv_thi_bowling_ball_spawner_loop:
	addiu	$sp, $sp, -0x20
	sw	$ra, 0x14($sp)
	lui	$t6, 0x8036
	lw	$t6, 0x1160($t6)
	addiu	$at, $zero, 0x100
	lw	$t7, 0x154($t6)
	bne	$t7, $at, 0x2c
#This function is called from Behavior  bhvThiTinyIslandTop
#It has virtual address 0x802A6D64 and rom address 0x61D64
 bhv_thi_tiny_island_top_loop:
	addiu	$sp, $sp, -0x18
	sw	$ra, 0x14($sp)
	lui	$t6, 0x8036
	lh	$t6, 0x1256($t6)
	andi	$t7, $t6, 1
	bnez	$t7, 0x13c
	nop	
#This function is called from Behavior  Bhv_Custom_0x13002bd4
#It has virtual address 0x802C79D8 and rom address 0x829D8
 bhv_whomp_loop:
	addiu	$sp, $sp, -0x18
	sw	$ra, 0x14($sp)
	jal	 cur_obj_update_floor_and_walls
	nop	
	lui	$a0, 0x8033
	jal	 cur_obj_call_action_function
	addiu	$a0, $a0, 0xce4
#This function is called from Behavior  bhvWigglerHead
#It has virtual address 0x80302154 and rom address 0xBD154
 bhv_wiggler_update:
	addiu	$sp, $sp, -0x28
	sw	$ra, 0x1c($sp)
	sw	$s0, 0x18($sp)
	lui	$t6, 0x8036
	lw	$t6, 0x1160($t6)
	lw	$t7, 0x14c($t6)
	bnez	$t7, 0x30
#This function is called from Behavior  bhvSlidingPlatform2
#It has virtual address 0x803091E0 and rom address 0xC41E0
 bhv_sliding_plat_2_init:
	addiu	$sp, $sp, -0x20
	sw	$ra, 0x14($sp)
	lui	$t6, 0x8036
	lw	$t6, 0x1160($t6)
	lw	$t7, 0x188($t6)
	sra	$t8, $t7, 0x10
	andi	$t9, $t8, 0xffff
#This function is called from Behavior  bhvSlidingPlatform2
#It has virtual address 0x80309354 and rom address 0xC4354
 bhv_sliding_plat_2_loop:
	addiu	$sp, $sp, -0x18
	sw	$ra, 0x14($sp)
	lui	$t6, 0x8036
	lw	$t6, 0x1160($t6)
	lw	$t7, 0x154($t6)
	slti	$at, $t7, 0xb
	bnez	$at, 0x84
#This function is called from Behavior  bhvCoinFormation
#It has virtual address 0x802ABEE4 and rom address 0x66EE4
 bhv_coin_formation_init:
	lui	$t6, 0x8036
	lw	$t6, 0x1160($t6)
	lw	$t7, 0x188($t6)
	sra	$t8, $t7, 8
	andi	$t9, $t8, 0xff
	sw	$t9, 0xf4($t6)
	jr	$ra
	nop	
#This function is called from Behavior  bhvCoinFormation
#It has virtual address 0x802ABF0C and rom address 0x66F0C
 bhv_coin_formation_loop:
	addiu	$sp, $sp, -0x28
	sw	$ra, 0x1c($sp)
	sw	$s0, 0x18($sp)
	lui	$t6, 0x8036
	lw	$t6, 0x1160($t6)
	lw	$s0, 0x14c($t6)
	beqz	$s0, 0x40
	nop	
#This function is called from Behavior  bhvOctagonalPlatformRotating
#It has virtual address 0x80309454 and rom address 0xC4454
 bhv_rotating_octagonal_plat_init:
	addiu	$sp, $sp, -0x18
	sw	$ra, 0x14($sp)
	lui	$t6, 0x8036
	lw	$t6, 0x1160($t6)
	lui	$a0, 0x8033
	lw	$t7, 0x188($t6)
	sra	$t8, $t7, 0x10
	andi	$t9, $t8, 0xff
#This function is called from Behavior  bhvOctagonalPlatformRotating
#It has virtual address 0x803094D0 and rom address 0xC44D0
 bhv_rotating_octagonal_plat_loop:
	lui	$t6, 0x8036
	lw	$t6, 0x1160($t6)
	lw	$t7, 0xd4($t6)
	lw	$t8, 0x118($t6)
	addu	$t9, $t7, $t8
	sw	$t9, 0xd4($t6)
	jr	$ra
	nop	
#This function is called from Behavior  bhvRrRotatingBridgePlatform
#It has virtual address 0x802AF3FC and rom address 0x6A3FC
 bhv_rr_rotating_bridge_platform_loop:
	addiu	$sp, $sp, -0x18
	sw	$ra, 0x14($sp)
	lui	$t6, 0x8036
	lw	$t6, 0x1160($t6)
	lw	$t7, 0xc8($t6)
	addiu	$t8, $t7, -0x80
	sw	$t8, 0xc8($t6)
	lui	$t0, 0x8036
#This function is called from Behavior  bhvRrCruiserWing
#It has virtual address 0x802EF63C and rom address 0xAA63C
 bhv_rr_cruiser_wing_init:
	lui	$t6, 0x8036
	lw	$t6, 0x1160($t6)
	lw	$t7, 0xd4($t6)
	sw	$t7, 0xf4($t6)
	lui	$t8, 0x8036
	lw	$t8, 0x1160($t8)
	lw	$t9, 0xd0($t8)
	sw	$t9, 0xf8($t8)
#This function is called from Behavior  bhvRrCruiserWing
#It has virtual address 0x802EF66C and rom address 0xAA66C
 bhv_rr_cruiser_wing_loop:
	addiu	$sp, $sp, -0x18
	sw	$ra, 0x14($sp)
	lui	$t6, 0x8036
	lw	$t6, 0x1160($t6)
	lw	$t7, 0x144($t6)
	bnez	$t7, 0xc4
	nop	
	lui	$t8, 0x8036
#This function is called from Behavior  bhvSwingPlatform
#It has virtual address 0x8031326C and rom address 0xCE26C
 bhv_swing_platform_init:
	lui	$at, 0x4600
	lui	$t6, 0x8036
	lw	$t6, 0x1160($t6)
	mtc1	$at, $f4
	nop	
	swc1	$f4, 0xf4($t6)
	jr	$ra
	nop	
#This function is called from Behavior  bhvSwingPlatform
#It has virtual address 0x80313294 and rom address 0xCE294
 bhv_swing_platform_update:
	addiu	$sp, $sp, -8
	lui	$t6, 0x8036
	lw	$t6, 0x1160($t6)
	lw	$t7, 0xd8($t6)
	sw	$t7, 4($sp)
	lui	$t8, 0x8036
	lw	$t8, 0x1160($t8)
	lw	$t9, 0xd8($t8)
#This function is called from Behavior  bhvDonutPlatformSpawner
#It has virtual address 0x80313354 and rom address 0xCE354
 bhv_donut_platform_spawner_update:
	addiu	$sp, $sp, -0x40
	sw	$ra, 0x24($sp)
	addiu	$t6, $zero, 1
	sw	$t6, 0x38($sp)
	sw	$zero, 0x3c($sp)
	lui	$t7, 0x8036
	lw	$t7, 0x1160($t7)
	lw	$t9, 0x38($sp)
#This function is called from Behavior  bhvAnimatesOnFloorSwitchPress
#It has virtual address 0x803094F8 and rom address 0xC44F8
 bhv_animates_on_floor_switch_press_init:
	addiu	$sp, $sp, -0x18
	sw	$ra, 0x14($sp)
	lui	$a0, 0x1300
	jal	 cur_obj_nearest_object_with_behavior
	addiu	$a0, $a0, 0x1468
	lui	$t6, 0x8036
	lw	$t6, 0x1160($t6)
	sw	$v0, 0x68($t6)
#This function is called from Behavior  bhvAnimatesOnFloorSwitchPress
#It has virtual address 0x80309530 and rom address 0xC4530
 bhv_animates_on_floor_switch_press_loop:
	addiu	$sp, $sp, -0x18
	sw	$ra, 0x14($sp)
	lui	$t6, 0x8036
	lw	$t6, 0x1160($t6)
	lw	$t7, 0x100($t6)
	beqz	$t7, 0x90
	nop	
	lui	$t8, 0x8036
#This function is called from Behavior  bhvWaterfallSoundLoop
#It has virtual address 0x802F07F4 and rom address 0xAB7F4
 bhv_waterfall_sound_loop:
	addiu	$sp, $sp, -0x18
	sw	$ra, 0x14($sp)
	lui	$a0, 0x4001
	jal	 cur_obj_play_sound_1
	ori	$a0, $a0, 1
	b	0x1c
	nop	
	lw	$ra, 0x14($sp)
#This function is called from Behavior  bhvBirdsSoundLoop
#It has virtual address 0x802F0898 and rom address 0xAB898
 bhv_birds_sound_loop:
	addiu	$sp, $sp, -0x28
	sw	$ra, 0x1c($sp)
	sw	$s0, 0x18($sp)
	lui	$t6, 0x8034
	lw	$t6, -0x3430($t6)
	addiu	$at, $zero, 3
	lbu	$t7, ($t6)
	bne	$t7, $at, 0x2c
#This function is called from Behavior  bhvAmbientSounds
#It has virtual address 0x802F0950 and rom address 0xAB950
 bhv_ambient_sounds_init:
	addiu	$sp, $sp, -0x18
	sw	$ra, 0x14($sp)
	lui	$t6, 0x8034
	lw	$t6, -0x3430($t6)
	addiu	$at, $zero, 3
	lbu	$t7, ($t6)
	bne	$t7, $at, 0x28
	nop	
#This function is called from Behavior  bhvMoatGrills
#It has virtual address 0x802BA5BC and rom address 0x755BC
 bhv_moat_grills_loop:
	addiu	$sp, $sp, -0x18
	sw	$ra, 0x14($sp)
	jal	 save_file_get_flags
	nop	
	andi	$t6, $v0, 0x200
	beqz	$t6, 0x2c
	nop	
	jal	 cur_obj_set_model
#This function is called from Behavior  bhvInvisibleObjectsUnderBridge
#It has virtual address 0x802BA25C and rom address 0x7525C
 bhv_invisible_objects_under_bridge_init:
	addiu	$sp, $sp, -0x18
	sw	$ra, 0x14($sp)
	jal	 save_file_get_flags
	nop	
	andi	$t6, $v0, 0x200
	beqz	$t6, 0x3c
	nop	
	lui	$t8, 0x8036
#This function is called from Behavior  bhvWaterMist2
#It has virtual address 0x802AE238 and rom address 0x69238
 bhv_water_mist_2_loop:
	addiu	$sp, $sp, -0x18
	sw	$ra, 0x14($sp)
	lui	$t6, 0x8036
	lw	$t6, 0x1160($t6)
	lwc1	$f12, 0x164($t6)
	jal	 find_water_level
	lwc1	$f14, 0x16c($t6)
	lui	$at, 0x41a0
#This function is called from Behavior  bhvBird
#It has virtual address 0x80311874 and rom address 0xCC874
 bhv_bird_update:
	addiu	$sp, $sp, -0x28
	sw	$ra, 0x1c($sp)
	sw	$s0, 0x18($sp)
	lui	$t6, 0x8036
	lw	$t6, 0x1160($t6)
	lw	$s0, 0x14c($t6)
	beqz	$s0, 0x34
	nop	
#This function is called from Behavior  bhvHiddenAt120Stars
#It has virtual address 0x802F09F0 and rom address 0xAB9F0
 bhv_castle_cannon_grate_init:
	addiu	$sp, $sp, -0x18
	sw	$ra, 0x14($sp)
	lui	$a0, 0x8033
	lh	$a0, -0x220c($a0)
	move	$a1, $zero
	addiu	$a2, $zero, 0x18
	jal	 save_file_get_total_star_count
	addiu	$a0, $a0, -1
#This function is called from Behavior  bhvCameraLakitu
#It has virtual address 0x80303984 and rom address 0xBE984
 bhv_camera_lakitu_init:
	addiu	$sp, $sp, -0x28
	sw	$ra, 0x24($sp)
	lui	$t6, 0x8036
	lw	$t6, 0x1160($t6)
	lw	$t7, 0x144($t6)
	beqz	$t7, 0x44
	nop	
	lui	$t8, 0x8034
#This function is called from Behavior  bhvCameraLakitu
#It has virtual address 0x80303F64 and rom address 0xBEF64
 bhv_camera_lakitu_update:
	addiu	$sp, $sp, -0x38
	sw	$ra, 0x24($sp)
	sw	$s0, 0x20($sp)
	sdc1	$f20, 0x18($sp)
	lui	$t6, 0x8036
	lw	$t6, 0x1160($t6)
	lh	$t7, 0x74($t6)
	andi	$t8, $t7, 8
#This function is called from Behavior  bhvCastleFlagWaving
#It has virtual address 0x802F084C and rom address 0xAB84C
 bhv_castle_flag_init:
	addiu	$sp, $sp, -0x18
	sw	$ra, 0x14($sp)
	jal	 random_float
	nop	
	lui	$at, 0x41e0
	mtc1	$at, $f4
	lui	$t8, 0x8036
	lw	$t8, 0x1160($t8)
#This function is called from Behavior  bhvButterfly
#It has virtual address 0x802E8F68 and rom address 0xA3F68
 bhv_butterfly_init:
	addiu	$sp, $sp, -0x18
	sw	$ra, 0x14($sp)
	jal	 cur_obj_init_animation
	addiu	$a0, $zero, 1
	jal	 random_float
	nop	
	lui	$at, 0x42c8
	mtc1	$at, $f4
#This function is called from Behavior  bhvButterfly
#It has virtual address 0x802E96C8 and rom address 0xA46C8
 bhv_butterfly_loop:
	addiu	$sp, $sp, -0x28
	sw	$ra, 0x1c($sp)
	sw	$s0, 0x18($sp)
	lui	$t6, 0x8036
	lw	$t6, 0x1160($t6)
	lw	$s0, 0x14c($t6)
	beqz	$s0, 0x40
	nop	
#This function is called from Behavior  bhvMips
#It has virtual address 0x802F8490 and rom address 0xB3490
 bhv_mips_init:
	addiu	$sp, $sp, -0x20
	sw	$ra, 0x14($sp)
	lui	$a0, 0x8033
	lh	$a0, -0x220c($a0)
	addiu	$a1, $zero, -1
	jal	 save_file_get_star_flags
	addiu	$a0, $a0, -1
	sb	$v0, 0x1f($sp)
#This function is called from Behavior  bhvMips
#It has virtual address 0x802F8DAC and rom address 0xB3DAC
 bhv_mips_loop:
	addiu	$sp, $sp, -0x28
	sw	$ra, 0x1c($sp)
	sw	$s0, 0x18($sp)
	lui	$t6, 0x8036
	lw	$t6, 0x1160($t6)
	lw	$s0, 0x124($t6)
	beqz	$s0, 0x4c
	nop	
#This function is called from Behavior  bhvSquarishPathMoving
#It has virtual address 0x802B0BEC and rom address 0x6BBEC
 bhv_squarish_path_moving_loop:
	addiu	$sp, $sp, -0x18
	sw	$ra, 0x14($sp)
	lui	$at, 0x4120
	lui	$t6, 0x8036
	lw	$t6, 0x1160($t6)
	mtc1	$at, $f4
	nop	
	swc1	$f4, 0xb8($t6)
#This function is called from Behavior  bhvFerrisWheelAxle
#It has virtual address 0x80305E2C and rom address 0xC0E2C
 bhv_ferris_wheel_axle_init:
	addiu	$sp, $sp, -0x30
	sw	$ra, 0x24($sp)
	lui	$t6, 0x8036
	lw	$t6, 0x1160($t6)
	lui	$a0, 0x8033
	lw	$t7, 0x144($t6)
	sll	$t8, $t7, 2
	subu	$t8, $t8, $t7
#This function is called from Behavior  Bhv_Custom_0x13000920
#It has virtual address 0x802AB650 and rom address 0x66650
 bhv_yellow_coin_init:
	addiu	$sp, $sp, -0x18
	sw	$ra, 0x14($sp)
	lui	$a0, 0x1300
	jal	 cur_obj_set_behavior
	addiu	$a0, $a0, 0x91c
	lui	$a0, 0x8036
	lui	$a1, 0x8033
	addiu	$a1, $a1, 0x1f4
#This function is called from Behavior  Bhv_Custom_0x13000920
#It has virtual address 0x802AB70C and rom address 0x6670C
 bhv_yellow_coin_loop:
	addiu	$sp, $sp, -0x18
	sw	$ra, 0x14($sp)
	jal	 bhv_coin_sparkles_init
	nop	
	lui	$t6, 0x8036
	lw	$t6, 0x1160($t6)
	lw	$t7, 0xf0($t6)
	addiu	$t8, $t7, 1
#This function is called from Behavior  bhvBitfsTiltingInvertedPyramid
#It has virtual address 0x802BCF40 and rom address 0x77F40
 bhv_platform_normals_init:
	addiu	$sp, $sp, -0x20
	sw	$ra, 0x14($sp)
	lui	$t6, 0x8036
	lw	$t6, 0x1160($t6)
	addiu	$t7, $t6, 0x21c
	sw	$t7, 0x1c($sp)
	lui	$t8, 0x8036
	lw	$t8, 0x1160($t8)
#This function is called from Behavior  bhvBitfsTiltingInvertedPyramid
#It has virtual address 0x802BD058 and rom address 0x78058
 bhv_tilting_inverted_pyramid_loop:
	addiu	$sp, $sp, -0x80
	sw	$ra, 0x14($sp)
	sw	$zero, 0x3c($sp)
	lui	$t6, 0x8036
	lw	$t6, 0x1160($t6)
	addiu	$t7, $t6, 0x21c
	sw	$t7, 0x34($sp)
	lui	$t8, 0x8036
#This function is called from Behavior  bhvBitfsSinkingPlatforms
#It has virtual address 0x802AEC40 and rom address 0x69C40
 bhv_bitfs_sinking_platform_loop:
	lui	$t6, 0x8036
	lw	$t6, 0x1160($t6)
	lui	$at, 0x8038
	lhu	$t7, 0xf6($t6)
	lwc1	$f16, 0xa4($t6)
	sra	$t8, $t7, 4
	sll	$t9, $t8, 2
	addu	$at, $at, $t9
#This function is called from Behavior  bhvBitfsSinkingCagePlatform
#It has virtual address 0x802AECDC and rom address 0x69CDC
 bhv_bitfs_sinking_cage_platform_loop:
	lui	$t6, 0x8036
	lw	$t6, 0x1160($t6)
	lw	$t7, 0x144($t6)
	beqz	$t7, 0x84
	nop	
	lui	$t8, 0x8036
	lw	$t8, 0x1160($t8)
	lw	$t9, 0x154($t8)
#This function is called from Behavior  bhvActivatedBackAndForthPlatform
#It has virtual address 0x803097A4 and rom address 0xC47A4
 bhv_activated_back_and_forth_platform_init:
	addiu	$sp, $sp, -0x20
	sw	$ra, 0x14($sp)
	lui	$t6, 0x8036
	lw	$t6, 0x1160($t6)
	lw	$t7, 0x188($t6)
	sra	$t8, $t7, 0x10
	andi	$t9, $t8, 0xffff
	andi	$t0, $t9, 0x300
#This function is called from Behavior  bhvActivatedBackAndForthPlatform
#It has virtual address 0x803098C0 and rom address 0xC48C0
 bhv_activated_back_and_forth_platform_update:
	addiu	$sp, $sp, -0x28
	sw	$ra, 0x14($sp)
	lui	$t6, 0x8036
	lw	$t6, 0x1158($t6)
	lui	$t8, 0x8036
	lw	$t8, 0x1160($t8)
	lw	$t7, 0x214($t6)
	bne	$t7, $t8, 0x3c
#This function is called from Behavior  bhvSquishablePlatform
#It has virtual address 0x802AEBC8 and rom address 0x69BC8
 bhv_squishable_platform_loop:
	lui	$t6, 0x8036
	lw	$t6, 0x1160($t6)
	lui	$at, 0x8038
	mtc1	$zero, $f8
	lhu	$t7, 0xf6($t6)
	sra	$t8, $t7, 4
	sll	$t9, $t8, 2
	addu	$at, $at, $t9
#This function is called from Behavior  bhvWfTumblingBridge
#It has virtual address 0x802AD890 and rom address 0x68890
 bhv_tumbling_bridge_loop:
	addiu	$sp, $sp, -0x18
	sw	$ra, 0x14($sp)
	lui	$a0, 0x8033
	jal	 cur_obj_call_action_function
	addiu	$a0, $a0, 0x2dc
	b	0x1c
	nop	
	lw	$ra, 0x14($sp)
#This function is called from Behavior  bhvLllRotatingBlockWithFireBars
#It has virtual address 0x802BC618 and rom address 0x77618
 bhv_lll_rotating_block_fire_bars_loop:
	addiu	$sp, $sp, -0x18
	sw	$ra, 0x14($sp)
	lui	$a0, 0x8033
	jal	 cur_obj_call_action_function
	addiu	$a0, $a0, 0x830
	lui	$t6, 0x8036
	lw	$t6, 0x1160($t6)
	lw	$t7, 0x144($t6)
#This function is called from Behavior  bhvLllRotatingHexagonalRing
#It has virtual address 0x802BCA74 and rom address 0x77A74
 bhv_lll_rotating_hexagonal_ring_loop:
	addiu	$sp, $sp, -0x20
	sw	$ra, 0x14($sp)
	lui	$at, 0x457a
	lui	$t6, 0x8036
	lw	$t6, 0x1160($t6)
	mtc1	$at, $f4
	nop	
	swc1	$f4, 0x194($t6)
#This function is called from Behavior  bhvLllSinkingRockBlock
#It has virtual address 0x802BC22C and rom address 0x7722C
 bhv_lll_sinking_rock_block_loop:
	addiu	$sp, $sp, -0x18
	sw	$ra, 0x14($sp)
	lui	$t6, 0x8036
	lw	$t6, 0x1160($t6)
	addiu	$a2, $zero, 0x7c
	addiu	$a3, $zero, -0x6e
	addiu	$a0, $t6, 0x104
	jal	 lll_octagonal_mesh_find_y_offset
#This function is called from Behavior  bhvLllSinkingSquarePlatforms
#It has virtual address 0x802BCE58 and rom address 0x77E58
 bhv_lll_sinking_square_platforms_loop:
	addiu	$sp, $sp, -0x20
	sw	$ra, 0x14($sp)
	lui	$at, 0x3f00
	mtc1	$at, $f4
	nop	
	swc1	$f4, 0x1c($sp)
	addiu	$t6, $zero, 0x100
	sw	$t6, 0x18($sp)
#This function is called from Behavior  bhvLllMovingOctagonalMeshPlatform
#It has virtual address 0x802BC0F0 and rom address 0x770F0
 bhv_lll_moving_octagonal_mesh_platform_loop:
	addiu	$sp, $sp, -0x18
	sw	$ra, 0x14($sp)
	lui	$t6, 0x8036
	lw	$t6, 0x1160($t6)
	lw	$t7, 0x14c($t6)
	bnez	$t7, 0x40
	nop	
	lui	$t8, 0x8036
#This function is called from Behavior  bhvLllRollingLog
#It has virtual address 0x802F3B98 and rom address 0xAEB98
 bhv_lll_rolling_log_init:
	lui	$at, 0x45a0
	lui	$t6, 0x8036
	lw	$t6, 0x1160($t6)
	mtc1	$at, $f4
	nop	
	swc1	$f4, 0xf8($t6)
	lui	$at, 0x45bc
	lui	$t7, 0x8036
#This function is called from Behavior  bhvLllRollingLog
#It has virtual address 0x802F36A4 and rom address 0xAE6A4
 bhv_rolling_log_loop:
	addiu	$sp, $sp, -0x20
	sw	$ra, 0x14($sp)
	lui	$t6, 0x8036
	lw	$t6, 0x1160($t6)
	lwc1	$f4, 0xa0($t6)
	swc1	$f4, 0x1c($sp)
	lui	$t7, 0x8036
	lw	$t7, 0x1160($t7)
#This function is called from Behavior  bhvSmallBully
#It has virtual address 0x802EB05C and rom address 0xA605C
 bhv_small_bully_init:
	addiu	$sp, $sp, -0x18
	sw	$ra, 0x14($sp)
	jal	 cur_obj_init_animation
	move	$a0, $zero
	lui	$t6, 0x8036
	lw	$t6, 0x1160($t6)
	lwc1	$f4, 0xa0($t6)
	swc1	$f4, 0x164($t6)
#This function is called from Behavior  bhvSmallBully
#It has virtual address 0x802EB9D0 and rom address 0xA69D0
 bhv_bully_loop:
	addiu	$sp, $sp, -0x30
	sw	$ra, 0x24($sp)
	sw	$s0, 0x20($sp)
	lui	$t6, 0x8036
	lw	$t6, 0x1160($t6)
	lwc1	$f4, 0xa0($t6)
	swc1	$f4, 0xf8($t6)
	lui	$t7, 0x8036
#This function is called from Behavior  bhvLllVolcanoFallingTrap
#It has virtual address 0x802F3A30 and rom address 0xAEA30
 bhv_volcano_trap_loop:
	addiu	$sp, $sp, -0x28
	sw	$ra, 0x1c($sp)
	sw	$s0, 0x18($sp)
	lui	$t6, 0x8036
	lw	$t6, 0x1160($t6)
	lw	$s0, 0x14c($t6)
	beqz	$s0, 0x4c
	nop	
#This function is called from Behavior  bhvVolcanoSoundLoop
#It has virtual address 0x802F0820 and rom address 0xAB820
 bhv_volcano_sound_loop:
	addiu	$sp, $sp, -0x18
	sw	$ra, 0x14($sp)
	lui	$a0, 0x4103
	jal	 cur_obj_play_sound_1
	ori	$a0, $a0, 1
	b	0x1c
	nop	
	lw	$ra, 0x14($sp)
#This function is called from Behavior  bhvSushiShark
#It has virtual address 0x802C1A90 and rom address 0x7CA90
 bhv_sushi_shark_loop:
	addiu	$sp, $sp, -0x20
	sw	$ra, 0x14($sp)
	lui	$t6, 0x8036
	lw	$t6, 0x1160($t6)
	lwc1	$f12, 0xa0($t6)
	jal	 find_water_level
	lwc1	$f14, 0xa8($t6)
	swc1	$f0, 0x1c($sp)
#This function is called from Behavior  bhvWhirlpool
#It has virtual address 0x802E7F70 and rom address 0xA2F70
 bhv_whirlpool_init:
	lui	$t6, 0x8036
	lw	$t6, 0x1160($t6)
	lw	$t7, 0xd0($t6)
	sw	$t7, 0xf4($t6)
	lui	$t8, 0x8036
	lw	$t8, 0x1160($t8)
	lw	$t9, 0xd8($t8)
	sw	$t9, 0xf8($t8)
#This function is called from Behavior  bhvWhirlpool
#It has virtual address 0x802E80DC and rom address 0xA30DC
 bhv_whirlpool_loop:
	addiu	$sp, $sp, -0x18
	sw	$ra, 0x14($sp)
	lui	$t6, 0x8036
	lw	$t6, 0x1160($t6)
	lui	$at, 0x8034
	lwc1	$f6, -0x7b08($at)
	lwc1	$f4, 0x15c($t6)
	c.lt.s	$f4, $f6
#This function is called from Behavior  bhvBowsersSub
#It has virtual address 0x802C1A40 and rom address 0x7CA40
 bhv_bowsers_sub_loop:
	addiu	$sp, $sp, -0x18
	sw	$ra, 0x14($sp)
	jal	 save_file_get_flags
	nop	
	andi	$t6, $v0, 0xa0
	beqz	$t6, 0x28
	nop	
	lui	$a0, 0x8036
#This function is called from Behavior  bhvDDDPole
#It has virtual address 0x803136CC and rom address 0xCE6CC
 bhv_ddd_pole_init:
	addiu	$sp, $sp, -0x18
	sw	$ra, 0x14($sp)
	jal	 save_file_get_flags
	nop	
	andi	$t6, $v0, 0xa0
	bnez	$t6, 0x30
	nop	
	lui	$a0, 0x8036
#This function is called from Behavior  bhvDDDPole
#It has virtual address 0x80313754 and rom address 0xCE754
 bhv_ddd_pole_update:
	addiu	$sp, $sp, -0x18
	sw	$ra, 0x14($sp)
	lui	$t6, 0x8036
	lw	$t6, 0x1160($t6)
	lw	$t7, 0x154($t6)
	slti	$at, $t7, 0x15
	bnez	$at, 0x78
	nop	
#This function is called from Behavior  bhvGiantPole
#It has virtual address 0x802A6C74 and rom address 0x61C74
 bhv_giant_pole_loop:
	addiu	$sp, $sp, -0x20
	sw	$ra, 0x14($sp)
	lui	$t6, 0x8036
	lw	$t6, 0x1160($t6)
	lw	$t7, 0x154($t6)
	bnez	$t7, 0x60
	nop	
	lui	$a0, 0x8036
#This function is called from Behavior  bhvSmallBomp
#It has virtual address 0x802ED78C and rom address 0xA878C
 bhv_small_bomp_init:
	addiu	$sp, $sp, -0x18
	sw	$ra, 0x14($sp)
	lui	$t6, 0x8036
	lw	$t6, 0x1160($t6)
	lw	$t7, 0xd4($t6)
	addiu	$t8, $t7, -0x4000
	sw	$t8, 0xd4($t6)
	lui	$t9, 0x8036
#This function is called from Behavior  bhvSmallBomp
#It has virtual address 0x802ED7FC and rom address 0xA87FC
 bhv_small_bomp_loop:
	addiu	$sp, $sp, -0x28
	sw	$ra, 0x1c($sp)
	sw	$s0, 0x18($sp)
	lui	$t6, 0x8036
	lw	$t6, 0x1160($t6)
	lw	$s0, 0x14c($t6)
	beqz	$s0, 0x4c
	nop	
#This function is called from Behavior  bhvLargeBomp
#It has virtual address 0x802EDACC and rom address 0xA8ACC
 bhv_large_bomp_init:
	addiu	$sp, $sp, -0x18
	sw	$ra, 0x14($sp)
	lui	$t6, 0x8036
	lw	$t6, 0x1160($t6)
	lw	$t7, 0xc8($t6)
	addiu	$t8, $t7, 0x4000
	sw	$t8, 0xc8($t6)
	jal	 random_float
#This function is called from Behavior  bhvLargeBomp
#It has virtual address 0x802EDB2C and rom address 0xA8B2C
 bhv_large_bomp_loop:
	addiu	$sp, $sp, -0x28
	sw	$ra, 0x1c($sp)
	sw	$s0, 0x18($sp)
	lui	$t6, 0x8036
	lw	$t6, 0x1160($t6)
	lw	$s0, 0x14c($t6)
	beqz	$s0, 0x4c
	nop	
#This function is called from Behavior  bhvWfRotatingWoodenPlatform
#It has virtual address 0x802AA774 and rom address 0x65774
 bhv_wf_rotating_wooden_platform_loop:
	addiu	$sp, $sp, -0x18
	sw	$ra, 0x14($sp)
	lui	$t6, 0x8036
	lw	$t6, 0x1160($t6)
	lw	$t7, 0x14c($t6)
	bnez	$t7, 0x5c
	nop	
	lui	$t8, 0x8036
#This function is called from Behavior  bhvWfSlidingPlatform
#It has virtual address 0x802EDDFC and rom address 0xA8DFC
 bhv_wf_sliding_platform_init:
	addiu	$sp, $sp, -0x28
	sw	$ra, 0x1c($sp)
	sw	$s0, 0x18($sp)
	lui	$t6, 0x8036
	lw	$t6, 0x1160($t6)
	lw	$t7, 0xd4($t6)
	addiu	$t8, $t7, -0x4000
	sw	$t8, 0xd4($t6)
#This function is called from Behavior  bhvWfSlidingPlatform
#It has virtual address 0x802EDF28 and rom address 0xA8F28
 bhv_wf_sliding_platform_loop:
	addiu	$sp, $sp, -8
	lui	$t6, 0x8036
	lw	$t6, 0x1160($t6)
	lw	$a0, 0x14c($t6)
	beqz	$a0, 0x38
	nop	
	addiu	$at, $zero, 1
	beq	$a0, $at, 0x78
#This function is called from Behavior  Bhv_Custom_0x13000644
#It has virtual address 0x802AA1B8 and rom address 0x651B8
 bhv_wf_breakable_wall_loop:
	addiu	$sp, $sp, -0x18
	sw	$ra, 0x14($sp)
	lui	$t6, 0x8034
	addiu	$t6, $t6, -0x4e90
	lw	$t7, 0xc($t6)
	lui	$at, 0x88
	ori	$at, $at, 0x898
	bne	$t7, $at, 0xa8
#This function is called from Behavior  bhvKickableBoard
#It has virtual address 0x802AA3F4 and rom address 0x653F4
 bhv_kickable_board_loop:
	addiu	$sp, $sp, -0x28
	sw	$ra, 0x1c($sp)
	sw	$s0, 0x18($sp)
	lui	$t6, 0x8036
	lw	$t6, 0x1160($t6)
	lw	$s0, 0x14c($t6)
	beqz	$s0, 0x4c
	nop	
#This function is called from Behavior  bhvRotatingPlatform
#It has virtual address 0x802AA830 and rom address 0x65830
 bhv_rotating_platform_loop:
	addiu	$sp, $sp, -0x20
	sw	$ra, 0x14($sp)
	lui	$t6, 0x8036
	lw	$t6, 0x1160($t6)
	lw	$t7, 0x188($t6)
	sra	$t8, $t7, 0x18
	sb	$t8, 0x1f($sp)
	lui	$t9, 0x8036
#This function is called from Behavior  bhvPiranhaPlant
#It has virtual address 0x802BE5A0 and rom address 0x795A0
 bhv_piranha_plant_loop:
	addiu	$sp, $sp, -0x18
	sw	$ra, 0x14($sp)
	lui	$a0, 0x8033
	jal	 cur_obj_call_action_function
	addiu	$a0, $a0, 0x900
	lui	$t6, 0x8033
	lh	$t6, -0x2208($t6)
	addiu	$at, $zero, 0x18
#This function is called from Behavior  bhvBreakableBox
#It has virtual address 0x802B1B2C and rom address 0x6CB2C
 bhv_breakable_box_loop:
	addiu	$sp, $sp, -0x18
	sw	$ra, 0x14($sp)
	lui	$a0, 0x8036
	lui	$a1, 0x8033
	addiu	$a1, $a1, 0x3b0
	jal	 obj_set_hitbox
	lw	$a0, 0x1160($a0)
	jal	 cur_obj_set_model
#This function is called from Behavior  bhvFireSpitter
#It has virtual address 0x8030D598 and rom address 0xC8598
 bhv_fire_spitter_update:
	addiu	$sp, $sp, -0x28
	sw	$ra, 0x1c($sp)
	sw	$s0, 0x18($sp)
	lui	$t6, 0x8036
	lw	$t6, 0x1160($t6)
	jal	 cur_obj_scale
	lwc1	$f12, 0x2c($t6)
	lui	$at, 0x4220
#This function is called from Behavior  bhvChuckya
#It has virtual address 0x802AA0AC and rom address 0x650AC
 bhv_chuckya_loop:
	addiu	$sp, $sp, -0x30
	sw	$ra, 0x1c($sp)
	sw	$s0, 0x18($sp)
	lui	$at, 0x41a0
	mtc1	$at, $f4
	nop	
	swc1	$f4, 0x2c($sp)
	lui	$at, 0x4248
#This function is called from Behavior  bhvJumpingBox
#It has virtual address 0x802B288C and rom address 0x6D88C
 bhv_jumping_box_loop:
	addiu	$sp, $sp, -0x28
	sw	$ra, 0x1c($sp)
	sw	$s0, 0x18($sp)
	lui	$t6, 0x8036
	lw	$t6, 0x1160($t6)
	lw	$s0, 0x124($t6)
	beqz	$s0, 0x4c
	nop	
#This function is called from Behavior  bhvTiltingBowserLavaPlatform
#It has virtual address 0x802A2BC4 and rom address 0x5DBC4
 cur_obj_rotate_face_angle_using_vel:
	lui	$t6, 0x8036
	lw	$t6, 0x1160($t6)
	lw	$t7, 0xd0($t6)
	lw	$t8, 0x114($t6)
	addu	$t9, $t7, $t8
	sw	$t9, 0xd0($t6)
	lui	$t0, 0x8036
	lw	$t0, 0x1160($t0)
#This function is called from Behavior  bhvBowserBomb
#It has virtual address 0x802ECC14 and rom address 0xA7C14
 bhv_bowser_bomb_loop:
	addiu	$sp, $sp, -0x18
	sw	$ra, 0x14($sp)
	lui	$a0, 0x8036
	lui	$a1, 0x8036
	lw	$a1, 0x1158($a1)
	jal	 obj_check_if_collided_with_object
	lw	$a0, 0x1160($a0)
	addiu	$at, $zero, 1
#This function is called from Behavior  bhvFallingBowserPlatform
#It has virtual address 0x802B8384 and rom address 0x73384
 bhv_falling_bowser_platform_loop:
	addiu	$sp, $sp, -0x18
	sw	$ra, 0x14($sp)
	lui	$a0, 0x8033
	jal	 cur_obj_call_action_function
	addiu	$a0, $a0, 0x67c
	b	0x1c
	nop	
	lw	$ra, 0x14($sp)
#This function is called from Behavior  bhvTtmRollingLog
#It has virtual address 0x802F336C and rom address 0xAE36C
 bhv_ttm_rolling_log_init:
	lui	$at, 0x8034
	lui	$t6, 0x8036
	lw	$t6, 0x1160($t6)
	lwc1	$f4, -0x77e8($at)
	swc1	$f4, 0xf8($t6)
	lui	$at, 0x8034
	lui	$t7, 0x8036
	lw	$t7, 0x1160($t7)
#This function is called from Behavior  bhvMontyMoleHole
#It has virtual address 0x803043F8 and rom address 0xBF3F8
 bhv_monty_mole_hole_update:
	addiu	$sp, $sp, -0x18
	sw	$ra, 0x14($sp)
	lui	$t6, 0x8036
	lw	$t6, 0x1160($t6)
	lw	$t7, 0x68($t6)
	bne	$t7, $t6, 0x3c
	nop	
	lui	$a0, 0x1300
#This function is called from Behavior  Bhv_Custom_0x13001cb4
#It has virtual address 0x802BBB98 and rom address 0x76B98
 bhv_ukiki_init:
	addiu	$sp, $sp, -0x18
	sw	$ra, 0x14($sp)
	lui	$t6, 0x8036
	lw	$t6, 0x1160($t6)
	addiu	$at, $zero, 1
	lw	$t7, 0x144($t6)
	bne	$t7, $at, 0x5c
	nop	
#This function is called from Behavior  Bhv_Custom_0x13001cb4
#It has virtual address 0x802BBC0C and rom address 0x76C0C
 bhv_ukiki_loop:
	addiu	$sp, $sp, -0x28
	sw	$ra, 0x1c($sp)
	sw	$s0, 0x18($sp)
	lui	$t6, 0x8036
	lw	$t6, 0x1160($t6)
	lw	$s0, 0x124($t6)
	beqz	$s0, 0x4c
	nop	
