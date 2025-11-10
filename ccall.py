import ctypes
import os

library_path = os.path.abspath('./build/libccall.so')
my_lib = ctypes.CDLL(library_path)

my_lib.matmulcpp()
my_lib.matmulcpp()
my_lib.matmulcpp()
my_lib.matmulcpp()
my_lib.matmulcpp()