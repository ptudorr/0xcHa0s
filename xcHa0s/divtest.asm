DATA FIRSTNUM
DATA SECONDNUM
DATA REST


MOV X 123
MOV Y 100
MUL X Y
MOV X ACC
ADD X 45
MOV X ACC

MOV Y 135
MOV ACC Y

DIV ACC -29

;6D 94C0
;MUL X Y
STORE X FIRSTNUM
MOV X ACC
STORE X SECONDNUM

MOV X 0
MOV Y 219
MOV ACC Y

MOD ACC -10

MOV X ACC
STORE X REST

LOOP4EVER:
        BRA LOOP4EVER