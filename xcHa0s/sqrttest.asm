DATA RADVAL


MOV X 5
MOV ACC X

MOV Y 9

;6D 94C0
POW Y
RAD
MOV X ACC
STORE X RADVAL
LOOP4EVER:
        BRA LOOP4EVER