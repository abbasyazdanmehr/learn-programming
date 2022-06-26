	#data segmetn
	.data
	
	hello: .asciiz "Hello World!"
	
	.text 
	
	la $a0, hello 
	li $v0, 4
	syscall
	
	
	li $v0, 10
	syscall