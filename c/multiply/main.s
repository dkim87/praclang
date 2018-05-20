	.section	__TEXT,__text,regular,pure_instructions
	.macosx_version_min 10, 13
	.intel_syntax noprefix
	.globl	_int_pow                ## -- Begin function int_pow
	.p2align	4, 0x90
_int_pow:                               ## @int_pow
Lfunc_begin0:
	.file	1 "main.c"
	.loc	1 5 0                   ## main.c:5:0
	.cfi_startproc
## %bb.0:
	push	rbp
	.cfi_def_cfa_offset 16
	.cfi_offset rbp, -16
	mov	rbp, rsp
	.cfi_def_cfa_register rbp
	mov	dword ptr [rbp - 4], edi
	mov	dword ptr [rbp - 8], esi
Ltmp0:
	.loc	1 6 9 prologue_end      ## main.c:6:9
	mov	dword ptr [rbp - 12], 1
LBB0_1:                                 ## =>This Inner Loop Header: Depth=1
	.loc	1 7 5                   ## main.c:7:5
	cmp	dword ptr [rbp - 8], 0
	je	LBB0_5
## %bb.2:                               ##   in Loop: Header=BB0_1 Depth=1
Ltmp1:
	.loc	1 9 13                  ## main.c:9:13
	mov	eax, dword ptr [rbp - 8]
	.loc	1 9 17 is_stmt 0        ## main.c:9:17
	and	eax, 1
	cmp	eax, 0
Ltmp2:
	.loc	1 9 13                  ## main.c:9:13
	je	LBB0_4
## %bb.3:                               ##   in Loop: Header=BB0_1 Depth=1
Ltmp3:
	.loc	1 10 22 is_stmt 1       ## main.c:10:22
	mov	eax, dword ptr [rbp - 4]
	.loc	1 10 19 is_stmt 0       ## main.c:10:19
	imul	eax, dword ptr [rbp - 12]
	mov	dword ptr [rbp - 12], eax
Ltmp4:
LBB0_4:                                 ##   in Loop: Header=BB0_1 Depth=1
	.loc	1 0 19                  ## main.c:0:19
	mov	eax, 2
	.loc	1 11 13 is_stmt 1       ## main.c:11:13
	mov	ecx, dword ptr [rbp - 8]
	mov	dword ptr [rbp - 16], eax ## 4-byte Spill
	mov	eax, ecx
	cdq
	mov	ecx, dword ptr [rbp - 16] ## 4-byte Reload
	idiv	ecx
	mov	dword ptr [rbp - 8], eax
	.loc	1 12 17                 ## main.c:12:17
	mov	eax, dword ptr [rbp - 4]
	.loc	1 12 14 is_stmt 0       ## main.c:12:14
	imul	eax, dword ptr [rbp - 4]
	mov	dword ptr [rbp - 4], eax
Ltmp5:
	.loc	1 7 5 is_stmt 1         ## main.c:7:5
	jmp	LBB0_1
LBB0_5:
	.loc	1 14 12                 ## main.c:14:12
	mov	eax, dword ptr [rbp - 12]
	.loc	1 14 5 is_stmt 0        ## main.c:14:5
	pop	rbp
	ret
Ltmp6:
Lfunc_end0:
	.cfi_endproc
                                        ## -- End function
	.globl	_main                   ## -- Begin function main
	.p2align	4, 0x90
_main:                                  ## @main
Lfunc_begin1:
	.loc	1 17 0 is_stmt 1        ## main.c:17:0
	.cfi_startproc
## %bb.0:
	push	rbp
	.cfi_def_cfa_offset 16
	.cfi_offset rbp, -16
	mov	rbp, rsp
	.cfi_def_cfa_register rbp
	xor	eax, eax
	mov	dword ptr [rbp - 4], 0
Ltmp7:
	.loc	1 18 9 prologue_end     ## main.c:18:9
	mov	dword ptr [rbp - 8], 5
	.loc	1 19 9                  ## main.c:19:9
	mov	dword ptr [rbp - 12], 5
	.loc	1 21 5                  ## main.c:21:5
	pop	rbp
	ret
Ltmp8:
Lfunc_end1:
	.cfi_endproc
                                        ## -- End function
	.section	__DWARF,__debug_str,regular,debug
Linfo_string:
	.asciz	"clang version 6.0.0 (tags/RELEASE_600/final)" ## string offset=0
	.asciz	"main.c"                ## string offset=45
	.asciz	"/Users/dqmacair/praclang/c/multiply" ## string offset=52
	.asciz	"int_pow"               ## string offset=88
	.asciz	"main"                  ## string offset=96
	.asciz	"int"                   ## string offset=101
	.asciz	"base"                  ## string offset=105
	.asciz	"exp"                   ## string offset=110
	.asciz	"result"                ## string offset=114
	.asciz	"x"                     ## string offset=121
	.asciz	"y"                     ## string offset=123
	.section	__DWARF,__debug_abbrev,regular,debug
Lsection_abbrev:
	.byte	1                       ## Abbreviation Code
	.byte	17                      ## DW_TAG_compile_unit
	.byte	1                       ## DW_CHILDREN_yes
	.byte	37                      ## DW_AT_producer
	.byte	14                      ## DW_FORM_strp
	.byte	19                      ## DW_AT_language
	.byte	5                       ## DW_FORM_data2
	.byte	3                       ## DW_AT_name
	.byte	14                      ## DW_FORM_strp
	.byte	16                      ## DW_AT_stmt_list
	.byte	23                      ## DW_FORM_sec_offset
	.byte	27                      ## DW_AT_comp_dir
	.byte	14                      ## DW_FORM_strp
	.byte	17                      ## DW_AT_low_pc
	.byte	1                       ## DW_FORM_addr
	.byte	18                      ## DW_AT_high_pc
	.byte	6                       ## DW_FORM_data4
	.byte	0                       ## EOM(1)
	.byte	0                       ## EOM(2)
	.byte	2                       ## Abbreviation Code
	.byte	46                      ## DW_TAG_subprogram
	.byte	1                       ## DW_CHILDREN_yes
	.byte	17                      ## DW_AT_low_pc
	.byte	1                       ## DW_FORM_addr
	.byte	18                      ## DW_AT_high_pc
	.byte	6                       ## DW_FORM_data4
	.byte	64                      ## DW_AT_frame_base
	.byte	24                      ## DW_FORM_exprloc
	.byte	3                       ## DW_AT_name
	.byte	14                      ## DW_FORM_strp
	.byte	58                      ## DW_AT_decl_file
	.byte	11                      ## DW_FORM_data1
	.byte	59                      ## DW_AT_decl_line
	.byte	11                      ## DW_FORM_data1
	.byte	39                      ## DW_AT_prototyped
	.byte	25                      ## DW_FORM_flag_present
	.byte	73                      ## DW_AT_type
	.byte	19                      ## DW_FORM_ref4
	.byte	63                      ## DW_AT_external
	.byte	25                      ## DW_FORM_flag_present
	.byte	0                       ## EOM(1)
	.byte	0                       ## EOM(2)
	.byte	3                       ## Abbreviation Code
	.byte	5                       ## DW_TAG_formal_parameter
	.byte	0                       ## DW_CHILDREN_no
	.byte	2                       ## DW_AT_location
	.byte	24                      ## DW_FORM_exprloc
	.byte	3                       ## DW_AT_name
	.byte	14                      ## DW_FORM_strp
	.byte	58                      ## DW_AT_decl_file
	.byte	11                      ## DW_FORM_data1
	.byte	59                      ## DW_AT_decl_line
	.byte	11                      ## DW_FORM_data1
	.byte	73                      ## DW_AT_type
	.byte	19                      ## DW_FORM_ref4
	.byte	0                       ## EOM(1)
	.byte	0                       ## EOM(2)
	.byte	4                       ## Abbreviation Code
	.byte	52                      ## DW_TAG_variable
	.byte	0                       ## DW_CHILDREN_no
	.byte	2                       ## DW_AT_location
	.byte	24                      ## DW_FORM_exprloc
	.byte	3                       ## DW_AT_name
	.byte	14                      ## DW_FORM_strp
	.byte	58                      ## DW_AT_decl_file
	.byte	11                      ## DW_FORM_data1
	.byte	59                      ## DW_AT_decl_line
	.byte	11                      ## DW_FORM_data1
	.byte	73                      ## DW_AT_type
	.byte	19                      ## DW_FORM_ref4
	.byte	0                       ## EOM(1)
	.byte	0                       ## EOM(2)
	.byte	5                       ## Abbreviation Code
	.byte	36                      ## DW_TAG_base_type
	.byte	0                       ## DW_CHILDREN_no
	.byte	3                       ## DW_AT_name
	.byte	14                      ## DW_FORM_strp
	.byte	62                      ## DW_AT_encoding
	.byte	11                      ## DW_FORM_data1
	.byte	11                      ## DW_AT_byte_size
	.byte	11                      ## DW_FORM_data1
	.byte	0                       ## EOM(1)
	.byte	0                       ## EOM(2)
	.byte	0                       ## EOM(3)
	.section	__DWARF,__debug_info,regular,debug
Lsection_info:
Lcu_begin0:
	.long	168                     ## Length of Unit
	.short	4                       ## DWARF version number
Lset0 = Lsection_abbrev-Lsection_abbrev ## Offset Into Abbrev. Section
	.long	Lset0
	.byte	8                       ## Address Size (in bytes)
	.byte	1                       ## Abbrev [1] 0xb:0xa1 DW_TAG_compile_unit
	.long	0                       ## DW_AT_producer
	.short	12                      ## DW_AT_language
	.long	45                      ## DW_AT_name
Lset1 = Lline_table_start0-Lsection_line ## DW_AT_stmt_list
	.long	Lset1
	.long	52                      ## DW_AT_comp_dir
	.quad	Lfunc_begin0            ## DW_AT_low_pc
Lset2 = Lfunc_end1-Lfunc_begin0         ## DW_AT_high_pc
	.long	Lset2
	.byte	2                       ## Abbrev [2] 0x2a:0x44 DW_TAG_subprogram
	.quad	Lfunc_begin0            ## DW_AT_low_pc
Lset3 = Lfunc_end0-Lfunc_begin0         ## DW_AT_high_pc
	.long	Lset3
	.byte	1                       ## DW_AT_frame_base
	.byte	86
	.long	88                      ## DW_AT_name
	.byte	1                       ## DW_AT_decl_file
	.byte	4                       ## DW_AT_decl_line
                                        ## DW_AT_prototyped
	.long	164                     ## DW_AT_type
                                        ## DW_AT_external
	.byte	3                       ## Abbrev [3] 0x43:0xe DW_TAG_formal_parameter
	.byte	2                       ## DW_AT_location
	.byte	145
	.byte	124
	.long	105                     ## DW_AT_name
	.byte	1                       ## DW_AT_decl_file
	.byte	4                       ## DW_AT_decl_line
	.long	164                     ## DW_AT_type
	.byte	3                       ## Abbrev [3] 0x51:0xe DW_TAG_formal_parameter
	.byte	2                       ## DW_AT_location
	.byte	145
	.byte	120
	.long	110                     ## DW_AT_name
	.byte	1                       ## DW_AT_decl_file
	.byte	4                       ## DW_AT_decl_line
	.long	164                     ## DW_AT_type
	.byte	4                       ## Abbrev [4] 0x5f:0xe DW_TAG_variable
	.byte	2                       ## DW_AT_location
	.byte	145
	.byte	116
	.long	114                     ## DW_AT_name
	.byte	1                       ## DW_AT_decl_file
	.byte	6                       ## DW_AT_decl_line
	.long	164                     ## DW_AT_type
	.byte	0                       ## End Of Children Mark
	.byte	2                       ## Abbrev [2] 0x6e:0x36 DW_TAG_subprogram
	.quad	Lfunc_begin1            ## DW_AT_low_pc
Lset4 = Lfunc_end1-Lfunc_begin1         ## DW_AT_high_pc
	.long	Lset4
	.byte	1                       ## DW_AT_frame_base
	.byte	86
	.long	96                      ## DW_AT_name
	.byte	1                       ## DW_AT_decl_file
	.byte	17                      ## DW_AT_decl_line
                                        ## DW_AT_prototyped
	.long	164                     ## DW_AT_type
                                        ## DW_AT_external
	.byte	4                       ## Abbrev [4] 0x87:0xe DW_TAG_variable
	.byte	2                       ## DW_AT_location
	.byte	145
	.byte	120
	.long	121                     ## DW_AT_name
	.byte	1                       ## DW_AT_decl_file
	.byte	18                      ## DW_AT_decl_line
	.long	164                     ## DW_AT_type
	.byte	4                       ## Abbrev [4] 0x95:0xe DW_TAG_variable
	.byte	2                       ## DW_AT_location
	.byte	145
	.byte	116
	.long	123                     ## DW_AT_name
	.byte	1                       ## DW_AT_decl_file
	.byte	19                      ## DW_AT_decl_line
	.long	164                     ## DW_AT_type
	.byte	0                       ## End Of Children Mark
	.byte	5                       ## Abbrev [5] 0xa4:0x7 DW_TAG_base_type
	.long	101                     ## DW_AT_name
	.byte	5                       ## DW_AT_encoding
	.byte	4                       ## DW_AT_byte_size
	.byte	0                       ## End Of Children Mark
	.section	__DWARF,__debug_ranges,regular,debug
Ldebug_range:
	.section	__DWARF,__debug_macinfo,regular,debug
Ldebug_macinfo:
Lcu_macro_begin0:
	.byte	0                       ## End Of Macro List Mark
	.section	__DWARF,__apple_names,regular,debug
Lnames_begin:
	.long	1212240712              ## Header Magic
	.short	1                       ## Header Version
	.short	0                       ## Header Hash Function
	.long	2                       ## Header Bucket Count
	.long	2                       ## Header Hash Count
	.long	12                      ## Header Data Length
	.long	0                       ## HeaderData Die Offset Base
	.long	1                       ## HeaderData Atom Count
	.short	1                       ## DW_ATOM_die_offset
	.short	6                       ## DW_FORM_data4
	.long	0                       ## Bucket 0
	.long	1                       ## Bucket 1
	.long	2090499946              ## Hash in Bucket 0
	.long	-1620894875             ## Hash in Bucket 1
	.long	LNames1-Lnames_begin    ## Offset in Bucket 0
	.long	LNames0-Lnames_begin    ## Offset in Bucket 1
LNames1:
	.long	96                      ## main
	.long	1                       ## Num DIEs
	.long	110
	.long	0
LNames0:
	.long	88                      ## int_pow
	.long	1                       ## Num DIEs
	.long	42
	.long	0
	.section	__DWARF,__apple_objc,regular,debug
Lobjc_begin:
	.long	1212240712              ## Header Magic
	.short	1                       ## Header Version
	.short	0                       ## Header Hash Function
	.long	1                       ## Header Bucket Count
	.long	0                       ## Header Hash Count
	.long	12                      ## Header Data Length
	.long	0                       ## HeaderData Die Offset Base
	.long	1                       ## HeaderData Atom Count
	.short	1                       ## DW_ATOM_die_offset
	.short	6                       ## DW_FORM_data4
	.long	-1                      ## Bucket 0
	.section	__DWARF,__apple_namespac,regular,debug
Lnamespac_begin:
	.long	1212240712              ## Header Magic
	.short	1                       ## Header Version
	.short	0                       ## Header Hash Function
	.long	1                       ## Header Bucket Count
	.long	0                       ## Header Hash Count
	.long	12                      ## Header Data Length
	.long	0                       ## HeaderData Die Offset Base
	.long	1                       ## HeaderData Atom Count
	.short	1                       ## DW_ATOM_die_offset
	.short	6                       ## DW_FORM_data4
	.long	-1                      ## Bucket 0
	.section	__DWARF,__apple_types,regular,debug
Ltypes_begin:
	.long	1212240712              ## Header Magic
	.short	1                       ## Header Version
	.short	0                       ## Header Hash Function
	.long	1                       ## Header Bucket Count
	.long	1                       ## Header Hash Count
	.long	20                      ## Header Data Length
	.long	0                       ## HeaderData Die Offset Base
	.long	3                       ## HeaderData Atom Count
	.short	1                       ## DW_ATOM_die_offset
	.short	6                       ## DW_FORM_data4
	.short	3                       ## DW_ATOM_die_tag
	.short	5                       ## DW_FORM_data2
	.short	4                       ## DW_ATOM_type_flags
	.short	11                      ## DW_FORM_data1
	.long	0                       ## Bucket 0
	.long	193495088               ## Hash in Bucket 0
	.long	Ltypes0-Ltypes_begin    ## Offset in Bucket 0
Ltypes0:
	.long	101                     ## int
	.long	1                       ## Num DIEs
	.long	164
	.short	36
	.byte	0
	.long	0

.subsections_via_symbols
	.section	__DWARF,__debug_line,regular,debug
Lsection_line:
Lline_table_start0:
