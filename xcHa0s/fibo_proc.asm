DATA FIB10

MOV X 10
PSH X
JMP FIBO
POP X
STORE X FIB10

LOOP4EVER:
    BRA LOOP4EVER

FIBO:
	POP Y
	POP X
	PSH Y
	;in X am parametrul
	MOV Y X
	CMP X 1
	BGT CALCREC
		POP Y
		PSH X
		PSH Y
		RET
	CALCREC:
	
	DEC X
	PSH X
	PSH X
	JMP FIBO
	POP Y
	;Y = FIBO(n-1)
	POP X
	;X = n-1
	PSH Y
	DEC X
	PSH X
	JMP FIBO
	POP X
	;X = FIBO(n-2)
	POP Y
	;Y = FIBO(n-1)
	ADD X Y
	MOV X ACC
	POP Y
	;Y = IP
	PSH X
	PSH Y

RET