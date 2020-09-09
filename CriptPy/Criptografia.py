from ctypes import cdll
libcript = cdll.LoadLibrary("./libcript.so")
esc = int(input("Digite sua escolha abaixo\n1 - Criptografar\n2 - Descriptografar\nEscolha:"))

if esc == 1:
    func = libcript.cript
    func()
elif esc == 2:
    func = libcript.decript
    func()
