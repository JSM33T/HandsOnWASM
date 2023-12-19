## build
        wip

## run
```emsdk_env.ps1``` (for windows)

```emcc add.c -o add.wasm --no-entry -s EXPORTED_FUNCTIONS=_add```



## Issues

unable to to go beyond a limit fo n without overflow.

### Resolution
1. without using any library
        
2. Using a library, probably GMP (GNU Multiple Precision Arithmetic Library)



