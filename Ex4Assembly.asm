MOV AX, 4000h     ; Define pra 4000h
MOV DS, AX        ; Carrega no segmento de dados
MOV BX, 00h
MOV CX, 0FFFFh    ; Casa final
MOV AL, 0AAh      ; Valor a ser gravado

memoria:     
    MOV DS:[BX], AL  ; Armazena o valor em [BX]
    ADD BX, 01h
    LOOP memoria ; Vai reduzindo o CX até 0

HLT
