DATA FIRSTNUM
DATA SECONDNUM

MOV X -256
SUB X 200
MOV X ACC

MOV Y 255
ADD Y 250
MOV Y ACC

;6D 94C0
MUL X Y
STORE X FIRSTNUM
MOV X ACC
STORE X SECONDNUM
LOOP4EVER:
        BRA LOOP4EVER