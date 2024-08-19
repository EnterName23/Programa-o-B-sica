MOV BX, 0000h     ; Define pra 0000h
MOV SS, AX        ; Carrega no segmento de PILHA
MOV SP, 05FFCh
MOV CX, 00FFCh    ; CONTADOR
MOV AX, 0BBBBh      ; Valor a ser gravado

PILHA:     
    PUSH AX ; Empilha AX
    LOOP PILHA ; Vai reduzindo o CX ate 0

HLT
