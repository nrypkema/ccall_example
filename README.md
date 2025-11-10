# ccall_example
Demo for ccall+Eigen slowdown in Julia

## need
```
sudo apt-get install libeigen3-dev
sudo apt-get install libopenblas-dev
```

## build
```
cd build
cmake ..
make
```

## run
C++
```
./build/ccall_ex
Elapsed: 604.718 ms
Elapsed: 573.624 ms
Elapsed: 585.415 ms
Elapsed: 559.289 ms
Elapsed: 576.903 ms
```

Python
```
python3 ccall.py
Elapsed: 588.029 ms
Elapsed: 600.39 ms
Elapsed: 580.682 ms
Elapsed: 615.011 ms
Elapsed: 585.849 ms
```

Julia
```
julia ccall.jl
Elapsed: 1437.66 ms
Elapsed: 1405.58 ms
Elapsed: 1389.82 ms
Elapsed: 1394.7 ms
Elapsed: 1395.29 ms
```
