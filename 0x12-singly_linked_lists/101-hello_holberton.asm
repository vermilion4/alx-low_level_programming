            SECTION .data
msg:        db "Hello, Holberton", 0
fmt:        db "%s", 10, 0

            SECTION .text
            extern printf
            global main
main:
            mov esi, msg
            mov edi, fmt
            mov eax, 0
            call printf
            mov eax, 1
            ret
            """
        self.assertEqual(assembler.assemble(code), expected)
