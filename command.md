## Command for compilation without import error
```powershell
emcc test.c -o test.wasm --no-entry -s EXPORTED_FUNCTIONS=_sum
emcc add.c -o add.wasm --no-entry -s EXPORTED_FUNCTIONS=_add
```
.\emsdk_env.ps1