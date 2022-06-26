	.data
	getfirst: .asciiz "Enter the first number: "
	getsecond: .asciiz "Enter the second number: "
	.text
	
	la $a0, getfirst
	li $v0, 4
	syscall 
	
	li $v0, 5
	syscall
	move $t0, $v0
	
	
	la $a0, getsecond
	li $v0, 4
	syscall
	
	li $v0, 5
	syscall
	move $t1, $v0
	
	addu $s0, $t0, $t1
	
	li $v0, 1
	move $a0, $s0
	syscall
	
	li $v0, 10
	syscall 
	
	
	
	